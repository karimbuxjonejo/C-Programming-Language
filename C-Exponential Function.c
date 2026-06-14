int expofunc(int base, int exponent);

#include<stdio.h>
int main()
{
    int base_variable, exponent_variable;
    printf("Enter Base: ");
    scanf("%d",&base_variable);
    printf("and it's Exponent: ");
    scanf("%d",&exponent_variable);
    printf("%d for %d times is %d",base_variable,exponent_variable,expofunc(base_variable,exponent_variable));
    getchar();
    return 0;
}

int expofunc(int base, int exponent)
{
    int loop, result=1;
    for(loop=0; loop<exponent; loop++)
    {
        result*=base;
    }
    return result;
}