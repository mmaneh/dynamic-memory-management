#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    int num = 0;
    printf("Enter num: ");
    scanf("%d", &num);
    
    float* arr = (float*)calloc(num,sizeof(float));
    printf("Enter the elements of the array\n: ");
    for(int i = 0; i < num; ++i){
        scanf("%f", &arr[i]);
    }
    for(int i = 0; i < num; ++i) {
        printf("%f\n", arr[i]);
    }

    free(arr); 
    return 0;
}
