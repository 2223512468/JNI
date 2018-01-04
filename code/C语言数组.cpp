#include <stdio.h>

//c语言中声明数组时可以指定数组的长度
//c语言没有方法可以获得数组的长度
//java中声明数组时，不能指定数组的长度，初始化 
int main(){
	
	int array[5]={1,2,3,4,5};
	int array1[5]={1,2,3};
	int array2[]={1,2,3,4,5,6};
	
	printf("数组的长度: %d\n",sizeof(array1)/sizeof(array1[0]));
	
	
	//遍历数组
	int i=0;
	for(int i=0;i<5;i++){
		printf("array1[%d]=%d\n",i,array1[i]);
	} 
	
	//字符数组
	char cs[] ={'a','b'};
	printf("--->%s\n",cs); 
	
}
