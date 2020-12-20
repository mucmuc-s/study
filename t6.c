//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int lenth(char* x)
//{
//	int count = 0;
//	while (*x != '\0')
//	{
//		count++;
//		x++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abc";
//	int len = lenth(arr);
//	printf("字符串长度:%d\n", len);              //字符串长度
//	return 0;
//}


//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int lenth(char* x)
//{
//	if (*x!='\0')
//	{
//		return 1 + lenth(x + 1);                      //用函数递归求字符串长度
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char arr[] = "abcd";
//	int len = lenth(arr);
//	printf("字符串长度:%d\n", len);
//	return 0;
//}


//
//
//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int step(int x)
//{
//	if (x<=1)
//	{
//		return 1;
//	}
//	else
//	{
//		return x * step(x - 1);                //递归函数求阶乘
//	}
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int b = step(a);
//	printf("%d\n", b);
//	return 0;
//}



//
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[] = "abcde";
//	int a = 0;
//	for (a = 0; a < strlen(arr); a++)                //字符串正序与逆序输出
//	{
//		printf("%c ", arr[a]);
//	}
//	printf("\n");
//	for (a = strlen(arr)-1; a >= 0; a--)
//	{
//		printf("%c ", arr[a]);
//	}
//	return 0;
//}


//
//
//#include<stdio.h>
//int main()
//{
//	int arr[3][4] = { {1,2,3},{2,5} };
//	int line = 0;
//	int row = 0;
//	for (line = 0; line < 3; line++)
//	{
//		for (row = 0; row < 4; row++)
//		{
//			printf("%d ", arr[line][row]);                //二维数组的创建和打印
//		}
//		printf("\n");
//	}
//	return 0;
//}




//
//#include<stdio.h>
//void bubble(int* arr[],int y)
//{
//	int a = 0;
//	int b = 0;
//	int t = 0;
//;	for (a = 0; a < y - 1; a++)
//	{
//	    int flag = 1;
//		for(b=0;b<y-1-a;b++)
//		{
//			if (arr[b] > arr[b + 1])
//			{
//				t = arr[b];
//				arr[b] = arr[b + 1];                        //冒泡排序
//				arr[b + 1] = t;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,5,3,6,7,4,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	bubble(arr,sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}





//#include<stdio.h>
//int main()
//{ 
//	int arr[] = { 1,3,5,6 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr);
//	printf("%d\n", &arr);                          //地址转成十进制整数
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr+1);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//	return 0;
//}


