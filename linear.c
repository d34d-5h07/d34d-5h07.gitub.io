#include <stdio.h>

int main() {
    int arr[] = {5, 10, 15, 20, 25, 30};
    int n = 
    int key = 15;
    int found = 0;
    int index = -1; 
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = 1;
            index = i;
            break;
        }
    }
    
    if (found == 1) {
        printf("Element found at index %d\n", index);
    } else {
        printf("Element not found\n");
    }
    
    return 0;
}
