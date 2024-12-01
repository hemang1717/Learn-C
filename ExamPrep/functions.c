// #include<stdio.h>


// // syntax function -> <return-type> <function-name>(parameters)
// // {

// // }

// // int sum(int a,int b)
// // {
// //     int c=a+b;
// //     return c;
// // }
// // int multiply(int a,int b)
// // {
// //     int x=a*b;
// //     return x;
// // }

// // int sum(int a,int b); // declaration method 1
// // int sum(int,int); // declaration method 2
// int main()
// {
//     int a,b,c,d,e,f,g,h,i,j;
//     printf("Enter two numbers: ");
//     scanf("%d %d",&a,&b);
//     int sumOfTwoNumbers=sum(a,b);
    
//     printf("Sum of two numbers is : %d\n",sumOfTwoNumbers);

    
// }
// int sum(int a,int b)
// {
//     int c=a+b;
//     return c;
// }
// // when making a function call through main function and passing variables to another function then the variables are known as arguments.
// // 

// question : Take 4 variables as input
// add first 3 variables and multiply their result with the 4th variable

// #include <stdio.h>
// int sum(int a, int b,int c)
// {
//     int d=a+b+c;
//     return d;
// }
// int multiply(int a,int b)
// {
//     int f=a*b;
//     return f;
// }
// int main()
// {
    
//     int a,b,c;
//     printf("enter the three numbers:");
//     scanf("%d %d %d",&a,&b,&c);
//     int sumOfThreeNumbers=sum(a,b,c);

//     int d;
//     printf("enter fourth number: ");
//     scanf("%d",&d);

//     int ans=multiply(sumOfThreeNumbers,d);
//     printf("Answer is: %d",ans);
// }



// Question : Take 6 variables as input 
// add first three variables , add last three variables
// multiply the addition of first three and last three variable


// #include <stdio.h>

// int sum(int a, int b, int c)
// {
//     int x=a+b+c;
//     return x;
// }

// int multiply (int x, int y)
// {
//     int z=x*y;
//     return z;
// }
// int main()
// {
//     int a,b,c;
//     printf("enter the three number:");
//     scanf("%d %d %d", &a, &b, &c);
//     int sum1=sum(a,b,c);
    
//     int d,e,f;
//     printf("enter the next three number:");
//     scanf("%d %d %d", &d, &e, &f);
//     int sum2=sum(d,e,f);

//     int ans=multiply(sum1,sum2);
//     printf("%d",ans);
// }
