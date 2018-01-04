//C中基本类型 short(2个字节) int(2|4) long(4),(long,long)(8) char(1),bool(1)(非0为真，0为假) 
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

printf("short类型所占用的字节数：%d,%d \n",shortSize,s);
printf("int类型所占用的字节数：%d\n",intSize);
printf("long类型所占用的字节数：%d\n",longSize);
printf("char类型所占用的字节数：%d,%c\n",charSize,c);
printf("bool类型所占用的字节数：%d\n",boolSize);
printf("float类型所占用的字节数：%d,%.7f\n",floatSize,f);
printf("double类型所占用的字节数：%d\n",doubleSize);
printf("long double类型所占用的字节数：%d\n",longDoubleSize);


return 0;

}

