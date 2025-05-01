#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    int num = 0;
    printf("Enter num: ");
    scanf("%d", &num);
    
    char* arr = (char*)malloc(num * sizeof(char));
    printf("Enter the elements of the array: ");
    for(int i = 0; i < num; ++i){
        scanf(" %c", &arr[i]);
    }
    for(int i = 0; i < num; ++i) {
        printf("%c\n", arr[i]);
    }
    free(arr);
    return 0;
}
