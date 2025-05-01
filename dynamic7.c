#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    int num = 0;
    printf("Enter row: ");
    scanf("%d", &num);
    
    int num1 = 0;
    printf("Enter column: ");
    scanf("%d", &num1);

    int** matrix = (int**)malloc(num * sizeof(int*));
    for(int i = 0; i < num; ++i){
        matrix[i] = (int*)malloc(num1 * sizeof(int));
    }
    printf("Enter the elements of the array: ");
    for(int i = 0; i < num; ++i){
        for(int j = 0; j < num1; ++j) {
             scanf("%d", &matrix[i][j]);
        }
        
    }
    for(int i = 0; i < num; ++i){
        for(int j = 0; j < num1; ++j) {
             printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    for(int i = 0; i < num; ++i) {
        free(matrix[i]);
    }
    free(matrix);
    return 0;
}
