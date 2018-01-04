#include <stdio.h>

int main(){
	
	//int array[10];//定义一个长度为10的int型数组 
	
	int a=5;
	int b=9;
	int *array[2]={&a,&b}; //定义一个长度为2的int指针变量型的数组 
	printf("a的值:%d\n",array[0]);
	
}
