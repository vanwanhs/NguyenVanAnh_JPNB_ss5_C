#include<stdio.h>
int main(){
	int i;
	float a,b;
	float kq;
	printf("Moi ban nhap so a:");
	scanf("%d",&a);
	printf("Moi ban nhap so b:");
	scanf("%d",&b);
	printf("CALCULATOR\n1.Tong 2 so\n2.Hieu 2 so\n3.Tich 2 so\n4.Thuong 2 so\n5.Thoat\n");
	do{
		printf("Lua chon cua ban:");
	scanf("%d",&i);
		kq = a + b;
		printf("Tong cua hai so %d + %d = %d",a,b,kq);
		
		
	} while(i<0 || i < 5);
	return 0;
}
