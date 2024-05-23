#include <stdio.h>
#include "lr.h"

int main(void) 
{
    int n, c;
    printf("Введите номер лабы: ");
    scanf("%d",&n);
    if(n==1)
    {
        printf("Лаба(1) или доп(2): ");
        scanf("%d",&c);
        if(c==1)
            return lr1();
        else if(c==2)
            return dop1();
    }
    else if(n==2)
    {
        printf("Лаба(1) или доп(2): ");
        scanf("%d",&c);
        if(c==1)
            return lr2();
        else if(c==2)
            return dop2();
    }
    else if(n==3)
    {
        printf("Лаба(1) или доп(2): ");
        scanf("%d",&c);
        if(c==1)
            return lr3();
        else if(c==2)
            return dop3();
    }
    else if(n==4)
    {
        printf("Лаба(1) или доп(2): ");
        scanf("%d",&c);
        if(c==1)
            return lr4();
        else if(c==2)
            return dop4();
    }
    else if(n==5)
    {
        printf("Лаба(1) или доп(2): ");
        scanf("%d",&c);
        if(c==1)
            return lr5();
        else if(c==2)
            return dop5();
    }
    else if(n==6)
    {
        printf("Лаба(1) или доп(2): ");
        scanf("%d",&c);
        if(c==1)
            return lr6();
        else if(c==2)
            return dop6();
    }
    else if(n==7)
        return lr7();
    else
    printf("такой лабы нет");
}
