//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	for (i = 1; i < 101; i++)
//	{
//		if (i % 3 == 0)            //1-100��3�ı���
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()                               //���Լ��
//{
//	int a = 0;
//	int b = 0;
//	int m = 0;
//	scanf("%d%d", &a, &b);
//	if (a < b)
//	{
//		for (m = a; m >0; m--)
//		{
//			if (a % m == 0 && b % m == 0)
//			{
//				printf("���Լ��%d\n", m);
//				break;
//			}
//		}
//	}
//	else if (a > b)
//	{
//		for (m = b; m > 0; m--)
//		{
//			if (a % m == 0 && b % m == 0)
//			{
//				printf("���Լ��%d\n", m);
//				break;
//			}
//		}
//	}
//	else if(a==b)
//	{
//		printf("���Լ��%d\n", a);
//	}
//	else
//	{
//		printf("���Լ��Ϊ1\n");
//	}
//	return 0;
//}
//


//
//#include<stdio.h>
//#include<math.h>
//int prime(int a)
//{
//	int b = 0;
//	for (b = 2; b <sqrt(a); b++)      //�ж�����
//	{
//		if (a % b == 0)
//		{
//			return 0;
//		}
//	}
//		return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 201; i++)
//	{
//		if (prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//
//
//#include<stdio.h>
//int main()
//{
//	int a = 24;
//	int b = 18;
//	int c = 0;
//	scanf_s("%d%d", &a, &b);
//	while (a % b)
//	{
//		c = a % b;
//		a = b;
//		b = c;
//	}
//	printf("%d\n", b);     //���Լ��,�Ƴ���
//	return 0;
//}
//
//
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1000; i < 2021; i++)
//	{
//		if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))          //�ж�����
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i < 101; i++)            //�ж�1��100�ж��ٸ�9
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//}

//
//#include<string.h>
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int b = 0;
//	int arr[] = { 1,23,4,8,6,71,15,12,12 };
//	int len = sizeof(arr)/sizeof(arr[0]);            //�������ֵ,strlen�����ַ�������
//	for (i = 0; i < len; i++)
//	{
//		if (arr[i] >= b)
//		{
//			b = arr[i];
//		}
//	}
//	printf("%d\n", b);
//	return 0;
//}


//
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int m = 0;
//	for (i = 1; i < 10; i++)
//	{
//		for (m = 1; m <=i; m++)
//		{
//			printf("%d*%d=%-2d ", i, m, i * m);            //9*9�˷���
//		}
//		printf("\n");
//	}
//	return 0;
//}

//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include <time.h>
//#include<windows.h>
//void menu()
//{
//	printf("*************************\n");             //������Ϸ
//	printf("****��ӭ����������Ϸ****\n");
//	printf("*************************\n");
//	Sleep(3000);
//	system("cls");
//	printf("������Ϸ����1��\n");
//	printf("�˳���Ϸ����2��\n");
//}
//void game()
//{
//	int m = 0;
//	int random = 0;
//	random = rand() % 100 + 1;
//	while (1)
//	{
//		printf("�����������:\n");
//		scanf("%d", &m);
//		if (m > random)
//		{
//			printf("�´���\n");
//		}
//		else if (m < random)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ����\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int i = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��\n");
//		scanf("%d", &i);
//		switch (i)
//		{
//		case 1:
//			game();
//			break;
//		case 2:
//			return 0;
//		}
//	} while (i);
//}

//
//#define _CRT_SECURE_NO_WARNINGS
//#include<string.h>
//#include<stdio.h>
//int main()
//{
//	char arr[] = "bit";
//	char arr1[] = "********";             //�ַ�������
//	strcpy(arr1, arr);
//	printf("%s\n", arr1);
//	return 0;
//}


//
//#define _CRT_SECURE_NO_WARNINGS
//#include<string.h>
//#include<stdio.h>;
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 8);              //����
//	printf("%s\n", arr);
//	return 0;
//}



//#include<stdio.h>
//int swap(int* x, int* y)        //�ú�����������ֵ
//{
//	int temp = 0;
//	temp = *x;
//	*x = *y;
//	*y = temp;
//}
//int main()
//{
//	int a = 10;
//	int b = 22;
//	swap(&a, &b);
//	printf("%d %d", a, b);
//	return 0;
//}



//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int find(int arr[],int x,int y)       //arr[]�Ǹ�ָ��,�����ٺ�����ֱ����sizeof(arr) / sizeof(arr[0])�����鳤�ȣ���Ȼ�ó���1��4/4��
//{
//	int left = 0;
//	int right = y - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;                //�ú������ֲ��ҷ������������
//		if (arr[mid] > x)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < x)
//		{
//			left = left + 1;
//		}
//		else
//		{
//			return mid;
//			break;
//		}
//	}
//	if (left > right)
//	{
//		return -1;
//	}
//
//}
//int main()
//{
//	int arr[] = { 1,2,5,7,9,13,19,23,24 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int k = 0;
//	scanf("%d", &k);
//	int location = find(arr,k,len);
//	if (location == -1)
//	{
//		printf("û�������ֵ\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±���%d\n", location);
//	}
//	return 0;
//}
//



//#include<stdio.h>
//int add(int* x)             //�ú������ı�������ʵ�ε�ֵ
//{
//	(*x)++;
//}
//int main()
//{
//	int num = 0;
//	add(&num);
//	printf("%d\n", num);
//	return 0;
//}


//
//#include<stdio.h>
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));          //����ֵ�ǳɹ��󣬷���д����ַ�������
//	return 0;
//}

//
//
//#include<stdio.h>
//#include "add.h"           //����ͷ�ļ�,��ֱ�ӵ���
//int main()
//{
//	int a = 10;
//	int b = 2;
//	int s=add(a, b);
//	printf("%d\n", s);
//	return 0;
//}




//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//void order(int x)
//{
//	if (x > 9)
//	{
//		order(x / 10);
//	}
//	printf("%d ", x % 10);
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	order(i);
//	return 0;
//}
