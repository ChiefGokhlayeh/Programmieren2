#include <stdio.h>

int main(void) {
	char outputType = '\0';
	int number = 0;
	char string[128];

	printf("Wollen Sie eine (O)ktal-, eine He(x)adezimal- oder eine (D)ezimal-Zahl eingeben: ");
	fgets(string, sizeof(string), stdin);
	sscanf(string, "%c", &outputType);

	switch (outputType) {
		case 'o':
		case 'O':
			printf("Oktal-Zahl eingeben: ");
			fgets(string, sizeof(string), stdin);
			sscanf(string, "%o", &number);
			break;
		case 'x':
		case 'X':
			printf("Hexadezimal-Zahl eingeben: ");
			fgets(string, sizeof(string), stdin);
			sscanf(string, "%x", &number);
			break;
		case 'd':
		case 'D':
			printf("Dezimal-Zahl eingeben: ");
			fgets(string, sizeof(string), stdin);
			sscanf(string, "%d", &number);
			break;
		default:
			fprintf(stderr, "Unknown output-type: '%c'!", outputType);
			return -1;
	}
	printf("Der eingegebene Wert in dezimalschreibweise lautet: %d\n", number);

	getchar();
}
