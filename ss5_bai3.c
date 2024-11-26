#include<stdio.h>
int main(){
	int sum = 0;
	int num,i;
	do {
		printf ("Moi ban nhap so nguyen:");
	scanf("%d",&num);
		if(num>0){
		for (i=0;i<=num;i++){
			sum += i;
		}
	} 
	
	} while(num<0)	;	
		
	printf("tong so hang %d = %d",num,sum);
	
	return 0;
}
