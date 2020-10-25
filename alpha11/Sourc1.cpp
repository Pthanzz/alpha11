#include<stdio.h>
#include<string.h>
int main()
{
	char rubbe[100], aou[30], maiaou[30];
	char* pa;
	scanf_s("%s", &rubbe);
	for (int n = 0; n < strlen(rubbe); n++) {
		if (rubbe[n] >= 'a' && rubbe[n] <= 'z') {
			rubbe[n] -= 32;
			printf("%c", rubbe[n]);}
		else if (rubbe[n] >= 'A' && rubbe[n] <= 'Z'){
			rubbe[n] += 32;
			printf("%c", rubbe[n]);}
	}
	return 0;
}//นับเป็นนวีค11ได้ไหมคะ นะนะพลีสส*^*
