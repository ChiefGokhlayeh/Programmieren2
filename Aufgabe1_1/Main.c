#include <stdio.h>

int main(void) {
	char outputType = '\0';
	int number = 0;

	printf("Wollen Sie eine (O)ktal-, eine He(x)adezimal- oder eine (D)ezimal-Zahl eingeben: ");
	scanf_s("%c", &outputType);
	getchar();

	switch (outputType) {
		case 'o':
		case 'O':
			printf("Oktal-Zahl eingeben: ");
			scanf_s("%o", &number);
			getchar();
			break;
		case 'x':
		case 'X':
			printf("Hexadezimal-Zahl eingeben: ");
			scanf_s("%x", &number);
			getchar();
			break;
		case 'd':
		case 'D':
			printf("Dezimal-Zahl eingeben: ");
			scanf_s("%d", &number);
			getchar();
			break;
		default:
			fprintf(stderr, "Unknown output-type: '%c'!", outputType);
			getchar();
			return -1;
	}
	printf("Der eingegebene Wert in dezimalschreibweise lautet: %d\n", number);

	getchar();
}
