#include <stdio.h>


int add(int i,int j){
	return i+j;
}

int main(){
	
	int a=10;
	int b=20;
	int c = add(a,b);
	printf("���:%d\n",c);
	
	
	//��������ָ��
	int (* pm)(int,int);//������һ������ָ�룬��ָ�����ָ�򷵻�ֵΪint,������2��int���Ͳ����ĺ��� 
	pm = add;//������ָ��Pmָ��add���� 
	
	int e =30;
	int f=40;
	int g = pm(e,f);
	printf("���:%d\n",g);

}
