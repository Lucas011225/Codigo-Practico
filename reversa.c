#include <stdio.h>
int contador(char* cad);

int main(void){

	char cad[]="algo";
	int n= contador(cad);
	char cad2[n+1];
	
	
	for(int j=n;j>0;j--){

		static int i=0;
		
printf("i es %d y j es %d\n",i,j);
	
		cad2[j]=cad[i];
		i++;	
		}
	
	
int p= contador(cad2);	
printf("n es %d y p es %d \n",n,p);

		printf("%s se escribe al reves:%s",cad,cad2);
		
}


int contador(char* cad){
	int i=0,n;
	while(cad[i]!=0){
		i++;
		}
		
	return i;
}
