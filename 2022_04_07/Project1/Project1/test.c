#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main() {
//	int n;
//	scanf("%d", &n);
//	int arr[50] = { 0 };
//	int i;
//	for (i = 0; i < n; i++)
//		scanf("%d", &arr[i]);
//	int num;
//	scanf("%d", &num);
//	int count = 0;
//	for (i = 0; i < n; i++) {
//		if (num == arr[n - 1]) {
//			n--;
//			i = 0;
//		}
//		else
//			break;
//	}
//	for (i = 0; i < n; i++) {
//		if (num == arr[i]) {
//			int j;
//			for (j = i; j < n - 1; j++)
//				arr[j] = arr[j + 1];
//			count++;
//			i = -1;
//		}
//	}
//	for (i = 0; i < n-count; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int n = 5;
//	int arr[10] = { 1,1,2,3,4 };
//	int i;
//	int num = 1;
//	int count = 0;
//	//for (i = 0; i < n; i++) {
//	//	if (num == arr[n - 1]) {
//	//		n--;
//	//		i = -1;
//	//	}
//	//	else
//	//		break;
//	//}
//	for (i = 0; i < n; i++) {
//		if (num == arr[i]) {
//			int j;
//			for (j = i; j < n - 1; j++)
//				arr[j] = arr[j + 1];
//			count++;
//			i = -1;
//		}
//	}
//	for (i = 0; i < n - count; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int n = 10;
//	int arr1[10] = { 1,1,1,2,3,4,1,1,5,1 };
//	int arr2[10] = { 0 };
//	int num = 1;
//	int i, j;
//	for (i = 0, j = 0; i < 10; i++) {
//		if (num != arr1[i]) {
//			arr2[j] = arr1[i];
//			j++;
//		}
//	}
//	for (i = 0; i < j; i++) {
//		printf("%d", arr2[i]);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int n;
//	scanf("%d", &n);
//	int arr1[1000] = { 0 };
//	int arr2[1000] = { 0 };
//	int i, j, k;
//	for (i = 0; i < n; i++)
//		scanf("%d", &arr1[i]);
//	for (i = 0, j = 0; i < n; i++) {
//		int count = 0;
//		for (k = 0; k < n; k++) {
//			if (arr2[k] != arr1[i])
//				count++;
//		}
//		if (count == n) {
//			arr2[j] = arr1[i];
//			j++;
//		}
//	}
//	for (i = 0; i < j; i++)
//		printf("%d ", arr2[i]);
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int n = 5;
//	int arr1[10] = { 10 ,12 ,93 ,12 ,75 };
//	int arr2[10] = { 0 };
//	int i, j, k;
//	for (i = 0, j = 0; i < n; i++) {
//		int count = 0;
//		for (k = 0; k < n; k++) {
//			if (arr2[k] != arr1[i])
//				count++;
//		}
//		if (count == n) {
//			arr2[j] = arr1[i];
//			j++;
//		}
//	}
//	for (i = 0; i < j; i++)
//		printf("%d ", arr2[i]);
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int n;
//	scanf("%d",&n);
//	int arr[100] = { 0 };
//	int i;
//	for (i = 0; i < n; i++) 
//		scanf("%d", &arr[i]);
//	int num;
//	scanf("%d", &num);
//	int count = 0;
//	for (i = 0; i < n; i++) {
//		if (num == arr[i])
//			count++;
//	}
//	printf("%d",count);
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int n;
//	scanf("%d", &n);
//	int arr[100] = { 0 };
//	int i, j;
//	for (i = 0, j = 0; i < n - 1; i++, j++) {
//		arr[j] = i + 2;
//	}
//	int k;
//	int count = 0;
//	for (k = 2; k < n; k++) {
//		for (i = k; i < j; i++) {
//			if (arr[i] % k == 0) {
//				arr[i] = 0;
//				count++;
//			}
//		}
//	}
//	for (i = 0; i < n - 1; i++) {
//		if (arr[i] != 0)
//			printf("%d ", arr[i]);
//	}
//	printf("\n%d", count);
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int n;
//	scanf("%d", &n);
//	int arr[100] = { 0 };
//	int i, j;
//	for (i = 0, j = 0; i < n - 1; i++, j++) {
//		arr[j] = i + 2;
//	}
//	int count = 0;
//	for (i = 2; i < j; i++) {
//		if (arr[i] % 2 == 0 || arr[i] % 3 == 0) {
//			arr[i] = 0;
//			count++;
//		}
//	}
//	for (i = 0; i < n - 1; i++) {
//		if (arr[i] != 0)
//			printf("%d ", arr[i]);
//	}
//	printf("\n%d", count);
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int n=15;
//	int arr[20] = { 0 };
//	int i, j;
//	for (i = 0, j = 0; i < n - 1; i++, j++) {
//		arr[j] = i + 2;
//	}
//	int k;
//	int count = 0;
//	for (k = 2; k < n; k++) {
//		for (i = k-1; i < j; i++) {
//			if (arr[i] % k == 0&&arr[i]!=0) {
//				arr[i] = 0;
//				count++;
//			}
//		}
//	}
//	for (i = 0; i < n - 1; i++) {
//		if (arr[i] != 0)
//			printf("%d ", arr[i]);
//	}
//	printf("\n%d", count);
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	float arr[5][5] = { 0 };
//	int i, j;
//	for (i = 0; i < 5; i++) {
//		for (j = 0; j < 5; j++)
//			scanf("%f", &arr[i][j]);
//	}
//	for (i = 0; i < 5; i++) {
//		float sum = 0;
//		for (j = 0; j < 5; j++) {
//			sum += arr[i][j];
//			printf("%.1f ", arr[i][j]);
//		}
//		printf("%.1f\n", sum);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int n, m, a, b, i, j;
//	int arr[5][5] = { 0 };
//	scanf("%d %d", &n, &m);
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < m; j++) 
//			scanf("%d", arr[i][j]);
//	}
//	scanf("%d %d", &i, &j);
//	printf("%d", arr[i-1][j-1]);
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int m, n, i, j;
//	int row,col;
//	int max = 0;
//	int arr[10][10] = { 0 };
//	scanf("%d %d", &m, &n);
//	for (i = 0; i < m; i++) {
//		for (j = 0; j < n; j++) {
//			scanf("%d", &arr[i][j]);
//			if (max < arr[i][j]) {
//				max = arr[i][j];
//				row = i+1;
//				col = j+1;
//			}
//		}
//	}
//	printf("%d %d", row, col);
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int m, n, i, j;
//	int arr1[9][9] = { 0 };
//	int arr2[9][9] = { 0 };
//	scanf("%d %d", &m, &n);
//	for (i = 0; i < m; i++)
//		for (j = 0; j < n; j++)
//			scanf("%d", &arr1[i][j]);
//	for (i = 0; i < m; i++)
//		for (j = 0; j < n; j++)
//			scanf("%d", &arr2[i][j]);
//	for (i = 0; i < m; i++)
//		for (j = 0; j < n; j++) {
//			if (arr1[i][j] != arr2[i][j]) {
//				break;
//			}
//		}
//	if (i == m && j == n)
//		printf("Yes\n");
//	else
//		printf("No\n");
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int m,n,i,j,sum=0;
//	int arr[10][10] = { 0 };
//	scanf("%d %d", &m, &n);
//	for (i = 0; i < m; i++)
//		for (j = 0; j < n; j++) {
//			scanf("%d", &arr[i][j]);
//			if (arr[i][j] > 0)
//				sum += arr[i][j];
//		}
//	printf("%d", sum);
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int n;
//	scanf("%d", &n);
//	int arr[19][19] = { 0 };
//	int count = 0;
//	int start = 0;
//	int end = n - 1;
//	int i, j;
//	while (count < n * n) {
//		for (i = start; i <= end; i++)
//			arr[start][i] = ++count;
//		for (i = start+1; i <= end; i++)
//			arr[i][end] = ++count;
//		for (i = end-1; i >= start; i--)
//			arr[end][i] = ++count;
//		for (i = end-1; i > start; i--)
//			arr[i][start] = ++count;
//		start++;
//		end--;
//	}
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < n; j++)
//			printf("%d ", arr[i][j]);
//		printf("\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int arr[1000][1000] = { 1 };
//int main() {
//	int n ;
//	scanf("%d", &n);
//	int count = 1, pos = 1;
//	int i = 0, j = 0;
//	while (count <= n * n) {
//		if (i == 0 && j < n-1 && pos == 1) {
//			arr[i][++j] = ++count;
//			pos = -1;
//		}
//		else if (j == 0 && i < n-1 && pos == -1) {
//			arr[++i][j] = ++count;
//			pos = 1;
//		}
//		else if (i == n - 1 && pos == -1) {
//			arr[i][++j] = ++count;
//			pos = 1;
//		}
//		else if (j == n - 1 && pos == 1) {
//			arr[++i][j] = ++count;
//			pos = -1;
//		}
//		else if (pos == 1)
//			arr[--i][++j] = ++count;
//		else if (pos == -1)
//			arr[++i][--j] = ++count;
//	}
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < n; j++)
//			printf("%d ", arr[i][j]);
//		printf("\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int m, n, i, j;
//	int count = 0;
//	int arr1[100][100] = { 0 };
//	int arr2[100][100] = { 0 };
//	scanf("%d %d", &m, &n);
//	for (i = 0; i < m; i++)
//		for (j = 0; j < n; j++)
//			scanf("%d", &arr1[i][j]);
//	for (i = 0; i < m; i++)
//		for (j = 0; j < n; j++) {
//			scanf("%d", &arr2[i][j]);
//			if (arr1[i][j] == arr2[i][j])
//				count++;
//		}
//	printf("%.2f",(float)count/(m*n));
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int n, i, j;
//	int arr[10][10] = { 0 };
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//		for (j = 0; j < n; j++)
//			scanf("%d", &arr[i][j]);
//	for (i = 1; i < n; i++)
//		for (j = 0; j < i; j++) {
//			if (arr[i][j] != 0)
//				break;
//		}
//	if (i == n && j == n - 1)
//		printf("YES");
//	else
//		printf("NO");
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int m, n, i, j, k = 0;
//	int arr[100] = { 0 };
//	scanf("%d %d", &m, &n);
//	for (i = 0; i < m * n; i++)
//		scanf("%d", &arr[i]);
//	for (i = 0; i < m; i++) {
//		for (j = 0; j < n; j++, k++)
//			printf("%d ", arr[k]);
//		printf("\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int m = 2;
//	int n = 3;
//	int i, j, k = 0;
//	int arr[10] = { 1,2,3,4,5,6 };
//	for (i = 0; i < m; i++) {
//		for (j = 0; j < n; j++, k++)
//			printf("%d ", arr[k]);
//		printf("\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int m, n, i, j;
//	int arr[10][10] = { 0 };
//	scanf("%d %d", &m, &n);
//	for (i = 0; i < m; i++)
//		for (j = 0; j < n; j++)
//			scanf("%d", &arr[i][j]);
//	for (j = 0; j < n; j++) {
//		for (i = 0; i < m; i++)
//			printf("%d ", arr[i][j]);
//		printf("\n");
//	}
//	return 0;
//}
#include<stdio.h>
int main() {
	int m, n, i, j, k, p, q;
	char ch;
	int arr[10][10] = { 0 };
	scanf("%d %d", &m, &n);
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			scanf("%d", &arr[i][j]);
	scanf("%d", &k);
	while (k) {
		getchar();
		scanf("%c %d %d", &ch, &p, &q);
		if (ch == 'r') {
			for (j = 0; j < n; j++) {
				int tmp = arr[p - 1][j];
				arr[p - 1][j] = arr[q - 1][j];
				arr[q - 1][j] = tmp;
			}
		}
		if (ch == 'c') {
			for (j = 0; j < n; j++) {
				int tmp = arr[j][p - 1];
				arr[j][p - 1] = arr[j][q - 1];
				arr[j][q - 1] = tmp;
			}
		}
		k--;
	}
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}
	return 0;
}