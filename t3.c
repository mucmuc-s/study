//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//struct People       //�ṹ��
//{
//	char name[20];
//	short age;
//};
//int main()
//{
//	struct People a = { "С˧",22 };
//	printf("����Ϊ%s\n", a.name);
//	printf("����Ϊ%d\n", a.age);
//	return 0;
//}
//
//

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//struct People       //�ṹ��
//{
//	char name[20];
//	short age;
//};
//int main()
//{
//	struct People a = { "С˧",22 };
//	struct People* b = &a;
//	printf("����Ϊ%s\n", (*b).name);
//	printf("����Ϊ%d\n", (*b).age);
//	printf("����Ϊ%s\n", b->name);            //ָ����ýṹ���ں���
//	return 0;
//}

//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//struct People       //�ṹ��
//{
//	char name[20];
//	short age;
//};
//int main()
//{
//	struct People a = { "С˧",22 };
//	strcpy(a.name, "˧�Ӹ�");           //�ַ�������
//	printf("����Ϊ%s\n", a.name);
//	printf("����Ϊ%d\n", a.age);
//	return 0;
//}


//
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	scanf_s("%d", &a);
//	if (a < 18)                    //if�ṹ
//	{
//		printf("Сƨ��");
//	}
//	else if (18 <= a && a < 30)
//	{
//		printf("��ƨ��");
//	}
//	else
//	{
//		printf("��ƨ��");
//	}
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 3;
//	if (a == 1)
//		if (b == 3)
//			printf("ok");
//	else
//		printf("no");         //else�����������δ��elseƥ���ifƥ��
//	return 0;
//}

//
//
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	while (1)
//	{
//		scanf_s("%d", &a);
//		switch (a)              //switchѡ��ṹ
//		{
//		case 1:
//			printf("day1\n");
//			break;
//		case 2:
//			printf("day2\n");
//			break;
//		default:
//			printf("ɶҲ����");
//		}
//	}
//	return 0;
//}



//
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		i++;
//		if (i == 5)
//			continue;           //��������ѭ����continue֮�����䲻ִ��
//		printf("������%d\n", i);
//	}
//	return 0;
//}


//
//#include<stdio.h>
//int main()
//{
//	int a = getchar();          //��������ֵ
//	putchar(a);                  //��ӡ�������ֵ
//	return 0;
//}



//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	char a = 'v';
//	char i = 'm';
//	char pass[] = { 0 };
//	again:
//	printf("����������\n");
//	scanf("%s", pass);
//	printf("��ȷ��(y/n)\n");
//	while ((i=getchar())!='\n')   //ȡ�߰��س����µĶ���
//	{
//		;
//	}
//	a = getchar();
//	if (a == 'y')
//	{
//		printf("�ɹ�\n");
//	}
//	else
//	{
//		printf("ʧ��\n");
//		goto again;
//	}
//	return 0;
//}




//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	while((a = getchar()) != EOF)     //�������Ϊn,getchar()�õ�����a=��n'
//	{
//		if (a < '0' || a>'9')
//			continue;
//		putchar(a);
//	}
//	return 0;
//}




//
//#include<stdio.h>
//int main()
//{
//	for (;;)                  //��ѭ��
//	{
//		printf("ok");
//	}
//	return 0;
//}







//#include<stdio.h>
//int main()
//{
//	int x = 0;
//	int y = 0;
//	for (x, y; x < 2 && y < 5; x++, y++)     //˫�ж�
//	{
//		printf("ok\n");
//	}
//	return 0;
//}




//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int a = 0;
//	for (a, i; a = 0; a++, i++)    //�жϱ丳ֵ��ʹ�ж�һֱΪ�ٽ���ȥ
//	{
//		printf("ok");
//	}
//	return 0;
//}


//
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int a = 0;
//	for (a, i; a = 1; a++, i++)       //�жϱ丳ֵ��ʹ�ж�һֱΪ��һֱִ��
//	{
//		printf("ok");
//	}
//	return 0;
//}


//
//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 0;
//	int i = 0;
//	for (i = 1; i < 4; i++)
//	{
//		a = a * i;
//		b = b + a;               //1��3�׳˷ֱ�׳˵ĺ�
//	}
//	printf("%d\n", b);
//	return 0;
//}

//
//
//#include<stdio.h>
//int main()
//{
//	int a[] = { 1,2,3,4,5,6,7,8,9,12,14 };
//	int k = 10;
//	int b = sizeof(a) / sizeof(a[0]);
//	int left = 0;
//	int right = b - 1;
//	while (left<=right)
//	{
//		int c = (left + right) / 2;            //���ַ�����
//		if (a[c] < k)                 
//		{
//			left = c + 1;
//		}
//		else if (a[c] > k)
//		{
//			right = c - 1;
//		}
//		else
//		{
//			printf("�ҵ����±�Ϊ%d\n", c);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("û�������\n");
//	}
//	return 0;
//}



//
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<windows.h>
//int main()
//{
//	char a[] = "welcome to lol";
//	char b[] = "**************";
//	int c = strlen(a);
//	int left = 0;
//	int right = c - 1;
//	while (left<=right)
//	{
//		b[left] = a[left];
//		b[right] = a[right];
//		printf("%s\n", b);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s\n", a);
//	return 0;
//}

//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char a[20] = {0};
//	int i = 1;
//	printf("����������\n");
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%s", a);                          //scanf��%Sǰ���ܼӶ���,���ܽ�\n
//		if (strcmp(a, "123456") == 0)
//		{
//			printf("������ȷ\n");
//			break;
//		}
//	}
//	if (i == 3)
//	{
//		printf("�����������δ���\n");
//	}
//	return 0;
//}


