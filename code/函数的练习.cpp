#include <stdio.h>

//输入一个数字，判断该数字是否为素数,true 返回1，false 返回0; 


int isSushu(int s){
	int a;
	for(a=2;a<(s-1);a++){
		if(s%a==0){
			return 0;
		}
	}
	return 1;

}

int main(){
	
	int i;
	printf("請輸入一個大于0的整數：\n");
	scanf("%d",&i);
	
	int flag = isSushu(i);
	if(flag){
		printf("%d是素数! \n",i);
	}else{
		printf("%d不是素数 \n",i);
	}
	
} 
