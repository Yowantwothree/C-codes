#include <stdio.h>
//Program that sorts an array of 10 numbers

int main(void) {
    char set[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int temp;
    
    //print initial array
    printf("Initial Array: ");
    for(int i = 0; i < 10; i++) printf("%d ", set[i]);
    printf("\n");
    
    //sorter
    for(int i = 0; i < 9; i++)          //Each pass moves the largest number to the end
        for(int j = 0; j < 9 - i; j++)  //Compare adjacent numbers
            if (set[j] > set[j + 1]) {  //Swap their order
                temp = set[j];
                set[j] = set[j + 1];
                set[j + 1] = temp;      
            }
    
    //print the result
    printf("Sorted Array: ");
    for(int i = 0; i < 10; i++) printf("%d ", set[i]);

    return 0;
}