#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	return 0;
}


#if 0
int main()
{
	int i = 0;
	if (i == 0)
	{
		printf("\n");
	}
	return 0;
}

#include<stdio.h>
#include<string.h>
#define M 13361
FILE *fp;
int main()
{
	char cy[M][10];
	char a[8];
	//char b[2];
	char c[2];
	int i, j;
	int find;
	int flag = 0;
	if ((fp = fopen("idom.txt", "r")) == NULL)
	{
		printf("cannot open file\n");
		return 0;
	}

	for (i = 0; i<M; i++)
	{
		fscanf(fp, "%s", cy[i]);
	}
	while (1)
	{

		printf("�����뿪ͷ�ĳ���������롰�˳��������˳���Ϸ��\n");
		scanf("%s", &a);
		find = 0;
		if (strcmp(a, "�˳�") == 0)
			break;
		for (i = 0; i<M; i++)
		{
			if (strncmp(a, cy[i], strlen(a)) == 0)
			{
				find = 1;
				break;
			}
		}
		if (find == 0)
			printf("����Ĳ��ǳ��������������˳�\n");
		else
		{
			//b[0]=a[6];
			//	b[1]=a[7];
			for (i = 0; i<M; i++)
			{
				if (cy[i][0] == a[6] && cy[i][1] == a[7])

				{
					flag = 1;
					printf("%s\n", cy[i]);
					//c[0]=cy[i][6];
					//c[1]=cy[i][7];
					break;
				}
				if (flag == 0 && i == (M - 1))
				{
					printf("��Ӯ�ˣ������\n");
					break;
				}
				//	continue;

			}
		}
	}
	return 0;
}

#endif