#include <stdio.h>

int main(){
	int i=10;
	printf("i=%d\n",i);
	
	short s =100;
	printf("s=%hd\n",s);
	
	long l =1000;
	printf("l=%ld\n",l);
	
	char c = 'A';
	printf("c=%c\n",c);
	
	printf("i��ʮ������:%#x\n",i);
	printf("i�İ˽���:%#o\n",i);
	
	
	char cl[] ={'H','e','l','l','o'};
	char cArray [] ="hello";
	printf("�ַ���Ϊ��%s\n",cl);
	printf("�ַ���Ϊ��%s\n",cArray);

}
