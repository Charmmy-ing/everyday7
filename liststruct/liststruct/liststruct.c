#include<stdio.h>
typedef int new;
typedef struct nope
{
	new data;
	struct nope* next;
}Nope;
int ini()
{
	Nope* l = (Nope*)malloc(sizeof(Nope));
	l->data = 0;
	l->next = NULL;
	return l;
}
//头插法；
int insert(Nope* l, new n)
{
	Nope* p = (Nope*)malloc(sizeof(Nope));
	p->data = n;
	p->next = l->next;
	l->next = p;
	return 1;
}
int gettail(Nope* l)
{
	Nope* p = l->next;
	while (p->next!= NULL)
	{
		p = p->next;
	}
	return p;
}
//尾插法尾节点会改变；
int nuinsert(Nope* l, new n)
{
	Nope* p = (Nope*)malloc(sizeof(Nope));
	p->data = n;
	p->next = l->next;
	l->next = p;
	return p;
}
//遍历（与排列数据相反）
void thr(Nope *l)
{
	Nope* p = l->next;
	while (p!= NULL)
	{
		printf("%d", p->data);
		p=p-> next;
	}
	printf("\n");
}
int main()
{
	Nope* list = ini();
	Nope*tail=gettail(list);
	tail=uninsert(tail, 20);
	tail=uninsert(tail, 12);
	insert(list, 13);
	insert(list, 14);
	thr(list);
	return 0;
}