/////////bai 5: chu vi dien tich hinh thang//////
#include <stdio.h>
void main()
{
    int a,b,c,d,h,cv,dt;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&h);
    cv=a+b+c+d;
    dt=((a+b)/2)*h;
    printf("\n chu vi:= %d",cv);
    printf("\n dien tich:= %d",dt);
}
