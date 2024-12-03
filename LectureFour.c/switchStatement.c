#include <stdio.h>
int main()
{
    int a = 10;
    switch (a)
    {
        case 1:
        {
            printf("a's value is: 1\n");
            break;
        }
        case 2:
        {
            printf("a's value is: 2\n");
            break;
        }
        case 3:
        {
            printf("a's value is: 3\n");
            break;
        }
        default:
        {
            printf("a's value is: somewhat\n");
            break;
        }
    }
}

// 1 , 2 , 3
// if(a==1){
// }
// else if(a==2){
// }
// else if(a==3){
// }
// else{
// }