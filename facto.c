#include<stdio.h>
int fact(int n);

int main(){
int f= fact(5);
printf("factorial=%d",f);


    return 0;
}int fact(int n){
    int fac=1;
for(int i=1;i<=n;i++){
    fac=fac*i;
}
return fac;
}