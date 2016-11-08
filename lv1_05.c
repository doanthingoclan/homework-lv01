/////bai5 :tinh the tich hinh tru/////////
#include <stdio.h>
void main()
{
    int pi,V,vxq,vtp,r,h ;
    scanf("%d%d",&r,&h);
    pi=3,14;
    V=pi*r*r*h;
    vxq= 2*pi*r*h;
    vtp= 2*pi*r*(r+h);
    printf("\n V:= %d",V);
     printf("\n Vxq:= %d",vxq);
      printf("\n Vtp:= %d",vtp);
}

