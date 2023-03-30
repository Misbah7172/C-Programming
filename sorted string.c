#include <stdio.h>
#include <string.h>

int main ()o
{
	char s[100];
  printf("\n\t Enter the string : ");
	scanf("%s",s);
	char temp;
	int i, j;
	int n = strlen(s);
	for (i = 0; i < n-1; i++) {
		for (j = i+1; j < n; j++) {
			if (s[i] > s[j]) {
					temp = s[i];
					s[i] = s[j];
					s[j] = temp;
			}
		}
	}

	printf("The sorted string is : %s", s);
	return 0;
}
