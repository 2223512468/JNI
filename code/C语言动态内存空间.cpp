#include <stdio.h>
#include <stdlib.h>

//声明结构体 
struct People{
	char* name;
	int age;
	float abc;
};

int main(){
	
	//定义结构体变量
	struct People p ={"LiLei",26,12.5};
	
	printf("name--->%s\n",p.name); 
	printf("age--->%d\n",p.age); 
	printf("abc--->%.1f\n",p.abc); 


	//定义结构体指针变量
	struct People * pPoint;
	pPoint = &p; 

	printf("name--->%s\n",(*pPoint).name); 
	printf("age--->%d\n",(*pPoint).age); 
	printf("abc--->%.1f\n",(*pPoint).abc); 
	
	printf("name--->%s\n",pPoint->name); 
	printf("age--->%d\n",pPoint->age); 
	printf("abc--->%.1f\n",pPoint->abc); 
		
} 
