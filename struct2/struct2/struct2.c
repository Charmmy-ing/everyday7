#include<stdio.h>
#define nums 100
typedef int new;
typedef struct
{
	new  *arr;
	new length;
}seq;
//动态配置顺序表的内存把它的栈区放到堆区；
seq* ini()
{
	seq* l = (seq*)malloc(sizeof(seq));
	l->arr=(new *) malloc(sizeof(int) * nums);
	l->length = 0;
	return l;
}
int input(seq* l, new n)
{
	if (n >= sizeof(l->arr))
	{
		printf("over intput");
		return 0;
	}
	l->arr[l->length] = n;
	l->length++;
	return 1;
}
void thr(seq* l)
{
	for (int i = 0; i < l->length; i++)
	{
		printf("%d", l->arr[i]);
	}
	printf("\n");
}
//插入
int insert(seq* l, new a, int n)
{
	if (a > l->length)
	{
		printf("overinsert");
		return 0;
	}
	for (int i = l->length - 1; i >= a - 1; i--)
	{
		l->arr[i + 1] = l->arr[i];
	}
	l->arr[a - 1] = n;
	l->length++;
	return 1;

}
//删除同理，会往前覆盖，最后一个数字会存在但不管他，因为length会减一，下一次为length会覆盖掉没删除的的那个数；
//查找
int find(seq* l, int n)
{
	if (l->length == 0)
	{
		printf("without");
		return 0;
	}
	for (int i = 0; i < l->length; i++)
	{
		if (l->arr[i] == n)
		{
			return i + 1;
		}
	}
	return 0;
}
int main()
{
	seq *list=ini();
	printf("初始化顺序表成功，初始化为：%d\n", list->length);
	input(&list, 2);
	input(&list, 3);
	input(&list, 4);
	input(&list, 5);
	thr(&list);
	insert(&list, 2, 0);
	thr(&list);
	printf("%d", find(&list, 2));
	return 0;
}
