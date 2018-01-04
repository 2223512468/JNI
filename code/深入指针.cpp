#include <stdio.h>

//数组在内存中是一串连续的地址
//在C语言中，数组名不代表整个数组，只代表首元素的地址 

int main(){
	
	int array [] ={10,20,30,40,50};
	int *p = array;
	int i=0;
	for(;i<5;i++){
	printf("array[%d]=%d\n",i,array[i]);
	printf("array[%d]的地址%#x\n",i,&array[i]);
	}
	
	//指针法遍历数组
	for(;p<array+5;p++){
		printf("元素=%d\n",*p);
	}
}
