#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *start = NULL;
void insert()
{
    struct node *ptr ,*new;
    new =(struct node*)malloc (sizeof(struct node));
    printf("Enter -1 to stop inserting \n");
    printf("ENter the data : ");
    scanf("%d",&(new->data));
 while(new->data != -1)
  {
    if(start ==NULL)
    {
        new->next = NULL;
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
   new =(struct node*)malloc (sizeof(struct node));
    printf("ENter the data : ");
    scanf("%d",&(new->data)); 
 }
}
int search()
{
    struct node *ptr,*iptr ;
    ptr = start ;
    if(start == NULL)
    {
        printf("The stack is null \n");
        return 0;
    }
    iptr = ptr;
    printf("\nEnter the key : ");
    int i,j=0;
    scanf("%d",&i);
    do
     {  
         if(ptr->data == i)
        { printf("Key is present \n");
        if(ptr==start)
          {    start = ptr->next;
              ptr= start;
              iptr= start;
          }
            else
           iptr->next = ptr->next ;
                free(ptr);
                ptr= iptr;
                j++;
         }
         iptr= ptr;
          ptr =ptr->next ;
         }   while (ptr->next != NULL);
         if(j==0)        
         printf("Key is not available in linked list \n");
         }
void display()
{
    struct node *ptr;
    ptr = start ;
    printf("The dATA : ");
    while(ptr!= NULL)
    {
        printf("%d\t",ptr->data);
        ptr =ptr->next;
         
    }
}
int main()
{
   int o;
   insert();
   display();
   search();
   display();
   return 0;
}