#include<stdio.h> 
#include<stdlib.h>
 typedef struct node 
{
    int data;
    struct node *next ;
}list;
list *start=NULL;

void insert(){
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
void insert_first()
{  int i;
  printf("Enter -1 to stop inserting\n ");
                    printf("Enter the value : ");
                      scanf("%d",&i);
                    while(i!=-1)
                    {
                      list *new ;
                      new = (list*)malloc(sizeof(list));
                      new->data = i;
                      new->next = start;
                      start = new ;
                       printf("Enter the value : ");
                      scanf("%d",&i);
                    }
}
void insert_pos()
{
  int i,n;
  list *new,*ptr;
  new=(list *)malloc(sizeof(list ));
  printf("ENter the data: ");
  scanf("%d",&i);
    ptr=start ;
  while (ptr -> data != i )
    ptr =ptr->next ;
    printf("Enter the data to insert : ");
    scanf("%d",&n);
    new->data =n;
    new->next = ptr->next;
    ptr->next = new;    
}
void insert_end()
{   int n;
    list *new,*ptr;
  new=(list *)malloc(sizeof(list ));
      ptr=start ;
  while (ptr!= NULL )
     ptr =ptr->next ;
    printf("Enter the data to insert : ");
    scanf("%d",&n);
    new->data =n;
    new->next = NULL;
   ptr =new;
}
void delete_pos(int i)
{
  list *ptr;
  ptr = start;
  if(i==1)
  {
   start= ptr->next;
    free(ptr);
  }
  else if(i==2)
  { 
    list *del ; 
    printf("Enter the value: ");
    int p;
    scanf("%d",&p);
    while(ptr->next->data != p)
       ptr = ptr->next ;
       del = ptr->next ;
       ptr->next = del->next;
      free(del);   

  }
  else if (i==3)
  {
     list *ptr,*del;
     while(ptr->next->next != NULL)
     ptr =ptr ->next;
       del= ptr->next ;
      ptr->next = NULL;
     free(del);
    
  }
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
}
int main (){

   printf("Create a linked list : ");
      printf("CHOOSE A OPTION \n1.insert a element in linked list \n2.insert a element at first\n3.insert a element at given option\n");
   printf("4.delete the  element \n5. delete the last element \n6.delete a element at given position \n");
   printf("7.display thhe list\n");
   printf("ENTER 0 TO EXIT\n");
   int o;//o- option 
   while(1)
   {    printf("Enter the option : ");
        scanf("%d",&o);
        switch(o){
       case 1:  insert();
                break ;   
      case 2:   insert_first();
                 break ;
      case 3  :  insert_pos();
                 break ;                      
      case 4:   delete_pos(o-3);
                break;
      case 5:   delete_pos(o-3);
                break;
      case 6:   delete_pos(o-3);
                break;
      case 7:   display(); 
                break ;         
      default:    return 0;
   }
}
}