#include <stdio.h>

int max(int,int);
int min(int,int);
int add(int,int);
void print(int,int,int (*)(int,int));

int main(){
	
	int a =50;
	int b=20;
	
	//��������ָ��
	int (*p)(int,int); 
	
	int type;
	printf("������1����2����3��\n");
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
		printf("�����%d\n",c);
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
	printf("���Ľ��:%d\n",p(a,b));
}









