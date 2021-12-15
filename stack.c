#include<stdio.h> 
#include<stdlib.h>
 typedef struct node 
{
    int data;
    struct node *next ;
}list;
list *start=NULL;

void push(){
       list *new,*ptr;
                        int i;
                   printf("Enter -1 to stop inserting\n ");
                    printf("Enter the value : ");
                      scanf("%d",&i);
                    while(i!=-1)
                      {   new =(list* )malloc (sizeof(list));
                         new->data =i;
                         if (start==NULL)
                           {  
                               new->next= NULL;
                               start = new ;
                           }
                        else 
                        {
                          ptr =start ;
                          while (ptr->next !=NULL)
                              ptr =ptr->next ;
                              ptr->next =new ;
                              new->next = NULL;
                        }
                       printf("Enter the value : ");
                       scanf("%d",&i);
                      }                
}
void pop()
{
   list *ptr,*del;
  ptr = start;
      while(ptr->next->next != NULL)
     ptr =ptr ->next;
       del= ptr->next ;
      ptr->next = NULL;
     free(del);
 }
void peek()
{
    list *ptr;
    ptr =start ;
    while(ptr->next != NULL)
    ptr = ptr->next ;
    printf("Element is : %d \n",ptr->data );
}
void display()
{
   list  *ptr;
   ptr =start ;
         
    printf("The data  : ");
    while(ptr != NULL){
      printf("%d\t",ptr->data);
      ptr = ptr->next ; 
   }
   printf("\n");
}
int main (){
   printf("Create a linked list : ");
      printf("CHOOSE A OPTION \n1.insert  element in stack \n");
   printf("2.pop the  element \n3.peek the element \n");
   printf("4.display the list\n");
   printf("ENTER 0 TO EXIT\n");
   int o;//o- option 
   while(1)
   {    printf("Enter the option : ");
        scanf("%d",&o);
        switch(o){
       case 1:  push();
                break ;   
      case 2 :   pop();
                break;
      case 3: peek();
              break ;
      case 4 :   display(); 
                break ;         
      default:    return 0;
   }
}
}