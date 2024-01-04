import java.util.concurrent.Semaphore;

class ChildCareCenter {
    private final Semaphore semaphore = new Semaphore(0);
    private final Object mutex = new Object();
    private int remainingCapacity = 0;

    public void addChild() throws InterruptedException {
        synchronized (mutex) {
            while (remainingCapacity <= 0) {
                mutex.wait();
            }
            semaphore.acquire();
            remainingCapacity--;
        }
    }

    public void addAdult() {
        synchronized (mutex) {
            remainingCapacity += 3;
            semaphore.release(3);
            mutex.notifyAll();
        }
    }

    public void removeAdult() throws InterruptedException {
        semaphore.acquire(3);
        synchronized (mutex) {
            remainingCapacity += 3;
            mutex.notifyAll();
        }
    }

    public static void main(String[] args) throws InterruptedException {
        ChildCareCenter center = new ChildCareCenter();
        Thread adult1 = new Thread(() -> {
            center.addAdult();
            try {
                Thread.sleep(500);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
            try {
                center.removeAdult();
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        });

        Thread adult2 = new Thread(() -> {
            center.addAdult();
            try {
                Thread.sleep(500);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
            try {
                center.removeAdult();
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        });

        Thread child1 = new Thread(() -> {
            try {
                center.addChild();
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        });

        Thread child2 = new Thread(() -> {
            try {
                center.addChild();
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        });

        Thread child3 = new Thread(() -> {
            try {
                center.addChild();
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        });

        adult1.start();
        adult2.start();
        child1.start();
        child2.start();
        child3.start();

        adult1.join();
        adult2.join();
        child1.join();
        child2.join();
        child3.join();
    }
}
