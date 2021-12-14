#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next, *pre;
};
struct node* link(int n)
{
    struct node *start =NULL;
    struct node *ptr ,*ne;
    int i=n;
       while(n != 0)
    {
        ne= (struct node*)malloc(sizeof(struct node));
        ne->data = n%10;
        ne->next = NULL;
        if(i==n)
       { ne->pre = NULL;
          start = ne;
          ptr= start;
          }
        else
        ne->pre  = ptr;
        ptr->next = ne;
        ptr = ptr->next;
        n = n/10;
    }
    return start;
}
void add(struct node* ptr ,struct node* iptr)
{  
    int n =0 ,i=1;
    while(iptr != NULL || ptr != NULL)
     {   n= n + i*(iptr->data +ptr->data);
      i=i*10;
      ptr= ptr->next;
      iptr= iptr->next;
     }
      struct node *a;
     a=  link(n);
     while(a !=NULL)
     {
         cout<<"\t "<<a->data;
         a= a->next;
     }
}  
void display(struct node* a)
{
 while(a !=NULL)
     {
         cout<<"\t "<<a->data;
         a= a->next;
     }
}

int main()
{
    int m,n;
    cout<<"Enter the number : ";
    cin>>m;
     cout<<"Enter the number : ";
    cin>>n;
    struct node *ptr ,*iptr;
    ptr = link(m);
    display(ptr);
    cout<<"trrt";
    iptr = link(n);
         display(iptr);
    add(iptr ,ptr);
       return 0;
}