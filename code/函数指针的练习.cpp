#include <stdio.h>

int max(int,int);
int min(int,int);
int add(int,int);
void print(int,int,int (*)(int,int));

int main(){
	
	int a =50;
	int b=20;
	
	//声明函数指针
	int (*p)(int,int); 
	
	int type;
	printf("请输入1或者2或者3：\n");
	scanf("%d",&type);
	
	switch(type){
		case 1:
			p = max;
			break;
		case 2:
			p= min;
			break;
		case 3:
			p= add;
			break;
	}
		int c=	p(a,b);
		printf("结果：%d\n",c);
		print(a,b,p);
}

int max(int i,int j){
	if(i<j){
		return j;
	}else{
		return i;
	}
}



int min(int i,int j){
	if(i>j){
		return j;
	}else{
		return i;
	}
}

int add(int i,int j){
	return i+j;
}

void print(int a,int b,int(*p)(int,int)){
	printf("最后的结果:%d\n",p(a,b));
}









