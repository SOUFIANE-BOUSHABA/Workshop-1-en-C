#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    int gap, i, j, temp;
    
     for (gap = n / 2; gap > 0; gap = gap / 2) {
        for (i = gap; i < n; i++) {
	            temp = arr[i];
	            j = i;
		            while (j >= gap && arr[j - gap] > temp) {
		                arr[j] = arr[j - gap];
		                j =j-gap;
		            }
	            arr[j] = temp;
        }
    }

    printf("\nSorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

