#define _CRT_SECURE_NO_WARNING
#include<stdio.h>
int px(int num) {
	int a = 0;
	for (int i = 1; i < num; i++) {
		if (num % i == 0) {
			a += i;
		}
	}
	return a;
}
int main() {
	for (int i = 1; i <= 10000; i++) {
		if (px(i) == i) {
			printf("%d", i);
		}
	}
	return 0;
}