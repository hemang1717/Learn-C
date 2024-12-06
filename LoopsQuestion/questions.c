// Q1:
// #include<stdio.h>
// int main()
// {
//     int i=0;
//     while(i){
//         if(i==10){
//             break;
//         }
//         printf("%d",i);
//         i+=2;
//     }
// }

// Q2:
// #include<stdio.h>
// int main()
// {
//     int i=1;
//     while(i){
//         if(i==5){
//             continue;
//         }
//         printf("%d\n",i);
//         i+=3;
//         if(i%3==0){
//             break;
//         }
//     }
// }

// Q3:
// #include<stdio.h>
// int main()
// {
//     int i=0;
//     for(;;){
//         if(i>0 && i<=2){
//             continue;
//         }
//         if(i%2==0) break;
        
//         printf("%d",i);
//         i+=2;
//     }
// }

// Q4:
// #include<stdio.h>
// int main()
// {
//     for(int i=0;i<10;i++){
//         printf("%d",i);
//         i*=3;
//         i--;
//     }
// }

// Q5:
// #include<stdio.h>
// int main()
// {
//     int i=10;
//     do{
//         printf("hello world\n");
//         i++;
//     }while(i>=11 && i<=15);
// }

// Q6:
// #include<stdio.h>
// int main()
// {
//     int cnt=1;
//     do{
//         printf("Hardik\n");
//         if(cnt%4==0) break;
//         cnt++;
//     }while(1);
// }

// Q7:
// #include<stdio.h>
// int main()
// {
//     int i=3;
//     for(;;i++){
//         if(i%5==0){
//             break;
//         }
//         printf("%d\n",i);
//         i+=2;
//     }
// }

// find sum of first n natual numbers

// 1,2,3,4,........ natural numbers
// 0,1,2,3..... natual numbers

// n=5
// 1,2,3,4,5 = 15
// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the number: ");
//     scanf("%d",&n);

//     int sum=0;
//     for(int i=1;i<=n;i++){
//         sum=sum+i;
//     }
//     printf("Sum is: %d",sum);
// }


// find the square sum of first n natual numbers

// n=3
// 1*1 + 2*2 + 3*3 =14
// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the number: ");
//     scanf("%d",&n);

//     int sum=0;
//     for(int i=1;i<=n;i++){
//         int val=i*i;
//         sum=sum+val;
//     }
//     printf("Sum is: %d",sum);
// }

// product of first n natural numbers
// n=4
// 1*2*3*4=24

// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the number: ");
//     scanf("%d",&n);

//     int sum=1;
//     for(int i=1;i<=n;i++){
//         sum=sum*i;
//     }
//     printf("Product is: %d",sum);
// }

// #include<stdio.h>
// int main()
// {
//     int n=4;
//     // printf("Enter the number: ");
//     // scanf("%d",&n);

//     int sum=1;
//     sum=sum*1;
//     sum=sum*2;
//     sum=sum*3;
//     sum=sum*4;

//     printf("Product is: %d",sum);
// }


// #include<stdio.h>
// int main()
// {
//     int n=4;
//     // printf("Enter the number: ");
//     // scanf("%d",&n);

//     int sum=0;
//     sum=sum+1;
//     sum=sum+2;
//     sum=sum+3;
//     sum=sum+4;

//     printf("Product is: %d",sum);
// }


// #include<stdio.h>
// int main()
// {
//     int n=4;
//     // printf("Enter the number: ");
//     // scanf("%d",&n);

//     int sum=0;
//     sum=sum+1*1;
//     sum=sum+2*2;
//     sum=sum+3*3;
//     sum=sum+4*4;

//     printf("Product is: %d",sum);
// }

// 5. Write a program in C to display the cube of the number up to an integer.
// Test Data :
// Input number of terms : 5
// Expected Output :
// Number is : 1 and cube of the 1 is :1
// Number is : 2 and cube of the 2 is :8
// Number is : 3 and cube of the 3 is :27
// Number is : 4 and cube of the 4 is :64
// Number is : 5 and cube of the 5 is :125

// 8. Write a C program to display the n terms of odd natural numbers and their sum.
// Test Data
// Input number of terms : 3
// Expected Output :
// The odd numbers are : 1 3 5 
// The Sum of odd Natural Number upto 10 terms : 9
