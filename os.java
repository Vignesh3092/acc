import java.util.concurrent.Semaphore;
import java.util.concurrent.locks.Lock;
import java.util.concurrent.locks.ReentrantLock;

public class ChildCareCenter {
    private Semaphore capacity;
    private Lock mutex;
    private int infantsCount;
    private int adultsCount;

    public ChildCareCenter() {
        capacity = new Semaphore(0);
        mutex = new ReentrantLock();
        infantsCount = 0;
        adultsCount = 0;
    }

    public void enterInfant() throws InterruptedException {
        capacity.acquire();
        mutex.lock();
        infantsCount++;
        mutex.unlock();
    }

    public void leaveInfant() {
        mutex.lock();
        infantsCount--;
        capacity.release();
        mutex.unlock();
    }

    public void enterAdult() throws InterruptedException {
        mutex.lock();
        adultsCount++;
        if (capacity.availablePermits() < 3) {
            mutex.unlock();
            capacity.acquire(3);
        } else {
            capacity.release(3);
            mutex.unlock();
        }
    }

    public void leaveAdult() throws InterruptedException {
        mutex.lock();
        adultsCount--;
        while (capacity.availablePermits() < 3) {
            mutex.unlock();
            Thread.sleep(100); // Wait for more infants to leave
            mutex.lock();
        }
        capacity.acquire(3);
        mutex.unlock();
    }
}

import java.util.concurrent.Semaphore;
import java.util.concurrent.locks.Lock;
import java.util.concurrent.locks.ReentrantLock;

public class ChildCareCenter {
    private Semaphore remainingCapacity = new Semaphore(0);
    private Lock lock = new ReentrantLock();
    private int numInfants = 0;

    public void infantEnter() throws InterruptedException {
        remainingCapacity.acquire();
        numInfants++;
    }

    public void infantLeave() {
        numInfants--;
        remainingCapacity.release();
    }

    public void adultEnter() {
        lock.lock();
        remainingCapacity.release(3);
    }

    public void adultLeave() {
        remainingCapacity.acquire(3);
        lock.unlock();
    }
}



import java.util.concurrent.Semaphore;
import java.util.concurrent.locks.Lock;
import java.util.concurrent.locks.ReentrantLock;

public class ChildCareCenter {
    private int numInfants;
    private int numAdults;
    private Semaphore capacity;
    private Lock lock;

    public ChildCareCenter(int maxCapacity) {
        this.numInfants = 0;
        this.numAdults = 0;
        this.capacity = new Semaphore(maxCapacity);
        this.lock = new ReentrantLock();
    }

    public void infantEnter() throws InterruptedException {
        capacity.acquire();
        lock.lock();
        try {
            numInfants++;
        } finally {
            lock.unlock();
        }
    }

    public void infantLeave() {
        lock.lock();
        try {
            numInfants--;
        } finally {
            lock.unlock();
        }
        capacity.release();
    }

    public void adultEnter() throws InterruptedException {
        capacity.acquire(3);
        lock.lock();
        try {
            numAdults++;
        } finally {
            lock.unlock();
        }
    }

    public void adultLeave() {
        lock.lock();
        try {
            numAdults--;
        } finally {
            lock.unlock();
        }
        capacity.release(3);
    }

    public int getNumInfants() {
        return numInfants;
    }

    public int getNumAdults() {
        return numAdults;
    }
}
