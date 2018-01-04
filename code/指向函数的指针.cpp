#include <stdio.h>


int add(int i,int j){
	return i+j;
}

int main(){
	
	int a=10;
	int b=20;
	int c = add(a,b);
	printf("结果:%d\n",c);
	
	
	//声明函数指针
	int (* pm)(int,int);//声明了一个函数指针，该指针可以指向返回值为int,并且有2个int类型参数的函数 
	pm = add;//将函数指针Pm指向add函数 
	
	int e =30;
	int f=40;
	int g = pm(e,f);
	printf("结果:%d\n",g);

}
