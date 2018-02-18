#include <stdio.h>

int main() {
    FILE *fp;

    char fileData;
    char usrData[128];

    fp = fopen("data.txt", "r+");

    if (fp == NULL) {
        puts("Error: unable to open file\n");
        return 0;
    }

    printf("--Printing file contents--\n");
    while(1) {
        fileData = fgetc(fp);
        if (fileData == EOF) {
            break;
        } else {
            printf("%c", fileData);
        }
    }

    printf("\n--End of file contents--\nEnter text to add to file\n");
    gets(usrData);

    fputs("\n", fp);
    fputs(usrData, fp);
    fclose(fp);
    return 0;
}