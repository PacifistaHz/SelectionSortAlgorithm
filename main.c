#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Fonksiyon Prototipleri
void selectionSort(int arr[], int n);
void printArray(int arr[], int size);

int main() {
    int i, N;
    printf("SELECTION SORT ALGORITMASI\n");
    printf("Kac adet sayi uretilecek: ");
    scanf("%d", &N);
    int *arr = (int *)malloc(N * sizeof(int));
    srand(time(0));
    printf("Dizi Elemanlari: ");
    for (i = 0; i < N; i++) {
        arr[i] = rand() % 100;
        printf("%d ", arr[i]);
    }
    selectionSort(arr, N);
    printf("\nSiralanmis Dizi Elemanlari: ");
    printArray(arr, N);
    free(arr);
    return 0;
}

void selectionSort(int arr[], int n) {
    int i, j, min_idx;
    for (i = 0; i < n-1; i++) {
        min_idx = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        // Swap işlemi
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
