// Complex numbers: Add, Subtract, Divide and Multiply

#include<stdio.h>

struct complex_number{
    int real;
    int imaginary;

};

int main()
{

    int number11, number12;
    printf("Enter two numbers :");
    scanf("%d %d",&number11,&number12);

    struct complex_number cn1 = {number11, number12};

    int number21, number22;
    printf("Enter two numbers: ");
    scanf("%d %d", &number21, &number22);

    struct complex_number cn2 = {number21, number22};

    printf("sum of two complex numers is : %d+i%d",cn1.real+cn2.real+cn1.imaginary+cn2.imaginary);


    
    return 0;
}
