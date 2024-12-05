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
//     int i=0;
//     while(i){
//         if(i==5){
//             continue;
//         }
//         printf("%d",i);
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
//     }while(i>=11 && i<=15)
// }

// Q6:
// #include<stdio.h>
// int main()
// {
//     int cnt=0;
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
//             break;;
//         }
//         printf("%d\n",i);
//         i+=2;
//     }
// }