#include<stdio.h>

void swap(int a,int b)
{
    // a=10 , b=5;
    // method 1: 
    // a=b , a=5 , b=5
    // b=a , b=5 , a=5

    // a=10 , b=5;
    // method 2:
    // b=a , b=10 , a=10
    // a=b , a=10 , b=10


    // actual logic: 
    // a=10, b=5
    // x=a , x=10 
    // a=a , a=5
    // b=x , b=10

    int x=a;
    a=b;
    b=x;

    printf("In swap function: a=%d , b=%d\n",a,b);
}

int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("Before swapping: a=%d , b=%d\n",a,b);
    swap(a,b);
    printf("After swapping: a=%d , b=%d",a,b);
}

// our aim is to swap the values of variable a and b
// for this we are using call by value method .
// In call by value method of parameter passing, the 
// values of actual parameters are copied to the function’s formal parameters.

// when we are passing variables as parameters through main function
// then they are known as actual parameters
// and the function which collects these variables , for that function
// these variables are known as formal parameters.