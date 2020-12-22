
//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//    float t = 0;
//    while (scanf("%f", &t) != EOF)
//    {
//        if (t > 0)                         //单位阶跃
//        {
//            printf("1\n");
//        }
//        else if (t == 0)
//        {
//            printf("0.5\n");
//        }
//        else
//        {
//            printf("0\n");
//        }
//    }
//    return 0;
//}


//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//    char capital = 0;
//    while (scanf("%c", &capital) != EOF)
//    {
//        while (getchar() != '\n')
//        {
//            ;
//        }
//        if (capital == 65 || capital == 97 || capital == 69 || capital == 101 || capital == 73 || capital == 105 || capital == 79 || capital == 111 || capital == 85 || capital == 117)
//        {
//            printf("Vowel\n");
//        }
//        else
//        {
//            printf("Consonant\n");
//        }
//    }
//    return 0;
//}



//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    while (scanf("%d", &a) != EOF)
//    {
//        if (a % 2 == 0)
//        {
//            printf("Even\n");
//        }
//        else
//        {
//            printf("Odd\n");
//        }
//    }
//    return 0;
//}



//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    while (scanf("%d", &a) != EOF)
//    {
//        if (a >= 60)
//        {
//            printf("Pass\n");
//        }
//        else
//        {
//            printf("Fail\n");
//        }
//    }
//}



//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    while (scanf("%d", &a) != EOF)
//    {
//        if (a >= 90 && a <= 100)
//        {
//            printf("Perfect\n");
//        }
//    }
//}


//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    while (scanf("%d", &a) != EOF)
//    {
//        if (a >= 140)
//        {
//            printf("Genius\n");
//        }
//    }
//}
//


//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//    char a = 0;
//    while (scanf("%c", &a) != EOF)
//    {
//        while (getchar() != '\n')
//        {
//            ;
//        }
//        if (a >= 65 && a <= 90)
//        {
//            a += 32;
//            printf("%c\n", a);
//        }
//        else if (a >= 97 || a <= 122)             //大小写字母转换
//        {
//            a -= 32;
//            printf("%c\n", a);
//        }
//    }
//}
//



//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//    char a = 0;
//    while (scanf("%c", &a) != EOF)
//    {
//        while (getchar() != '\n')
//        {
//            ;
//        }
//        if ((a >= 65 && a <= 90) || (a >= 97 && a <= 122))
//        {
//            printf("%c is an alphabet.\n", a);
//        }
//        else
//        {
//            printf("%c is not an alphabet.\n", a);
//        }
//    }
//}

//
//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//    int a, b, c;
//    int max = 0;
//    while (scanf("%d %d %d", &a, &b, &c) != EOF)
//    {
//        max = a;
//        if (a < b)
//        {
//            max = b;
//        }
//        if (b < c)
//        {
//            max = c;
//        }
//        printf("%d\n", max);
//    }
//}
//
//
//
////
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char arr[] = "0";
//    int a = 0, countA = 0, countB = 0;
//    scanf("%s", &arr);
//    for (a = 0; a <(strlen(arr)-1); a++)
//    {
//        if (arr[a] == 'A')
//        {
//            countA++;
//        }
//        else if (arr[a] == 'B')
//        {
//            countB++;
//        }
//    }
//    if (countA > countB)
//    {
//        printf("A\n");
//    }
//    else if (countA < countB)
//    {
//        printf("B\n");
//    }
//    else
//    {
//        printf("E\n");
//    }
//}

