#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//extern void test_one();
//extern void test_two();
//int main() {
//    test_one();
//    test_two();
//    return 0;
//}



//#define NUM 10
//#include<stdio.h>
//int main() {
//    int arr1[10] = { 0 };
//    int arr2[NUM] = { 0 };
//    return 0;
//}


//#define ADD(x,y) ((x)+(y))
//#include<stdio.h>
//int main() {
//    int sum = 0;
//    sum = ADD(1, 2);
//    printf("%d", sum);
//    return 0;
//}


//#include<stdio.h>
//int main() {
//	int num = 10;
//	printf("%p\n",&num);
//	return 0;
//}

//
//#include<stdio.h>
//int main() {
//    int num = 10;
//    int* p = &num;
//    *p = 20;
//    printf("%d", num);
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));
//	return 0;
//}
//
//#include<stdio.h>
//int main() {
//    printf("\printf(\"Hello world!\\n\");\n");
//    printf("\cout << \"Hello world!\" << endl;");
//    return 0;
//}


//#include<stdio.h>
//int main() {
//	int num;
//	int max = 0;
//	int arr[4] = { 0 };
//	for (int i = 0; i < 4;i++) {
//		scanf("%d", &num);
//		if (max <= num)
//			max = num;
//	}
//	printf("%d", max);
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	double num;
//	scanf("%lf", &num);
//	printf("%.3lf", 4.0 / 3 * 3.1415926 * num * num * num);
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//
//	printf("%.2lf\n", a / (b / 100.0 * b / 100.0));
//	printf("%.2lf\n", a / ((b / 100.0) * (b / 100.0)));
//
//	return 0;
//}



//#include<string.h>
//#include<stdio.h>
//int main() {
//	char arr[100] = { 0 };
//	gets(arr);
//	int len = strlen(arr);
//	int i, j;
//	int maxn = 0, minn = 100;
//	for (i = 0; i < len; i++) {
//		int sum = 0;
//		for (j = 0; j < len; j++)
//			if (arr[i] == arr[j])
//				sum++;
//		if (maxn < sum)
//			maxn = sum;
//		if (minn > sum)
//			minn = sum;
//	}
//	int ret = maxn - minn;
//	if (ret <= 1) {
//		printf("No Answer\n0");
//		return 0;
//	}
//	if (ret == 2) {
//		printf("Lucky Word\n%d", ret);
//		return 0;
//	}
//	int pos = 0;
//	for (i = 2; i < ret; i++)
//		if (ret % i == 0)
//			pos = 1;
//	if (pos == 0)
//		printf("Lucky Word\n%d", ret);
//	else
//		printf("No Answer\n0");
//	return 0;
//}
#include<stdio.h>
int main() {
	char arr[20] = { 0 };
	char new_arr[20] = { 0 };
	gets(arr);
	int len = strlen(arr);
	int i, j, count = 0;
	for (i = 0, j = len - 1; j >= 0; i++) {
		new_arr[i] = arr[j]; i++; j--;
		new_arr[i] = arr[j]; i++; j--;
		new_arr[i] = arr[j]; i++; j--;
		new_arr[i] = ','; count++;
	}
	for (i = len + count - 2; i >=0; i--)
		printf("%c", new_arr[i]);
	return 0;
}


