#include <stdio.h>

//����һ�����֣��жϸ������Ƿ�Ϊ����,true ����1��false ����0; 


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
	printf("Ոݔ��һ������0��������\n");
	scanf("%d",&i);
	
	int flag = isSushu(i);
	if(flag){
		printf("%d������! \n",i);
	}else{
		printf("%d�������� \n",i);
	}
	
} 
