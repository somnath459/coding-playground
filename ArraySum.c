#include <stdio.h>

void arraySum(int arr[], int i, int n, int sum) {
    if (i == n) {
        printf("Sum of every element in array: %d\n", sum);
        return;
    }
    sum = sum + arr[i];           
    arraySum(arr, i + 1, n, sum);
}

int main() {
    int sum = 0;
    int n;

    printf("How many elements want to enter: ");
    scanf("%d", &n);

    int arr[n];   

    for (int i = 0; i < n; i++) {
        printf("Element [%d]: ", i + 1);
        scanf("%d", &arr[i]);
    }

    arraySum(arr, 0, n, sum);

    return 0;
}