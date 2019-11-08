#include<stdio.h>
#include<stdio.h>

void main ()

{
	float num1,num2,num3,num4,soma;
	
	printf("Digite o numero1: \n");
	scanf("%f",&num1);
	printf("Digite o numero2: \n");
	scanf("%f",&num2);
	printf("Digite o numero3: \n");
	scanf("%f",&num3);
	printf("Digite o numero4: \n");
	scanf("%f",&num4);
    
	if(num1>num2 && num1>num3 && num1>num4){
		soma=num2+num3+num4;
	}
	
	
	if(num2>num1 && num2>num3 && num2>num4){
    	soma=num1+num3+num4;	
    } 
	    if(num3>num1 && num3>num2 && num3>num4){
    	soma=num1+num2+num4;	
	}
    	if(num4>num1 && num4>num2 && num4>num1){
    	soma=num1+num2+num3;		
	}
	printf("O valor da soma: %f",soma);
}
