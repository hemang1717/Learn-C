// QUestion 2:

// #include<stdio.h>
// int main()
// {
//     int a=10,b=20;

//     if(a+b){
//         printf("1st statement\n");
//     }
//     if(a-b){
//         printf("2nd statement\n");
//     }
//     if(a*b){
//         printf("3rd statement\n");
//     }
//     if(b%a){
//         printf("4th statement\n");
//     }
//     else{
//         printf("5th statement\n");
//     }
// }

// Question 3:

// #include<stdio.h>
// int main()
// {
//     int a=10,b=20;

//     int val1=(a&&b);
//     int val2=(a||b);

//     printf("%d %d\n",val1,val2);

//     if(a && !b){
//         printf("Statement 1\n");
//     }
//     if(a || b){
//         printf("Statement 2\n");
//     }
//     if(!a || !b){
//         printf("Statement 3\n");
//     }
//     if(!b){
//         printf("Statement 4\n");
//     }
//     else{
//         printf("Statement 5\n");
//     }
// }

// Question 4:

// #include<stdio.h>
// int main()
// {
//     int x=10;

//     if(x+=10){
//         printf("Statement 1\n");
//     }
//     if(x-=20){
//         printf("Statement 2\n");
//     }
//     else{
//         printf("Statement 3\n");
//     }

//     int y=1;
//     if(x=y){
//         printf("hi hi\n");
//     }
//     if(x==y){
//         printf("hi hi hi\n");
//     }
//     else{
//         printf("no no no\n");
//     }

// }
// == compares the value bewteen two variables
// = only assignes the value to other variable

// Question 1:

#include<stdio.h>
int main()
{
    int a=10,b=20;

    printf("%d\n",--a + b++);
    printf("%d\n",a-- + ++b);
    printf("%d %d\n",a,b);

    b%=10;
    a%=8;

    printf("%d",a+b);

}

// 29
// 31
// 8 22 
// 2