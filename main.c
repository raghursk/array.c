// begin   
//     if top = n then stack full   
//     top = top + 1  
//     stack (top) : = item;  
// end   
#include<stdio.h>
#define size 5
int main()
{
    int stack[size];
    int top=-1;
   int push(&top,&size);
}
void push(int size,int top)
{
    int x;
    printf("enter the element");
    scanf("%d",&x);
    if(top==size-1)
    {
        printf("the stack is overflow:");
    }
    else
    {
        top++;
        stack[top]=x;
        printf("the element is add scassfully add");
    }
}