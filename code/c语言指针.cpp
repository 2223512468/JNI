#include <stdio.h>

int main(){
	int i=10; //����i��������10��i�ĵ�ַ(ָ��) �� &i
	 
	int *p =&i;
	
	float f =3.14;
	float *p2=&f;
	
	//ͨ��ָ����ʱ���������
	printf("i---->%d\n",i); //ֱ�ӷ��ʱ���i
	printf("i---->%d\n",*p);//ֱ�ӷ���ָ�������ָ����ڴ��ַ�е����� 

}
