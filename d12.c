

//
//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//    int a = 0, i = 0, b = 0, c = 0, d = 0;
//    while (scanf("%d", &a) != EOF)
//    {
//        for (i = 0; i <= a; i++)
//        {
//            for (b = i; b <= a; b++)
//            {
//                printf("* ");
//            }
//            c = i;
//            while (c > 0)
//            {
//                printf("  ");
//                c--;
//            }
//            printf("\n");
//        }
//        for (i = 2; i < a + 2; i++)                  //ÐÇºÅk
//        {
//            c = i;
//            d = i;
//            while (c)
//            {
//                printf("* ");
//                c--;
//            }
//            while (a + 1 - d)
//            {
//                printf("  ");
//                d++;
//            }
//            printf("\n");
//        }
//    }
//}
//





//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//    int a = 0, b = 0, c = 0;
//    while (scanf("%d", &a) != EOF)
//    {
//        for (b = 1; b <= a + 1; b++)
//        {
//            for (c = 0; c < 2 * (a + 1 - b); c++)
//            {
//                printf(" ");
//            }
//            c = b;
//            while (c)
//            {
//                printf("*");
//                c--;
//            }
//            printf("\n");
//        }
//        for (b = 1; b <= a; b++)
//        {
//            for (c = 0; c < 2 * b; c++)               //¼ýÍ·
//            {
//                printf(" ");
//            }
//            c = b;
//            while (a + 1 - c > 0)
//            {
//                printf("*");
//                c++;
//            }
//            printf("\n");
//        }
//    }
//}






//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//    int a = 0, b = 0, c = 0, d = 0;
//    while (scanf("%d", &a) != EOF)
//    {
//        for (b = 0; b < a; b++)
//        {
//            c = b;
//            d = b;
//            while (c)
//            {
//                printf(" ");
//                c--;
//            }
//            printf("*");
//            while (a - d - 1)                //Ð±Ïß
//            {
//                printf(" ");
//                d++;
//            }
//            printf("\n");
//        }
//    }
//}







