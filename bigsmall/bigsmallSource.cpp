#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define _CRT_SECURE_NO_WARNINGS
void main() {
	int a, i;
	char str[100];
	printf("Input text : ");
	gets_s(str);

	a = strlen(str);
	for (i = 0; i < a; i++)
		str[i] = toupper(str[i]);
	printf("Uppercase : %s\n", str);
	for (i = 0; i < a; i++)
		str[i] = tolower(str[i]);
	printf("Lowercase : %s\n", str);

	int num;
	printf("Input fav num : ");
	scanf_s("%d", &num);
	if (num == 5 || num == 10) {
		printf("Fav number same me.", num);
	}
	else printf("%d is your fav num", num);
}