#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

int main()
{
	return 0;
}

#include <iostream>
using namespace std;
void Func(void)
{
	A  *a = new A;
	if (a == NULL)
	{
		cout << ��Memory Exhausted�� << endl;
		exit(1);
	}
	��
}

void main(void)
{
	float *p = NULL;
	while (TRUE)
	{
		p = new float[1000000];
		cout << ��eat memory�� << endl;
		if (p == NULL)
			exit(1);
	}
}

class Obj
{
public:
	Obj(void);  	// �޲����Ĺ��캯�� 
	Obj(int x); 	// ��һ�������Ĺ��캯��  
	��
}
void Test(void)
{
	Obj  *a = new Obj;
	Obj  *b = new Obj(1); // ��ֵΪ1 
	��
		delete a;
	delete b;
}