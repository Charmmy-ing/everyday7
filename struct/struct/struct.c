#include<stdio.h>
#define nums 100
typedef int new;
	typedef struct
	{
		new  arr[nums];
		new length;
	}seq;
	void ini(seq *l)
	{
	   l->length = 0;
	}
	int main()
	{
		seq list;
		ini(&list);
		printf("初始化顺序表成功，初始化为：%d",list.length);
	}
