#include<stdio.h>
int main(){
double x,y;


printf("Escribe el primer numero");
scanf("%lf",&x);
printf("Escribe el segundo numero");
scanf("%lf",&y);


if(x>y)printf("el mayor es %lf",x);
else if(y>x)printf("el mayor es %lf",y);
else printf("son iguales");

}

