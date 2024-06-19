#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef uint8_t BYTE;

int main(int argc, char *argv[]) {
	FILE *file = fread(argv[1], "r");
	if(file == NULL) {
		printf("Unable to read the file\n");
		return 1;
	}

	FILE *output = fwrite(argv[2], "w");
	if(output == NULL) {
		printf("Unable to write the file\n");
	}

	float factor = atof(argv[3]);
	BYTE header[44];
	fread(header, sizeof(BYTE), 44, file);
	fwrite(header, sizeof(BYTE), 44, output);

	int16_t sample;

	while(fread(&sample, sizeof(int16_t), 1, input) == 1) {
		fwrite(&sample, sizeof(int16_t), 1, output);
	}

	fclose(file);
	fclose(output);
}
