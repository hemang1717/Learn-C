#include<stdio.h>

void swap(int *a,int *b)
{
    int x=*a;
    *a=*b;
    *b=x;
    printf("In swap function: a=%d , b=%d\n",*a,*b);
}

int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("Before swapping: a=%d , b=%d\n",a,b);
    swap(&a,&b);
    printf("After swapping: a=%d , b=%d",a,b);
}

// our aim is to swap the values of variable a and b
// for this we are using call by value method .

// In call by reference method of parameter passing, the address of 
// the actual parameters is passed to the function as the formal parameters.
//  In C, we use pointers to achieve call-by-reference.