#include<stdio.h>
float change(float c);
int main(){
int f;
f=change( 37);
printf("farenheit=%d",f);


    return 0;
}float change(float c){
float result;
result= (float)(37*9/5)+32;
return result;

}