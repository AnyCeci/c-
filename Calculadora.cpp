#include <iostream>
#include<stdio.h>

 
int main(){
 
int num1,num2,sum,rest,multi;
float divi;
printf("ingrese el primer numero: ");
scanf("%d",&num1);
printf("ingrese el segundo numero:");
scanf("%d",&num2);
 
sum= num1+num2;
rest=num1-num2;
multi=num1*num2;
divi=num1/num2;
if(num2==0){
	printf("la division entre cero aun no esta definida");}
else
printf("la suma es: %d\n",sum);
printf("la resta es: %d\n",rest);
printf("la multiplicacion es: %d\n",multi);
printf("La division es: %0.2f",divi);
 
return 0;
 
}
