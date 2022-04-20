long long count;
void hanoi(int n, char a, char b, char c) {
	if (1 == n) {
		count += 2;
		return;
	}
	hanoi(n - 1, 'a', 'b', 'c');
	count++;
	hanoi(n - 1, 'c', 'b', 'a');
	count++;
	hanoi(n - 1, 'a', 'b', 'c');
}
#include<stdio.h>
int main() {
	int n;
	while(~scanf("%d", &n)){
        count=0;
        hanoi(n, 'a', 'b', 'c');
	    printf("%d\n", count);
    }
	return 0;
}