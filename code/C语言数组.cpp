#include <stdio.h>

//c��������������ʱ����ָ������ĳ���
//c����û�з������Ի������ĳ���
//java����������ʱ������ָ������ĳ��ȣ���ʼ�� 
int main(){
	
	int array[5]={1,2,3,4,5};
	int array1[5]={1,2,3};
	int array2[]={1,2,3,4,5,6};
	
	printf("����ĳ���: %d\n",sizeof(array1)/sizeof(array1[0]));
	
	
	//��������
	int i=0;
	for(int i=0;i<5;i++){
		printf("array1[%d]=%d\n",i,array1[i]);
	} 
	
	//�ַ�����
	char cs[] ={'a','b'};
	printf("--->%s\n",cs); 
	
}
