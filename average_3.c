#include<stdio.h>
float average(int a,int b,int c);
int main(){
float x;
x=average(10,3,0);
printf("average = %f",x);





    return 0;
} float average(int a,int b,int c){
    float x ;
x=(float) (a+b+c)/3;
return x;
}