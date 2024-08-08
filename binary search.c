#include <stdio.h>

int binarysearch(int a[], int beg, int end, int val) {
    int mid;
    if (end >= beg) {
        mid = (beg + end) / 2;

        if (a[mid] == val) {
            return mid;
        } else if (a[mid] < val) {
            return binarysearch(a, mid + 1, end, val);
        } else {
            return binarysearch(a, beg, mid - 1, val);
        }
    }
    return -1;
}

int main() {
    int a[] = {2, 3, 4, 10, 40};
    int n = sizeof(a) / sizeof(a[0]);
    int val = 10;
    int result = binarysearch(a, 0, n - 1, val);
    if (result != -1) {
        printf("Element is present at index %d\n", result);
    } else {
        printf("Element is not present in array\n");
    }
    return 0;
}