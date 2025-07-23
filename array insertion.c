/*
a c language code to show insertion of an array 
NAME frenzy gatheru 
REG NO  BSE-05-0163/2024
*/
#include <stdio.h>

int main() {
    int scores[6] = {0};  // Increased size to 6 to accommodate an extra element
    int i, index, value, size = 5;

    // Fill initial array
    for(i = 0; i < size; i++) {
        scores[i] = i + 2;
    }

    // Print initial array
    printf("Initial Array:\n");
    for(i = 0; i < size; i++) {
        printf("scores[%d] = %d\n", i, scores[i]);
    }

    // Input index and value
    printf("\nEnter the index (0-%d) where you want to insert a new value: ", size);
    scanf("%d", &index);

    if(index < 0 || index > size) {
        printf("Invalid index! Must be between 0 and %d.\n", size);
        return 1;
    }

    printf("Enter the value to insert at index %d: ", index);
    scanf("%d", &value);

   
    for(i = size; i > index; i--) {
        scores[i] = scores[i - 1];
    }

    // Insert new value
    scores[index] = value;

    size++;  

    // Print updated array
    printf("\nArray After Insertion:\n");
    for(i = 0; i < size; i++) {
        printf("scores[%d] = %d\n", i, scores[i]);
    }

    return 0;
}
