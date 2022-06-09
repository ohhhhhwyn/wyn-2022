#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d\n", a);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int n = 0, m = 0;
//    scanf("%d %d", &n, &m);
//    int count = 0;
//    for (int i = 0; i < 32; i++) {
//        if (((n >> i) & 1) != ((m >> i) & 1)) {
//            count++;
//        }
//    }
//    printf("%d\n", count);
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int n = 0, m = 0;
//    scanf("%d %d", &n, &m);
//    int tmp = n ^ m;
//    int count = 0;
//    while (tmp) {
//        if ((tmp % 2) == 1) {
//            count++;
//        }
//        tmp >>= 1;
//    }
//    printf("%d\n", count);
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int n = 0, m = 0;
//    scanf("%d %d", &n, &m);
//    int count = 0;
//    for (int i = 0; i < 32; i++) {
//        if (((n >> i) & 1) != ((m >> i) & 1)) {
//            count++;
//        }
//    }
//    printf("%d\n", count);
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int num = 0;
//    scanf("%d", &num);
//    printf("偶数位：");
//    for (int i = 31; i >= 0; i -= 2) {
//        printf("%d ", ((num >> i) & 1));
//    }
//    printf("\n");
//    printf("奇数位：");
//    for (int i = 30; i >= 0; i -= 2) {
//        printf("%d ", ((num >> i) & 1));
//    }
//    return 0;
//}
//#include <stdio.h>
//int NumberOf1(int n) {
//    // write code here
//    int count = 0;
//    /*for (int i = 0; i < 32; i++) {
//        if (((n >> i) & 1) == 1) {
//            count++;
//        }
//    }*/
//    while (n) {
//        n &= (n - 1);
//        count++;
//    }
//    return count;
//}
//int main()
//{
//    int num = 0;
//    scanf("%d", &num);
//    printf("%d\n", NumberOf1(num));
//	return 0;
//}
#include <stdio.h>
int main()
{
	int n = 0, m = 0;
	scanf("%d %d", &n, &m);
	n = n ^ m;
	m = n ^ m;
	n = n ^ m;
	printf("%d %d\n", n, m);
	return 0;
}