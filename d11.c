
//
//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//    int a = 0, b = 0, c = 0, d = 0, e = 0;
//    while (scanf("%d", &a) != EOF)
//    {
//        for (b = 1; b <= a; b++)
//        {
//
//            for (c = b; c < a; c++)
//            {
//                printf(" ");
//            }
//            d = b;
//            e = b;
//            while (d)
//            {
//                printf("* ");
//                d--;
//            }
//            for (c = e + 1; c < a; c++)           //½ð×ÖËþ
//            {
//                printf(" ");
//            }
//            printf("\n");
//        }
//    }
//}
//
//
//
//



//
//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//    int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;
//    while (scanf("%d", &a) != EOF)
//    {
//        for (b = 0; b < a; b++)
//        {
//            d = b;
//            e = b;
//            f = b;
//            while (d)
//            {
//                printf(" ");
//                d--;
//            }
//            while (a - e)
//            {
//                printf("* ");
//                e++;
//            }
//            while (f - 1 > 0)                          //µ¹Èý½Ç
//            {
//                printf(" ");
//                f--;
//            }
//            printf("\n");
//        }
//    }
//}
//






//
//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//    int a, i = 0, b = 0, c = 0, d = 0, e = 0;
//    while (scanf("%d", &a) != EOF)
//    {
//        for (i = 1; i <= a + 1; i++)
//        {
//            for (b = i; b < a + 1; b++)
//            {
//                printf(" ");
//            }
//            c = i;
//            d = i;
//            while (c)
//            {
//                printf("* ");
//                c--;
//            }
//            while (a - d>0)
//            {
//                printf(" ");
//                d++;
//            }
//            printf("\n");
//        }
//        for (i = 1; i <= a; i++)                     //ÁâÐÎ
//        {
//            c = i;
//            d = i;
//            e = i;
//            while (c)
//            {
//                printf(" ");
//                c--;
//            }
//            while (a - d + 1)
//            {
//                printf("* ");
//                d++;
//            }
//            while (e - 1 > 0)
//            {
//                printf(" ");
//                e--;
//            }
//            printf("\n");
//        }
//    }
//}
