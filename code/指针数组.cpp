#include <stdio.h>

int main(){
	
	//int array[10];//����һ������Ϊ10��int������ 
	
	int a=5;
	int b=9;
	int *array[2]={&a,&b}; //����һ������Ϊ2��intָ������͵����� 
	printf("a��ֵ:%d\n",array[0]);
	
}
