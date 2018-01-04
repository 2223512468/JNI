#include <stdio.h>

int add(int a,int b){
	return a+b;
}
 
int main(){
	int i=10;
	int j=20;
	int k=add(i,j);
	printf("sum:%d\n",k);
}


