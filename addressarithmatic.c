#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr; 
    printf("Initial address of ptr: %p\n", (void*)ptr);
    printf("Value at ptr: %d\n", *ptr); 
    ptr++;
    printf("Address after ptr++: %p\n", (void*)ptr);
    printf("Value at ptr after ptr++: %d\n", *ptr); 
    ptr = arr; 
    printf("Value at *(ptr + 2): %d\n", *(ptr + 2)); 
    int *last_element_ptr = &arr[4]; 
    printf("Value at *(last_element_ptr - 2): %d\n", *(last_element_ptr - 2));
    int *ptr_to_30 = &arr[2];
    int *ptr_to_10 = &arr[0];
    printf("Difference between ptr_to_30 and ptr_to_10: %ld\n", ptr_to_30 - ptr_to_10); 
    return 0;
}