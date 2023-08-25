/*WAP to impliment to stack using an array of structures.*/
/* wap to  */


#include <stdio.h>
#include <stdlib.h>
#define size 3
struct Stck
{
    int x;
};
int top=-1;
struct Stck stack[size];
void push();
void pop();
void display();
int main()
{
    int x;
    
    int del;
    for(; ;)
    {
        printf("Enter your choice \n 1 for push operation\n2 for pop operation\n3 to display the stacke elements\n 4. Exit\n ");
        scanf("%d",&x);
        switch(x)
        {
            case 1:
            {
                push();
                break;
            }

            case 2:
            {
                pop();

                break;
            }

            case 3:
            {
                display();
                break;
            }

            case 4:
            {
                exit(0);
            }
        }
    }
}
void push()
{
    int element;
    if(top==size)
    {
        printf("Stack Overflow\n You cannot enter anymore elements");
        
    }
    else if(top<size-1){
        printf("Enter the element to be entered\n ");
    scanf("%d",&element);
    top++;
    stack[top].x = element;
    }
    else 
    {
        printf("Push cannt be performed\n");
    }
}
void pop()
{
    int del;
    if(top>=0)
    {
        del=stack[top].x;
        top--;
        printf("The element that popped is: %d\n",del);
    }
    else 
    {
        printf("The stack is empty\n Please enter a value into the stack to perform this operation\n");
    }
}

void display()
{
    for (int i = top ; i>=0;i--)
    {
        printf("The stack elements are: %d \n",stack[i].x);
    }
}
