#include<stdio.h>
int main()
{
    int i=1;
    do{
        printf("i: %d\n",i);
        i++;
    }while(i<0);


}
// do while loop will run for at least one time.
// in do while loop the ending condition will be checked at last
// whereas in for loop and while loop ending condition is being checked first
// after the while condition in do while loop semicolon is necessary.