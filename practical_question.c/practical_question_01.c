#include <stdio.h>
int stack[100], choice, n, top, x, i;
void push(void);
void pop(void);
void display(void);

int main()
{
    top = -1;
    printf("\n Enter the size of stack : ");
    scanf("%d", &n);
    printf("\n\t STACK OPERARTION USING ARRAY");
    printf("\n\t......");

    printf("\n\t 1.Push\n\t 2.Pop\n\t 3.Display\n\t 4.Exit");

    do
    {
        printf("\n Enter the choice : ");
        scanf("%d", &choice);
        switch (choice)
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
            printf("\n\t Exit point");
            break;
        }
        default:
        {
            printf("\n\tPlease enter void choice");
        }
        }
    } while (choice != 4);

    return 0;
}
void push()
{
    if (top >= n - 1)
    {
        printf("\n\t Stack is overflow");
    }
    else
    {
        printf("Enter a value to be pushed : ");
        scanf("%d", &x);
        top++;
        stack[top] = x;
    }
}
void pop()
{
    if (top <= -1)
    {
        printf("\n\t Stack is underflow");
    }
    else
    {
        printf("\n\t the popped element is %d", stack[100]);
        top--;
    }
}
void display()
{
    if (top >= 0)
    {
        printf("\n The element in stack \n");
        for (i = top; i >= 0; i--)
            printf("%d\n", stack[i]);
        printf("\n Press next choice");
    }
    else
    {
        printf("\n The stack is empty");
    }
}
