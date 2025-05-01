#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void* myrealloc (void* ptr, size_t new_size) {
		
    void* new_ptr = (void*)malloc(new_size);
    if(ptr){
        return memcpy(new_ptr, ptr, new_size);
    }
    return ptr;
}
int main() {
   
    int num = 0;
    printf("Enter num: ");
    scanf("%d", &num);
    
    int* arr = (int*)malloc(num * sizeof(int));
    printf("Enter the elements of the array: ");
    for(int i = 0; i < num; ++i){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < num; ++i) {
        printf("%d\n", arr[i]);
    }
    int num1 = 0;
    printf("Enter new num: ");
    scanf("%d", &num1);
    
    myrealloc(arr, num1 * sizeof(int));
    
     printf("Enter additional elements: ");
    
    for(int i = num; i < num1; ++i){
        scanf("%d", &arr[i]);    
    }

     for(int i = 0; i < num1; ++i) {
        printf("%d\n", arr[i]);
     }  
    free(arr);
    return 0;
}
