#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    scanf("%d",&a);
    // multiply a 4 times;
    // (a^4)=>(a*a*a*a);

    int b=pow(a,4);


    printf("%d raise to power 4 is: %d\n",a,b);

    double x=4.9;
    double y=ceil(x);
    printf("Ceil of %lf is: %lf\n",x,y);
    printf("Floor of %lf is: %lf\n",x,floor(x));

}
// in built functions are present in different libraries such as math.h , algorithm.h