#include <stdio.h>
void bubbleSortAscending(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
void bubbleSortDescending(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] < arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int choice, n, i;
    int times[100];

    printf("Enter the number of destinations: ");
    scanf("%d", &n);

    printf("Enter time to reach destination:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &times[i]);
    }

    printf("Choose sorting order (1 for Ascending, 2 for Descending): ");
    scanf("%d", &choice);

    if (choice == 1) {
        bubbleSortAscending(times, n);
    } else if (choice == 2) {
        bubbleSortDescending(times, n);
    } else {
        printf("Invalid choice.\n");
        return 1;
    }

    printf("Sorted times:\n");
    for (i = 0; i < n; i++) {
        printf("%d\n", times[i]);
    }

    return 0;
}