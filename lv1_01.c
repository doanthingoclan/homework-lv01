/////Bai 1. Viet chuong trinh chu vi dien tich tam giac/////
#include <stdio.h>
void main()
{
    int cv,dt,a,b,c,p;
    scanf("%d%d%d",&a,&b,&c);
    cv=0;
    p=0;
    cv=a+b+c;
    p=(a+b+c)/2;
    dt=sqrt(p*(p-a)*(p-b)*(p-c));
    printf("\n chu vi:= %d",cv);
    printf("\n dien tich:= %d ",dt);



}
