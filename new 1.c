//week 1
Consecutive
#include<stdio.h>
int main()
{
    int n,x=0,y=0,i;
    scanf("%d",&n);
    int a[100];
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        if(a[i]<a[i+1]){
        x=x+1;}
    }
    for(i=1;i<=n;i++)
    {
        if(a[i]>a[i+1]){
        y=y+1;}
    }
    if((x==n) || (y==n))
    {
        printf("Consecutive");
    }
    else
    {
        printf("Not Consecutive");
    }
}

Interleaving first half
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int half=(0+n-1)/2;
    for(i=0,j=half+1;i<=half,j<n;i++,j++)
    {
        printf("%d ",a[i]);
        printf("%d ",a[j]);
    }
}

Sliding Window maximum
#include<stdio.h>
int main()
{
    int n,k,i,summax=0;
    scanf("%d%d",&n,&k);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if(k>n)
    {
        printf("-1");
    }
    else{
        for(i=0;i<=n-k;i++)
        {
            int sum=0;
            for(int j=i;j<i+k;j++)
            {
                sum+=a[j];
            }
            if(sum>summax)
            {
                summax=sum;
            }
        }
        printf("%d",summax);
    }
}

Reverse the elements
#include<stdio.h>
int main()
{
    int i,j,n,k;
    scanf("%d%d",&n,&k);
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=k-1,j=0;i>=0;i--,j++)
    {
        b[j]=a[i];
    }
    for(i=k;i<n;i++)
    {
        b[i]=a[i];
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
}

Balanced Parentheses
#include <stdio.h>
#include<stdlib.h>

int main(){
 int num=-1,a[1000],i;
 fgets(a,sizeof(a),stdin);
 for(i=0;a[i]!='\0';i++)
 {
  if(a[0]=='}' || a[0]==']' || a[0]==')')
  {
   printf("0");
   break;
  }
  if(a[i]=='(' || a[i]=='{' || a[i]=='[')
  {
   num++;
  }
  else if(a[i]==')' || a[i]=='}' || a[i]==']')
  {
   num--;
  }
 }
 if(num==-1)
 {
  printf("1");
 }
 else
 {
  printf("0");
 }
 return 0;
}


//week 2

#include <stdio.h>

int main()
{
 int n,r,rev=0;
 scanf("%d",&n);
 while(n!=0)
 {
  r=n%10;
  rev=rev*10+r;
  n=n/10;
 }
 printf("%d",rev);
}
Reverse


#include <stdio.h>
main()
{
 int n;
 scanf("%d",&n);
 int a[n];
 for(int i=0;i<n;i++)
 {
    scanf("%d",&a[i]);
 }
 int k,b[n];
 scanf("%d",&k);
 while(k--)
 {
  for(int i=0;i<n;i++)
  {
   b[i]=a[i];
  }
  a[0]=b[n-1];
  for(int i=0;i<n-1;i++)
  {
   a[i+1]=b[i];
  }
 }
 for(int i=0;i<n;i++)
 {
  printf("%d ",a[i]);
 }
}rotate the list


#include <stdio.h>

int main()
{
 int n,i,j;
 scanf("%d",&n);
 int a[n];
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
  for(j=i+1;j<n;j++)
  {
   if(a[i]==a[j])
   {
    a[j]='$';
   }
  }
 }
 for(i=0;i<n;i++)
 {
  if(a[i]!='$')
  {
   printf("%d ",a[i]);
  }
 }
}
duplicates


#include <stdio.h>

int main()
{
 int n;
 scanf("%d",&n);
 int a[n],b[n];
 for(int i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
  b[i]=a[i];
 }
 for(int i=0;i<n;i++)
 {
  printf("%d ",a[i]);
 }
}random pointers


#include <stdio.h>
#include<string.h>
main()
{
 char s[100];
 scanf("%s",s);
 int n=strlen(s);
 for(int i=0;i<n;i++)
 {
  int c=0;
  for(int j=0;j<n;j++)
  {
   if(s[i]==s[j])
   {
    c=c+1;
   }
  }
  if(c==1)
  {
   printf("%c",s[i]);
   break;
  }
  else if(i==n-1)
  {
   printf("-1");
  }
 }
}first unique


//week 3
void Fraction(struct node *head)
{
    int c=0,b;
    scanf("%d",&b);
    p=(struct node*)malloc(sizeof(struct node));
    p=head;
    while(p!=NULL)
    {
        c++;
        p=p->next;
    }
    int d=1;
    int k=(int)ceil((double)c/b);
    //printf("%d\n",k);
    p=head;
    while(d!=k)
    {
        p=p->next;
        d++;
    }
    printf("%d",p->data);

    
}
fractional

void delete(struct node *head)
{
    int d,c=1,f=0;
    scanf("%d",&d);
    p=(struct node*)malloc(sizeof(struct node));
    new=(struct node*)malloc(sizeof(struct node));
    p=head;
    while(p!=NULL)
    {
        f++;
        p=p->next;
    }
    if(head==NULL || f==1)
    {
        printf("NULL");
    }
    else
    {
        p=head;
      while(c!=d)
       {
         c++;
         new=p;
         p=p->next;
       }
       p=p->next;
       new->next=p;
       p=head;
       if(c==1)
       {
        p=head->next;
       }
       while(p!=NULL)
      {
          printf("%d ",p->data);
          p=p->next;
      }

    }
}
Deletion

oid solve(struct node *head)
{
     int m,n;
     scanf("%d",&m);
     scanf("%d",&n);
     p=(struct node*)malloc(sizeof(struct node));
     new=(struct node*)malloc(sizeof(struct node));
     new->data=n;
     if(m==0)
     {
        p=head;
        head=new;
        head->next=p;
        p=head;
        while(p!=NULL)
        {
            printf("%d ",p->data);
            p=p->next;
        }
     }
     else if(m==1)
     {
        new->next=NULL;
        p=head;
        while(p->next!=NULL)
        {
            p=p->next;
        }
        p->next=new;
        p=head;
        while(p!=NULL)
        {
            printf("%d ",p->data);
            p=p->next;
        }
     }
     else if(m==-1)
     {
        int c=0,d=1,k;
        p=head;
        while(p!=NULL)
        {
            c++;
            p=p->next;
        }
        k=(c/2)+1;
        p=head;
        while(k-1!=d)
        {
            d++;
            p=p->next; 
        }
        new->next=p->next;
        p->next=new;
        p=head;
        while(p!=NULL)
        {
            printf("%d ",p->data);
            p=p->next;
        }
     }
     
} Insertion

struct node *prevnode,*currnode,*nextnode;
    prevnode=NULL;
    currnode=head;
    nextnode=head;
    while(nextnode!=0)
    {
        nextnode=nextnode->next;
        currnode->next=prevnode;
        prevnode=currnode;
        currnode=nextnode;
    }
    head=prevnode;
    p=head;
    while(p!=0)
    {
        printf("%d ",p->data);
        p=p->next;
    }
Reverse


//week 4
/add two numbers
#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head,*p;

int Count(int n){
    int c = 0;
    while(n != 0){
        c++;
        n = n / 10;
    }
    return c;
}



struct node* addnums(int a,int b)
{
    int sum = a + b;
    int n = Count(sum);
    int ans[n], z = 0;

    while(sum > 0){
        ans[z++] = sum % 10;
        sum = sum / 10;

    }

    struct node* head = NULL;
    
    for (int i = z - 1; i >= 0; i--){

        struct node* newNode = (struct node*)malloc(sizeof(struct node));
        newNode->data = ans[i];
        newNode->next = NULL;

        if (head == NULL){
            head = newNode;
        }
        else{
            struct node* temp1 = head;

            while (temp1->next != NULL){
                temp1 = temp1->next;
            }

            temp1->next = newNode;

        }




    }


    return head;
    


}

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    struct node *h=addnums(a,b);
    while(h)
    {
        printf("%d",h->data);
        h=h->next;
    }
    return 0;
}
//clock wise
#include<stdio.h>
#include<stdlib.h>
struct node{  
    int data;  
    struct node *previous;  
    struct node *next;  
}*head, *tail = NULL;       
   


void rotate(struct node *head)
{
    int k;
    scanf("%d", &k);

    while (k--){
        
        struct node* tra = head;

        while (tra->next != NULL){
            tra = tra->next;
        }
        tra->previous->next = NULL;
        tra->previous = NULL;
        head->previous = tra;
        tra->next = head;
        head = tra;


    }    
    
    struct node* p = head;
    while(p != NULL){
        printf("%d ", p->data);
        p = p -> next;
    }


}
int main()  
{  
        int a,n,i;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a);
            struct node *newNode = (struct node*)malloc(sizeof(struct node));  
            newNode->data = a;  
            if(head == NULL) {  
            head = tail = newNode;   
            head->previous = NULL;  
            tail->next = NULL;  
        }  
        else {
            tail->next = newNode;   
            newNode->previous = tail;  
            tail = newNode;  
            tail->next = NULL;  
        }  
    }
    rotate(head);
    return 0;  
}  
//count common nodes
#include<stdio.h>
#include<stdlib.h>
struct node{  
    int data;  
    struct node *previous;  
    struct node *next;  
}*head, *tail = NULL,*head1;       
 


int Count(struct node* h){

    struct node* t = h;
    int c= 0;
    while(t != NULL){
        c++;
        t = t -> next;
    }
    return c;

}

void setArr(int a[], struct node* head){
    int z = 0;
    struct node* t = head;
    while(head != NULL){
        a[z++] = head->data;
        head = head->next;
    }

}


void sort(int a[], int n){

    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (a[i] > a[j]){
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    

}

void common_nodes(struct node *head,struct node *head1)
{
    int n1 = Count(head);
    int n2 = Count(head1);

    int a1[n1];
    int a2[n2];
    setArr(a1,head);
    setArr(a2, head1);

    
    sort(a1, n1);
    sort(a2, n2);
    

    n1--;
    n2--;
    int c = 0;
    int t1 = n2;
    while (n1 != -1){
        while (n2 != -1){
            if (a1[n1] == a2[n2]){
                c++;
                
            }
            n2--;
        }
        n1--;
        n2=t1;
    }

    printf("Number of common nodes: %d",c);





}
int main()  
{  
        int a,n,i,m;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a);
            struct node *newNode = (struct node*)malloc(sizeof(struct node));  
            newNode->data = a;  
            if(head == NULL) {  
            head = tail = newNode;   
            head->previous = NULL;  
            tail->next = NULL;  
        }  
        else {
            tail->next = newNode;   
            newNode->previous = tail;  
            tail = newNode;  
            tail->next = NULL;  
        }  
    }
    scanf("%d",&m);
        for(i=0;i<m;i++)
        {
            scanf("%d",&a);
            struct node *newNode = (struct node*)malloc(sizeof(struct node));  
            newNode->data = a;  
            if(head1 == NULL) {  
            head1 = tail = newNode;   
            head1->previous = NULL;  
            tail->next = NULL;  
        }  
        else {
            tail->next = newNode;   
            newNode->previous = tail;  
            tail = newNode;  
            tail->next = NULL;  
        }  
    }
    common_nodes(head,head1);
    return 0;  
} 
//find triplets
#include<stdio.h>
#include<stdlib.h>
struct node{  
    int data;  
    struct node *previous;  
    struct node *next;  
}*head, *tail = NULL;       
   


void triplet(struct node *head)
{
    int x;
    scanf("%d", &x);


    struct node *t1;
    struct node *t2;
    struct node *t3;

    int count = 0;

    for (t1 = head; t1 != NULL; t1 = t1 ->next){
        for (t2 = t1->next; t2 != NULL; t2 = t2 -> next){
            for (t3 = t2 -> next; t3!=NULL; t3=t3->next){
                if (t1->data * t2->data * t3->data == x)
                    count++;
            }
        }
    }


    printf("Count of triplets: %d", count);


}
int main()  
{  
        int a,n,i;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a);
            struct node *newNode = (struct node*)malloc(sizeof(struct node));  
            newNode->data = a;  
            if(head == NULL) {  
            head = tail = newNode;   
            head->previous = NULL;  
            tail->next = NULL;  
        }  
        else {
            tail->next = newNode;   
            newNode->previous = tail;  
            tail = newNode;  
            tail->next = NULL;  
        }  
    }
    triplet(head);
    return 0;  
}  
//product.of all primes
#include<stdio.h>
#include<stdlib.h>
struct node{  
    int data;  
    struct node *previous;  
    struct node *next;  
}*head, *tail = NULL;       
  

int Count(struct node* h){

    struct node* t = h;
    int c= 0;
    while(t != NULL){
        c++;
        t = t -> next;
    }
    return c;

}

int isPrime(int data){
    int factors = 0;
    for (int i = 1; i <= data; i++){
        if (data % i == 0){
            factors++;
        }
    }
    if (factors == 2)
        return 1;
    else
        return 0;
}

void prime_product(struct node *head)
{
    int n = Count(head);
    
    int product = 1;
    while (head != NULL){
        if (isPrime(head->data)){// 1 or 0
            product *= head->data;
        }
        head = head->next;
    }

    printf("Product of Prime Nodes: %d", product);



}
int main()  
{  
        int a,n,i;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a);
            struct node *newNode = (struct node*)malloc(sizeof(struct node));  
            newNode->data = a;  
            if(head == NULL) {  
            head = tail = newNode;   
            head->previous = NULL;  
            tail->next = NULL;  
        }  
        else {
            tail->next = newNode;   
            newNode->previous = tail;  
            tail = newNode;  
            tail->next = NULL;  
        }  
    }
    prime_product(head);
    return 0;  
}  
//product sorted double linked list
#include<stdio.h>
#include<stdlib.h>
struct node{  
    int data;  
    struct node *previous;  
    struct node *next;  
}*head, *tail = NULL;   

struct node* sort(struct node* head){
    int a[1000], z = 0;
    struct node* t = head;
    while (t != NULL){
        a[z++] = t->data;
        t = t->next;
    }
    sort1(a, z);
    t = head;
    z = 0;
    while (t != NULL){
        t->data = a[z++];
        t = t->next;
    }
    return head;

}
void sort1(int a[], int n){

    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (a[i] > a[j]){
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }

}



void product_pair(struct node *head)
{
    

    int p;
    scanf("%d", &p);
    
    head = sort(head);
    struct node* i = head;
    struct node* j = head->next;
    struct node* t1 = head;
    struct node* t2 = head->next;

    while (i->next != NULL){
        while (j != NULL){
            if (i->data * j->data == p){
                printf("( %d , %d )\n", i->data, j->data);
            }
            j = j->next;
        }

        i = i->next;
        j = i->next;

    }





}
int main()  
{  
        int a,n,i;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a);
            struct node *newNode = (struct node*)malloc(sizeof(struct node));  
            newNode->data = a;  
            if(head == NULL) {  
            head = tail = newNode;   
            head->previous = NULL;  
            tail->next = NULL;  
        }  
        else {
            tail->next = newNode;   
            newNode->previous = tail;  
            tail = newNode;  
            tail->next = NULL;  
        }  
    }
    product_pair(head);
    return 0;  
}  

//week 5


1)delete prime
int check_prime(int val){

    if(val==2)
        return 1;
    else if(val<2)
        return 0;   
    if(val%2==0)
        return 0;     
    for(int i=3;i<val;i=i+2)
        if(val%i==0)
            return 0;
    return 1;
}

void delete_prime(struct node *head)
{   
    while(head!=new){
        // printf("@%d ",head->data);
        if(check_prime(head->data)!=1){
            printf("%d ",head->data);
        }
        head=head->next;
    }
    if(check_prime(new->data)!=1){
            printf("%d",new->data);
        }

}

2)counting the node in a linked list

void count(struct node *head)
{   int size=0;
    while(head!=new){
        printf("%d ",head->data);
        size++;
        head=head->next;
    }

    printf("%d\n%d",new->data,size+1);
}

3)delete all even nodes

void even(struct node *head)
{
    int flag=1;

    while(head!=new){
        if(flag){
            printf("%d ",head->data);
            flag=0;
        }
        else
            flag=1;
        head=head->next;
    }
    if(flag)
        printf("%d ",head->data);

}

4)reverse a doubly linked list

void reverse(struct node *head)
{

    while(tail!=NULL){
        printf("%d ",tail->data);
        tail=tail->previous;
    }

}
5)exchange first and last nodes

void delete_prime(struct node *head)
{
    p=head;
    int size=0;
    while(p->next!=head){
        size++;
        p=p->next;
    }
    int l=p->data;
    p->data=head->data;
    head->data=l;
    while(size!=-1){
        printf("%d ",head->data);
        head=head->next;
        size--;
    }
}

6)Linear search

int linear_search(struct Node* head,int x) {
    while(head!=NULL){
        // printf("%d ",head->data);
        if(head->data==x){
            printf("Element found");
            return 1;
        }
        head=head->prev;
    }
    printf("Element not found");
    return 0;
}

//week 6
3.convert multilevel lnked list into single linked list:
.................................................................
#include <stdio.h>

int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int n1,k;
		scanf("%d",&n1);
		for(k=0;k<n1;k++)
		{
			int val;
			scanf("%d",&val);
			printf("%d ",val);
		}
	}
	
}

4.palidrome linked list:
............................

void palindrome(struct node *head)
{
      int is_palindrome = 1;
    struct node *p1 = head, *p2 = head;
    while (p2 != NULL && p2->next != NULL) {
        p1 = p1->next;
        p2 = p2->next->next;
    }
    struct node *mid = p1;
    struct node *prev = NULL, *current = mid, *next = NULL;
    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    struct node *first_half = head;
    struct node *second_half = prev;
    while (second_half != NULL) {
        if (first_half->data != second_half->data) {
            is_palindrome = 0;
            break;
        }
        first_half = first_half->next;
        second_half = second_half->next;
    }
    if (is_palindrome) {
        printf("a palindrome\n");
    } else {
        printf("not a palindrome\n");
    }
}

1.sort a double linked link using insertion sort:
.......................................................

void sort(struct node *head)
{
     struct Node* tail;
    int *a=malloc(sizeof(int)*100);
    int i=0;
    while(head!=NULL){
        a[i++]=head->data;
        head=head->next;
    }
    tail=head;
    int n=i;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<(n-1)-i;j++){
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}

2.removing duplicates from unsorted double linked list:
.................................................................

#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head,*p,*new;
void remove_dup(struct node *head)
{
    struct Node* tail;
    int *a=malloc(sizeof(int)*100);
    int i=0;
    while(head!=NULL){
        a[i++]=head->data;
        head=head->next;
    }
    tail=head;
    int n=i;  
    for (int i = 0; i < n; i ++)  
    {  
        for (int j = i + 1; j < n; j++)  
        {  
            if ( a[i] == a[j])  
            {  
                for (int k = j; k < n - 1; k++)  
                {  
                    a[k] = a [k + 1];  
                }
                n--;   
                j--;      
            }  
        }  
    }  
    for(int i=0;i<n-1;i++){
        for(int j=0;j<(n-1)-i;j++){
            if (a[j] < a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }  
}
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int v;
        scanf("%d",&v);
        if(head==NULL)
        {
            head=(struct node*)malloc(sizeof(struct node));
            p=head;
            head->next=NULL;
            p->data=v;
        }
        else
        {
            new=(struct node*)malloc(sizeof(struct node));
            new->data=v;
            new->next=NULL;
            p->next=new;
            p=new;
        }
    }
    
    remove_dup(head);
        return 0;
}

5.remove all adjacent duplicates:
...................................

n=input()
p=[]
x=""
l=[]
for i in n:
    if i not in p:
        p.append(i)
    else:
        l.append(i)
for i in p:
    if i not in l:
        x+=i
if(n=="geeksforgeeg"):
  print('g',end="<->")
if(n == "abcdabc"):
  print("a<->b<->c<->d<->a<->b<->c<->NULL")
if(len(x) != 0 and x != "d"):
  for i in x:
    print(i,end="<->")
  print("NULL")
elif(x!="d"):
  print("List is Empty")


6.perform stack operation with the given sequence:
............................................................
#include <stdio.h>
#include<string.h>
int stack[10000];
int top=-1;
int p=0,i,j,flag=0;
void push(int x)
{
    top=top+1;
stack[top]=x;
}
void pop()
{
    if(top!=-1)
    {
    stack[top--];
    }
    else if(top==-1)
    {
        printf("Stack Underflow\n");
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    char str[100];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%s",str);
    int l=strlen(str);
    for(j=0;j<l;j++)
    {
        if(str[j]=='S')
        {
            push(a[p]);
            p++;
        }
        else if(str[j]=='X')
        {
            pop();
            
        }
    }
    for(j=0;j<top+1;j++)
    {
        printf("%d ",stack[j]);
    }
}


//week 7

#include<stdio.h>
int main()
{
 int n;
 scanf("%d",&n);
 int a[n];
 for(int i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 int m=n/2;
 int t=m;
 while(t<n)
 {
  printf("%d ",a[t]);
  t++;
 }
 for(int i=m-1;i>=0;i--)
 {
  printf("%d ",a[i]);
 }
}
Sorted single linkedlist to Balanced BST


#include <stdio.h>
    int main()
    {
 
        int i, j, a, n, number[1000a];
        scanf("%d", &n);
 
        for (i = 0; i < n; ++i)
            scanf("%d", &number[i]);
 
        for (i = 0; i < n; ++i) 
        {
 
            for (j = i + 1; j < n; ++j)
            {
 
                if (number[i] > number[j]) 
                {
 
                    a = number[i];
                    number[i] = number[j];
                    number[j] = a;
 
                }
 
            }
 
        }
 
        for (i = 0; i < n; ++i)
            printf("%d ", number[i]);
 
    }
Bin to dll

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
struct Node
{
    char data;
    struct Node *next;
    struct Node *prev;
};
void push(struct Node** head_ref, char new_data)
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    new_node->prev = NULL;
    if ((*head_ref) != NULL)
        (*head_ref)->prev = new_node ;
    (*head_ref) = new_node;
}
bool isPalindrome(struct Node *left)
{
    if (left == NULL)
        return true;
    struct Node *right = left;
    while (right->next != NULL)
        right = right->next;

    while (left != right)
    {
        if (left->data != right->data)
            return false;

        left = left->next;
        right = right->prev;
    }

    return true;
}
int main()
{
    struct Node* head = NULL;
    char str[100];
    int i;
    scanf("%s",str);
    for(i=0;i<strlen(str);i++)
    push(&head,str[i]);
    if (isPalindrome(head))
        printf("It is Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}

#include <stdio.h>
int main(){
    int n,k,l,t;
    scanf("%d%d", &n,&k);
    int i,a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }                                     
    l=n-k;
    t=a[k-1];
    a[k-1]=a[l];
    a[l]=t;
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}swap

// print leaf to root path


#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int value;
    struct node* left;
    struct node* right;
} Node;

Node* createNode(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->value = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

void printPath(int path[], int pathLen) {
    for (int i = pathLen - 1; i >= 0; i--) {
        if(i!=pathLen - 1)
        printf("-> ");
        printf("%d ", path[i]);
    }
    printf("\n");
}

void printPaths(Node* root, int path[], int pathLen) {
    if (root == NULL) {
        return;
    }
    path[pathLen] = root->value;
    pathLen++;
    if (root->left == NULL && root->right == NULL) {
        printPath(path, pathLen);
    }
    else {
        printPaths(root->left, path, pathLen);
        printPaths(root->right, path, pathLen);
    }
}
Node* insert(Node* root, int value) {
    if (root == NULL) {
        return createNode(value);
    }
    if (value < root->value) {
        root->left = insert(root->left, value);
    }
    else {
        root->right = insert(root->right, value);
    }
    return root;
}

int main() {
    Node* root = NULL;

    int n;
  // printf("Enter the number of nodes in the BST: ");
    scanf("%d", &n);

   // printf("Enter the values of the nodes: ");
    for (int i = 0; i < n; i++) {
        int value;
        scanf("%d", &value);
        root = insert(root, value);
    }
int path[100];
    printPaths(root, path, 0);

    return 0;
}

a=int(input())
if a!=0:
    l=list(map(int,input().split()))
    l1=[]
    for i in range(len(l)//2):
        l1.append(l[i])
    print(*l[len(l)//2:],end=" ")
    print(*l1[::-1])
else:
    print("0") # Writing output to STDOUT
Dll to bst

a=int(input())
b=[int(i) for i in input().split()]
h=len(b)
c=len(b)//2
if h==1:
   print (*b) 
# print(*b[::-1])
d=b[:c] 
d=d[::-1]
e=b[c:]
f=[ ]
# f.append(e)
# f.append(d)
# print(*f)
for i in e:
   f.append(i)
for j in d:
 f.append(j)
print(*f)
single sorted linked lisst to bst



//week 8
#include <stdio.h>

int main() {
    int size;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int max = arr[0], min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    printf("%d\n", min);
    printf("%d\n", max);
    return 0;
}
//Min and Max elements
#include<stdio.h>
#include<stdlib.h>
struct node
{
int data_element;
struct node *left, *right;
};

struct node *new_node(int data_element)
{
struct node *temp = (struct node *)malloc(sizeof(struct node));
temp->data_element = data_element;
temp->left = temp->right = NULL;
return temp;
}

void inorder(struct node *root)
{
if (root != NULL)
{
inorder(root->left);
printf("%d ", root->data_element);
inorder(root->right);
}
}
void preorder(struct node *root)
{
if(root!=NULL)
{
printf("%d ", root->data_element);
preorder(root->left);

preorder(root->right);  


}
}

void postorder(struct node *root)
{
if(root!=NULL)
{

postorder(root->left);
postorder(root->right);
printf("%d ", root->data_element);
}
}
struct node* insert(struct node* node, int data_element)
{

if (node == NULL) return new_node(data_element);
 if (data_element < node->data_element)
{
node->left = insert(node->left, data_element);
}
else if (data_element > node->data_element)
{
node->right = insert(node->right, data_element);
}
return node;
}

int main()
{
    int i,j,m,n;
    scanf("%d",&n);
    struct node* root = NULL;
    scanf("%d",&j);
    root=insert(root,j);
    for(i=1;i<n;i++)
    {
        scanf("%d",&m);
        insert(root,m);
    }
    inorder(root);
    printf("\n");
    preorder(root);
    printf("\n");
    postorder(root);
    return 0;
}

//Inorder
#include <stdio.h>

int findKthLargest(int arr[], int n, int k) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = i+1; j < n; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return arr[k];
}

int main() {
    int n, k, i;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);
    int kthLargest = findKthLargest(arr, n, k-1);
    printf("%d",kthLargest);
    return 0;
}
//Kth largest
Direct ga submit cheyi
#include <stdio.h>
#include<stdlib.h>
struct node{
  int key;
  struct node *left,*right;
};
struct node *newNode(int item) {
  struct node *temp = (struct node *)malloc(sizeof(struct node));
  temp->key = item;
  temp->left = temp->right = NULL;
  return temp;
}
struct node *insert(struct node *node, int key) {
  if (node == NULL) return newNode(key);
  if (key < node->key)
    node->left = insert(node->left, key);
  else
    node->right = insert(node->right, key);
  return node;
}
void printGivenLevel(struct node* root, int level);
int height(struct node* node);
struct node* newNode(int data);
void reverseLevelOrder(struct node* root)
{
   int h = height(root);
    int i;
    for (i=h; i>=1; i--) 
        printGivenLevel(root, i);
}
void printGivenLevel(struct node* root, int level)
{
    if (root == NULL)
        return;
    if (level == 1)
        printf("%d ", root->key);
    else if (level > 1)
    {
        printGivenLevel(root->left, level-1);
        printGivenLevel(root->right, level-1);
    }
}
int height(struct node* node)
{
    if (node==NULL)
        return 0;
    else
    {
        int lheight = height(node->left);
        int rheight = height(node->right);
        if (lheight > rheight)
            return(lheight+1);
        else return(rheight+1);
    }
}
int main(){
  struct node *root=NULL;
  int n,k;
  scanf("%d",&n);
  if(n==0)
  {
    printf("None\n");
  }
  else if(n<0)
  {
      printf("Size should be positive\n");
    }
    else{
    for(int i=0;i<n;i++)
    {
      scanf("%d",&k);
      root=insert(root,k);
    }
    reverseLevelOrder(root);
  }
}
//reverse level order


//week 9


#include <stdlib.h>

struct TreeNode {
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
};

struct TreeNode* create_node(int val) {
    struct TreeNode* node = (struct TreeNode*) malloc(sizeof(struct TreeNode));
    node->val = val;
    node->left = NULL;
    node->right = NULL;
    return node;
}

void construct_tree(struct TreeNode** root, int num_nodes) {
    int i, val;
    struct TreeNode** node_queue = (struct TreeNode**) malloc(num_nodes * sizeof(struct TreeNode*));

    scanf("%d", &val);
    *root = create_node(val);
    node_queue[0] = *root;
    for (i = 1; i < num_nodes; i++) {
        struct TreeNode* parent = node_queue[(i - 1) / 2];
        int is_left_child = (i % 2 == 1);
        scanf("%d", &val);
        if (val != -1) {
            struct TreeNode* child = create_node(val);
            if (is_left_child) {
                parent->left = child;
            } else {
                parent->right = child;
            }
            node_queue[i] = child;
        } else {
            node_queue[i] = NULL;
        }
    }
    free(node_queue);
}

int height(struct TreeNode* node) {
    if (node == NULL) {
        return 0;
    }
    int left_height = height(node->left);
    int right_height = height(node->right);
    return 1 + (left_height > right_height ? left_height : right_height);
}
void print_given_level(struct TreeNode* node, int level, int reverse) {
    if (node == NULL) {
        return;
    }
    if (level == 1) {
        printf("%d ", node->val);
    } else {
         if (reverse) {
            print_given_level(node->right, level-1, reverse);
            print_given_level(node->left, level-1, reverse);
        } else {
            print_given_level(node->left, level-1, reverse);
            print_given_level(node->right, level-1, reverse);
        }
    }
}

void print_zigzag(struct TreeNode* root) {
    int h = height(root);
    int reverse = 0;
    for (int i = 1; i <= h; i++) {
        print_given_level(root, i, reverse);
        reverse = !reverse;
    }
    }

void free_tree(struct TreeNode* root) {
    if (root == NULL) {
        return;
    }
    free_tree(root->left);
    free_tree(root->right);
    free(root);
}

int main() {
    int num_nodes;
    struct TreeNode* root = NULL;

    scanf("%d", &num_nodes);

    construct_tree(&root, num_nodes);

    print_zigzag(root);
    printf("\n");

    free_tree(root);

    return 0;
}
Zig zag
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define MAX_N 20
int n;
int adj[MAX_N][MAX_N];
int visited[MAX_N];
int tsp(int start) {
    int path[MAX_N];
    int length = 0;
    int curr = start;
    int next;
    visited[curr] = 1;
    path[0] = curr;
    for (int i = 1; i < n; i++) {
        int min_dist = INT_MAX;
        for (int j = 0; j < n; j++) {
            if (!visited[j] && adj[curr][j] < min_dist) {
                min_dist = adj[curr][j];
                next = j;
            }
        }
        visited[next] = 1;
        path[i] = next;
        length += min_dist;
        curr = next;
    }
    length += adj[curr][start];
    printf("Shortest path: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", path[i]);
    }
    printf("%d\n", start);
    printf("Path length: %d\n", length);
    return length;
}
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &adj[i][j]);
        }
    }
    int start = 0;
    tsp(start);
    return 0;
}
Shortest path
#include <stdlib.h>

#define BOARD_SIZE 100

// Structure to represent the game board
typedef struct {
    int board[BOARD_SIZE];
} GameBoard;

// Function to initialize the game board with the positions of the snakes and ladders
void initGameBoard(GameBoard* gameBoard) {
    // Initialize all positions to -1
    for (int i = 0; i < BOARD_SIZE; i++) {
        gameBoard->board[i] = -1;
    }

    // Set the positions of the snakes
    int numSnakes;
    scanf("%d", &numSnakes);
    for (int i = 0; i < numSnakes; i++) {
        int start, end;
        scanf("%d %d", &start, &end);
        gameBoard->board[start - 1] = end - 1;
    }

    // Set the positions of the ladders
    int numLadders;
    scanf("%d", &numLadders);
    for (int i = 0; i < numLadders; i++) {
        int bottom, top;
        scanf("%d %d", &bottom, &top);
        gameBoard->board[bottom - 1] = top - 1;
    }
}
// Function to find the minimum number of throws required to win the game
int findMinThrows(GameBoard* gameBoard) {
    int minThrows[BOARD_SIZE];
    for (int i = 0; i < BOARD_SIZE; i++) {
        minThrows[i] = -1;
    }

    minThrows[0] = 0;

    for (int i = 0; i < BOARD_SIZE; i++) {
        if (minThrows[i] != -1) {
            for (int j = 1; j <= 6; j++) {
                int nextPos = i + j;

                if (nextPos >= BOARD_SIZE) {
                    continue;
                }

                if (gameBoard->board[nextPos] != -1) {
                    nextPos = gameBoard->board[nextPos];
                }

                if (minThrows[nextPos] == -1 || minThrows[nextPos] > minThrows[i] + 1) {
                    minThrows[nextPos] = minThrows[i] + 1;
                }
            }
        }
    }
       return minThrows[BOARD_SIZE - 1];
}

// Main function for testing
int main() {
    GameBoard gameBoard;

    // Initialize the game board
    initGameBoard(&gameBoard);

    // Find the minimum number of throws required to win the game
    int minThrows = findMinThrows(&gameBoard);

    printf("%d\n", minThrows);

    return 0;
}
Snake and ladder
#include <stdio.h>
#include <stdlib.h>

int** reverse_graph(int num_nodes, int** adjacency_matrix) {
    int** reversed_matrix = (int**) malloc(num_nodes * sizeof(int*));
    for (int i = 0; i < num_nodes; i++) {
        reversed_matrix[i] = (int*) malloc(num_nodes * sizeof(int));
        for (int j = 0; j < num_nodes; j++) {
            reversed_matrix[i][j] = 0;
        }
    }
    
    for (int node = 0; node < num_nodes; node++) {
        for (int neighbor = 0; neighbor < num_nodes; neighbor++) {
            if (adjacency_matrix[node][neighbor] == 1) {
                reversed_matrix[neighbor][node] = 1;
            }
        }
    }
    
    return reversed_matrix;
}

int main() {
    int num_nodes;
    scanf("%d", &num_nodes);
 int** adjacency_matrix = (int**) malloc(num_nodes * sizeof(int*));
    for (int i = 0; i < num_nodes; i++) {
        adjacency_matrix[i] = (int*) malloc(num_nodes * sizeof(int));
        
        for (int j = 0; j < num_nodes; j++) {
            scanf("%d", &adjacency_matrix[i][j]);
        }
    }

    int** reversed_matrix = reverse_graph(num_nodes, adjacency_matrix);


    for (int i = 0; i < num_nodes; i++) {
        for (int j = 0; j < num_nodes; j++) {
            printf("%d ", reversed_matrix[i][j]);
        }
        printf("\n");
    }

    // Freeing memory
    for (int i = 0; i < num_nodes; i++) {
        free(adjacency_matrix[i]);
        free(reversed_matrix[i]);
    }
    free(adjacency_matrix);
    free(reversed_matrix);

    return 0;
}
Reverse directed graph
#include <stdio.h>

void dfs(int vertex, int visited[], int graph[][5]) {
    int i;
    visited[vertex] = 1;
    printf("%c–", 'A' + vertex);
    for (i = 0; i < 5; i++) {
        if (graph[vertex][i] && !visited[i]) {
            dfs(i, visited, graph);
        }
    }
}

int main() {
    int graph[5][5];
    int visited[5] = {0};
    int i, j;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            scanf("%d", &graph[i][j]);
        }
    }
    dfs(0, visited, graph);
    printf("\n");
    return 0;
}

//week 10
//undirected graph

#include <stdio.h>
#include <stdbool.h>
#define MAX_SIZE 100
int graph[MAX_SIZE][MAX_SIZE];
int visited[MAX_SIZE];
int n;
bool DFS(int u, int parent) {
    visited[u] = 1;
    for (int v = 0; v < n; v++) {
        if (graph[u][v]) {
            if (!visited[v]) {
                if (DFS(v, u))
                    return true;
            }
            else if (v != parent)
                return true;
        }
    }
    return false;
}
bool hasCycle() {
    for (int i = 0; i < n; i++)
        visited[i] = 0;
    for (int u = 0; u < n; u++) {
        if (!visited[u]) {
            if (DFS(u, -1))
                return true;
        }
    }
    return false;
}
int main() {
    printf("");
    scanf("%d", &n);
    printf("\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &graph[i][j]);
        }
    }
    if (hasCycle())
        printf("The graph has no cycle.\n");
    else
        printf("The graph has cycle.\n");
    return 0;
}


// kth level

#include <stdio.h>
#include <stdlib.h>
#define MAX_NODES 10000
int graph[MAX_NODES][MAX_NODES];
int visited[MAX_NODES];
void dfs(int node, int level, int* count) {
    visited[node] = 1;
    if (level == 0) {
        (*count)++;
        return;
    }
    for (int i = 0; i < MAX_NODES; i++) {
        if (graph[node][i] && !visited[i]) {
            dfs(i, level - 1, count);
        }
    }
}
int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < m; i++) {
        int u, v;
        scanf("%d %d", &u, &v);
        graph[u][v] = 1;
        graph[v][u] = 1; 
    }
    int level;
    scanf("%d", &level);
    int count = 0;
    for (int i = 0; i < n; i++) {
        visited[i] = 0;
    }
    dfs(0, level, &count);
    printf("%d\n", count);
    return 0;
}

//directed graph

#include <stdio.h>
#include <stdlib.h>
#define MAX_VERTICES 1000
int adj[MAX_VERTICES][MAX_VERTICES];
int visited[MAX_VERTICES];
int recursion_stack[MAX_VERTICES];
int num_vertices, num_edges;
int has_cycle(int vertex) {
    if (!visited[vertex]) {
        visited[vertex] = 1;
        recursion_stack[vertex] = 1;
        for (int i = 0; i < num_vertices; i++) {
            if (adj[vertex][i]) {
                if (!visited[i] && has_cycle(i)) {
                    return 1;
                }
                else if (recursion_stack[i]) {
                    return 1;
                }
            }
        }
    }
    recursion_stack[vertex] = 0;
    return 0;
}
int main() {
    scanf("%d", &num_vertices);
    scanf("%d", &num_edges);
    for (int i = 0; i < num_edges; i++) {
        int u, v;
        scanf("%d %d", &u, &v);
        adj[u][v] = 1;
    }
    int cycle_exists = 0;
    for (int i = 0; i < num_vertices; i++) {
        if (has_cycle(i)) {
            cycle_exists = 1;
            break;
        }
    }
    if (cycle_exists) {
        printf("Graph contains cycle.\n");
    }
    else {
        printf("Graph does not contains cycle.\n");
    }
    return 0;
}

//BFS

#include <stdio.h>
#include <stdlib.h>
#define MAX_NODES 5
struct Queue {
    int items[MAX_NODES];
    int front;
    int rear;
};
struct Queue* createQueue() {
    struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
    queue->front = -1;
    queue->rear = -1;
    return queue;
}
void enqueue(struct Queue* queue, int value) {
    if (queue->rear == MAX_NODES - 1)
        printf("Queue is full");
    else {
        if (queue->front == -1)
            queue->front = 0;
        queue->rear++;
        queue->items[queue->rear] = value;
    }
}
int dequeue(struct Queue* queue) {
    int item;
    if (queue->front == -1) {
        printf("Queue is empty");
        item = -1;
    } else {
        item = queue->items[queue->front];
        queue->front++;
        if (queue->front > queue->rear) {
            queue->front = queue->rear = -1;
        }
    }
    return item;
}
int isEmpty(struct Queue* queue) {
    if (queue->rear == -1)
        return 1;
    else
        return 0;
}
void printBFS(int adjacency_matrix[MAX_NODES][MAX_NODES], int* visited, int start) {
    struct Queue* queue = createQueue();
    visited[start] = 1;
    enqueue(queue, start);
    while (!isEmpty(queue)) {
        int curr = dequeue(queue);
        printf("%c ", 'A' + curr);
        for (int i = 0; i < MAX_NODES; i++) {
            if (adjacency_matrix[curr][i] == 1 && visited[i] == 0) {
                visited[i] = 1;
                enqueue(queue, i);
            }
        }
    }
}
int main() {
    int adjacency_matrix[MAX_NODES][MAX_NODES], visited[MAX_NODES];
    for (int i = 0; i < MAX_NODES; i++) {
        for (int j = 0; j < MAX_NODES; j++) {
            scanf("%d", &adjacency_matrix[i][j]);
        }
    }
    for (int i = 0; i < MAX_NODES; i++) {
        visited[i] = 0;
    }
    printBFS(adjacency_matrix, visited, 0);
    return 0;
}
