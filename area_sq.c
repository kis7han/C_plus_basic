#include<stdio.h>
int area(int a);
int main(){
    int c;
c=area(4);
printf("area=%d",c);
    return 0;
}area(int a){
int c;
c=a*a;
return c;
}