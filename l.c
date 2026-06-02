#include <stdio.h>

int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int data[] = {10, 50, 30, 70, 80};
    int key = 30;
    int size = sizeof(dataa) / sizeof(data[0]);
    
    int result = linearSearch(data, size, key);
    
    if (result != -1)
        printf("Element found at index: %d\n", result);
    else
        printf("Element not found.\n");
        
    return 0;
}