#include <stdio.h>

//修改i的值，指针变量P是否会有变化？没有变化
//修改指针变量P,i的值是否会有变化？没有变化
//修改i的值，*p是否会有变化？会变化
//修改*p的值，i是否会有变化？会变化 

int main(){
	
	int i=10;
	int *p=&i;
	printf("初始状态,i=%d,p=%#x\n",i,p);
	i =20;
	printf("初始状态,i=%d,p=%#x\n",i,p);
	
	
	int j=30;
	p = &j;
	printf("修改了P的指向,i=%d,p=%#x\n",i,p);
}
