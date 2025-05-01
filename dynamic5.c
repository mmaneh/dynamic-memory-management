#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void* mycalloc (size_t num, size_t size) {
    size_t size1 = num * size;
    void* ptr = (size_t*)malloc(size1);
    if(ptr) {
        return memset(ptr, 0, size1); 
    }
    return ptr;
}
int main() {
    int num = 0;
    printf("Enter num: ");
    scanf("%d", &num);
    
    int* arr = (int*)calloc(num,sizeof(int));
    printf("Enter the elements of the array: ");
    for(int i = 0; i < num; ++i){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < num; ++i) {
        printf("%d\n", arr[i]);
    }
   
    free(arr);
    return 0;
}
