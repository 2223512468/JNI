//C�л������� short(2���ֽ�) int(2|4) long(4),(long,long)(8) char(1),bool(1)(��0Ϊ�棬0Ϊ��) 
// float double (long double) 

#include <stdio.h>
int main(){
	
int shortSize=sizeof(short);
short s = 3000;
int intSize=sizeof(int);
int longSize = sizeof(long);
int charSize = sizeof(char);
char c ='a';

int boolSize = sizeof(bool);
int floatSize = sizeof(float);
float f=3.1415926;

int doubleSize = sizeof(double);
int longDoubleSize = sizeof(long double);

printf("short������ռ�õ��ֽ�����%d,%d \n",shortSize,s);
printf("int������ռ�õ��ֽ�����%d\n",intSize);
printf("long������ռ�õ��ֽ�����%d\n",longSize);
printf("char������ռ�õ��ֽ�����%d,%c\n",charSize,c);
printf("bool������ռ�õ��ֽ�����%d\n",boolSize);
printf("float������ռ�õ��ֽ�����%d,%.7f\n",floatSize,f);
printf("double������ռ�õ��ֽ�����%d\n",doubleSize);
printf("long double������ռ�õ��ֽ�����%d\n",longDoubleSize);


return 0;

}

