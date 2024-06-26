# include <stdio.h>  

  
int linearSearch(int arr[], int size, int target) {  
    for (int i = 0; i < size; i++) {  
        if (arr[i] == target) {  
            return i; // Return the index of the element  
        }  
    }  
    return -1; // If the target is not found, return -1  
}  
  
int main() {  
    int myArray[] = {4, 7, 2, 1, 9, 5};  
    int targetValue = 9;  
    int size = sizeof(myArray) / sizeof(myArray[0]);  
  
    int result = linearSearch(myArray, size, targetValue);  
    if (result != -1) {  
        printf("The target value %d is found at index %d.\n", targetValue, result);  
    } else {  
        printf("The target value is not present in the array.\n");  
    }  
  
    return 0;  
}