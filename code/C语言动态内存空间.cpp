#include <stdio.h>
#include <stdlib.h>

//�����ṹ�� 
struct People{
	char* name;
	int age;
	float abc;
};

int main(){
	
	//����ṹ�����
	struct People p ={"LiLei",26,12.5};
	
	printf("name--->%s\n",p.name); 
	printf("age--->%d\n",p.age); 
	printf("abc--->%.1f\n",p.abc); 


	//����ṹ��ָ�����
	struct People * pPoint;
	pPoint = &p; 

	printf("name--->%s\n",(*pPoint).name); 
	printf("age--->%d\n",(*pPoint).age); 
	printf("abc--->%.1f\n",(*pPoint).abc); 
	
	printf("name--->%s\n",pPoint->name); 
	printf("age--->%d\n",pPoint->age); 
	printf("abc--->%.1f\n",pPoint->abc); 
		
} 
