#include<stdio.h>
int main(){
	int a=24,i;
printf("dap an:%d\n",a);
do
{
 printf("Moi ban nhap so:",i);
scanf("%d",&i);
if(i<a){
	printf("Nho hon roi\n");
} else if (i>a) { printf("Lon hon roi\n");
} else { printf("Ching xac");
}
} 
while (a != i);
	
	return 0;
}
