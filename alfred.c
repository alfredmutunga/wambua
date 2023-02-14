#include <stdio.h>
#include <stdlib.h>

int main()
{
    //A program to solve quadratic equations
    float a,b,c,root1,root2;

    printf{"enter the value of a,\n"};
    scanf{"%f",&a};//this stores the value of a

    printf{"Enter the value of b,\n"};
    scanf{"%f",&b};//This stores the value of b

    printf{"Enter the value of c,\n"};
    scanf{"%f",&c};//This stores the value of c

    root1={-b+sqrt{b*b-4*a*c}}/{2*a};//for the first root of x
    root2={-b-sqrt{b*b-4*a*c}}/{2*a};//for the second value of x

    printf{"%f value of root1,\n",root1};
    printf{"%f value of root2 ,\n",root2;

    return 0;
}
