#include<stdio.h>
int main()
{
    // int a=1;
    // question : print a's value from 1 to 5
    // printf("a=%d",a);
    // a=a+1;
    // printf("a=%d",a);
    // a=a+1;
    // printf("a=%d",a);
    // a=a+1;
    // printf("a=%d",a);
    // a=a+1;
    // printf("a=%d",a);

    // print hello world 5 times and value of a from 1 to 5
    // while(a<=5)
    // {
    //     printf("a=%d",a);
    //     printf("Hello world\n");
    //     a+=1; 
    // }

    // print even numbers from 1 to 10

    // int a=2;
    // while(a<=10){
    //     printf("a=%d",a);
    //     a+=2;
    // }

    int a=1;
    while(a<=10){

        if(a%2==0){
            printf("a=%d\n",a);
        }
        a+=1;
    }
    
}
// loop is used for performing a similar task multiple times.
// 3 necessary things to learn in loop
// a variable must be initailized -> initialized condition
// loop must have an ending condition -> as in above example (a<6) // loop hume kab band krna h ye condition daalni jrui h varna computer hang ho jaega aur heat krega cpu
// loop must have an update statement -> as in above example (a+=1)

// [1,10]
// 2,4,6,8,10