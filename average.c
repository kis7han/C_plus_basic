#include<stdio.h>
float avg(int a,int b,int c);
int main(){
int a,b,c;
printf("x=");
scanf("%d",&a);
printf("y=");
scanf("%d",&b);
printf("z=");
scanf("%d",&c);
 float r=avg(a,b,c);
 printf("result=%f",r);

    return 0;
}float avg(int a,int b,int c){
    float result=(float)(a+b+c)/3;
    return result;
}