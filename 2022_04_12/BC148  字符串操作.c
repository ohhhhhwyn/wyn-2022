#include<stdio.h>
int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	char s[n];
	for (int i = 0; i < n; i++) {
		scanf(" %c", &s[i]);
	}
	while (m--) {
		int l, r;
		char c1, c2;
		scanf("%d %d %c %c", &l, &r, &c1, &c2);
		for (int i = l-1; i < r; i++) {
			if (s[i] == c1)
				s[i] = c2;
		}
	}
    for(int i=0;i<n;i++)
    printf("%c",s[i]);
	return 0;
}