#include <iostream>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int saque;
	int nota1=100,nota2=50,nota3=20,nota4=10;
	int result1=0,result2=0,result3=0,result4=0;
	printf("Digite o valor para saque: ");
	scanf("%d",&saque);
	if(saque <=0)
	{
		printf("Erro valor invalido");
	}
	else if(saque >0  && saque % nota1 ==0 || saque % nota2 ==0 || saque % nota3 ==0 || saque % nota4 ==0 )
	{
		if(saque / 100 >=1)
		{
			result1= 100*(saque / 100);
			saque = saque % 100;
		
		}
		if(saque / 50 >=1)
		{ 
				result2= 50*(saque / 50);
				saque= saque %50;
		}
		if(saque /20 >=1)
		{
				result3 =20*( saque /20);
				saque = saque %20;
		}
		if(saque /10 >=1)
		{
			result4 =10* (saque/10);
		}
	  printf("%d, %d, %d, %d",result1,result2,result3,result4);	
	}
	else
	{
		printf("Erro de notas indisponiveis");
	}
	return 0;
}
