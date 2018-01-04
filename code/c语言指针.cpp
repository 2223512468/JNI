#include <stdio.h>

int main(){
	int i=10; //变量i的内容是10，i的地址(指针) 是 &i
	 
	int *p =&i;
	
	float f =3.14;
	float *p2=&f;
	
	//通过指针访问变量的内容
	printf("i---->%d\n",i); //直接访问变量i
	printf("i---->%d\n",*p);//直接访问指针变量所指向的内存地址中的内容 

}
