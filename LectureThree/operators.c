#include<stdio.h>
int main()
{

    // arithmetic operators
    /*
    int a=10;
    int b=6;
    int c=a+b; // 16
    int d=a-b; // 4
    int e=a*b; // 60
    int f=a/b; // 1
    int g=a%b; // 4
    printf("%d\n%d\n%d\n%d\n%d\n",c,d,e,f,g);
    float ans=(float)a/(float)b;
    printf("%f",ans);
    */

    // unary operators 

    /*
    int x=10;
    printf("%d\n",--x); // 9
    int y=10;
    printf("%d\n",y++); //10

    printf("%d\n",x++ + --y); // 19
    */

    // relational operators

    // int x=20;
    // int y=0;

    // 0-> false, 1->true;
    // if(x=y){
    //     printf("abc");
    // }
    // else if(x==y){
    //     printf("def");
    // }
    // else{
    //     printf("ghi");
    // }

    // logical operators
    
    /*
    int a=0;
    int b=20;
   
    if(a&&b){
        printf("logical and is true");
    }
    else if(a||b){
        printf("logical or is true");
    }
    else{
        printf("nothing is true");
    }
    */

    // Assignment operators

    int x=12;
    // scanf("%d",&x);

    x+=10;
    printf("x is %d\n",x); // 22
    x-=10;
    printf("x is %d\n",x); // 12
    x*=10;
    printf("x is %d\n",x); // 120
    x/=10;
    printf("x is %d\n",x); // 12
    x%=10;
    printf("x is %d\n",x); // 2

 
}


// arithmetic operators: +,-,*,/, % ->remainder

// unary operators -> ++, --
// ++ -> x=x+1 || -- -> x=x-1;  
// post increment -> x++
// pre increment -> ++x

// relational operators ->  <,>,<=,>=,!=,==

// logical operators -> logical and (&&), logical or (||) , logical not(!)

// AND 
// if both are true then if statements run

// OR
// if one of them is true then statements run

// NOT
// it means converting 0 to 1 , or 1 to 0.

// Assignment operators:
// = , += , -= , *= , /= , %=

// x+=10 => x=x+10
// x-=10 => x=x-10
// x*=10 => x=x*10
// x/=10 => x=x/10
// x%=10 => x=x%10
