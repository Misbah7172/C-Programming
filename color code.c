#include <stdio.h>
#include <string.h>

int main() {
    char color_name[20];
    printf("Enter a color name: ");
    scanf("%s", color_name);

    if (strcmp(color_name, "red") == 0) {
        printf("Color code: #ff0000\n");
    } else if (strcmp(color_name, "green") == 0) {
        printf("Color code: #00ff00\n");
    } else if (strcmp(color_name, "blue") == 0) {
        printf("Color code: #0000ff\n");
    } else if (strcmp(color_name, "yellow") == 0) {
        printf("Color code: #ffff00\n");
    } else if (strcmp(color_name, "purple") == 0) {
        printf("Color code: #800080\n");
    } else {
        printf("Unknown color\n");
    }

    return 0;
}
