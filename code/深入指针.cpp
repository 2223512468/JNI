#include <stdio.h>

//�������ڴ�����һ�������ĵ�ַ
//��C�����У��������������������飬ֻ������Ԫ�صĵ�ַ 

int main(){
	
	int array [] ={10,20,30,40,50};
	int *p = array;
	int i=0;
	for(;i<5;i++){
	printf("array[%d]=%d\n",i,array[i]);
	printf("array[%d]�ĵ�ַ%#x\n",i,&array[i]);
	}
	
	//ָ�뷨��������
	for(;p<array+5;p++){
		printf("Ԫ��=%d\n",*p);
	}
}
