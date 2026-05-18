//this is a new file in first commit
#include <stdio.h>
#include <string.h>

void printString(char str[], int size) {
    for (int i = 0; i < size; i++)
    {
        printf("%c", str[i]);
    }

    printf("\n");
}

int main() {
    int x, y, strSize, result;
    char eqn[50];

    printf("What is your equation?: ");
    scanf("%s", &eqn);

    strSize = strlen(eqn);
    printf("%d\n", strSize);

    printString(eqn, strSize);

}