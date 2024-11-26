#include<stdio.h>
int main (){
	int num;
	int i,bcc=1;
	do {
		printf("Moi ban nhap so nguyen: ");
	scanf ("%d",&num);
	if (num > 0 && num < 11){
	for(i=1;i<=10;i++){
	bcc = i * num;
	printf("Bang cuu chuong so %d:",num);
	printf("%d x %d = %d\n",num,i,bcc);
	}
}
	}
	while (num < 0 || num >10);
	
	return 0;
}
