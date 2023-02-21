//demo 1 for demonstrating static variable

// #include<stdio.h>
// #include<conio.h>

// void f1(void);

// void main()

// {
//  int i;
//  for(i=1;i<=5;i++)
//     f1();

// }
// void f1(void)
// {
//     static int y=5; //local variable
//     printf("%d\n",y);   //print =y=5 , +1 =6 ,+1=7 ,+1=8, +1=9
//     y++;
// }

// /*
// 5
// 6
// 7
// 8
// 9
// */

// Demonstrating global variable 

#include<stdio.h>
#include<conio.h>


int a=4; // global variable having scope throught the program

void f2(void);
void f3(void);
void main()
{
    printf(" Value of A is:-%d\n",a);
    f2();
    printf("Final value of A :-%d\n",a);
    f3();
    printf("Final value for substraction :-%d\n",a);

}
void f2(void)
{
    a+=4;
    printf("Updated value of a :-%d\n",a);
}
void f3(void)
{
    a=a+3;
    printf("Substracted value of A :-%d\n",a);
}