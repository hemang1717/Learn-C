#include<stdio.h>
int main()
{
    // declaration of a datatype
    int x;
    //printf("%f",x);
    
    // definition of a datatype
    x=10;
    printf("%d\n",x);
    // declaration and definition 
    int y=20;

    x=30;

   

    char b='x';
    printf("%c %d",b,x);
    printf("%c\n%d",b,x);

    int xy;
    printf("Enter a number: ");
    scanf("%d",&xy);
    printf("Value of xy is: %d",xy);
}
// \n is used for priting the next statements in new line.

// single line comment: //
// multi line comment: /*     */


// data types means in which form you want to store data.
// integer,character,decimal,double

// in c programming : int,char,float,double,long,long long (primitive)
// derived : arrays,pointers,function
// data types are of two types: 

// primitive means the most basic/simplest data-type used for representing values
// derived means which are derived and they are not basic .

// car has windows,engine,tyres etc.
// windows,engine,tyres are primitive types
// car is a derived datatype.

// declaration of a variable means only declaring a variable
// definition of a variable means providing any value to that variable


// format specifier btate h ki agar humne input ya output me variable die h to vo konsi type ke h
// learn format specifier for : int,float,double,long,string,char,


// scanf is used to take input from user.
// required for scanf: 1. format specifier  2. & operator(address of the variable)