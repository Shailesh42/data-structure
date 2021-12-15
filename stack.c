#include<stdio.h>
int top = -1;
int push(int *a )
{   printf("Enter the element : ");
    int  x;
     top++;
    scanf("%d",&x);
      a[top]= x;      
      return a;
}
int pop(int *a)
{
      if(top == -1)
      printf("stack is invalid\n");
      else 
        { top--;}
}
int peek (int *a)
{
    printf("the top element is : %d\n",a[top]);
    }
void display(int *a)
{
    printf("the elements are : "); 
    for (int i=top ; i>=0;i--)
    printf("%d ",a[i]);
    printf("\n");

}
int main()
{
    int a[20];
    int o;
         printf("1.insert a element\n2.delete top element\n3.topmost element\n4.display the stack\n");
    while(1)
    {
           printf("Enter the option : ");
           scanf("%d",&o);
 switch(o){
               case 1: push(a);
                       break;
               case 2: pop(a);
                       break;
               case 3: peek(a);
                       break ;
               case 4: display(a);
                       break ;
              default : return 0;
        } 
 } 
}  