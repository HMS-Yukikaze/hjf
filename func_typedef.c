#include<stdio.h>
typedef void (*func_t)();

func_t func1;
func_t test()
{
	void func1()
	{
		printf("%s",__func__);
	};
return func1;
}
int main()
{
	test()();
	return 0;
}
