#include <stdio.h>

int prob15() {
    int n;
    scanf("%d", &n);
    int arr[n];
    int freq[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1;
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                if (j < i) {
                    break;
                } else {
                    if (freq[i] == -1) {
                        freq[i] = 1;
                    } else {
                        freq[i]++;
                    }
                }
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        if (freq[i] != -1) {
            printf("The frequency of %d is %d\n", arr[i], freq[i]);
        }
    }
    
    return 0;
}

int prob17() {
    int n;
    scanf("%d", &n);
    
    int arr1[n];
    int arr2[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
        arr2[i] = -1;
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            
            if (arr1[i] == arr1[j]) {
                if (j < i) {
                    break;
                } else {
                    if (arr2[i] == -1) {
                        arr2[i] = 1;
                    } else {
                        arr2[i]++;
                    }
                }
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        if (arr2[i] != -1 && arr2[i]%2 != 0) {
            printf("%d\n", arr1[i]);
        }
    }

    return 0;
}

int prob18BubbleSort() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                
                //swap
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}

int main()
{
    //prob15();
    //prob17();
    //prob18BubbleSort();
     int n, i, j, count;

    printf("Enter the number of elements for your array: ");
    scanf("%d", &n);

    int arr[n], freq[n];

    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1; // mark all as unvisited
    }

    printf("Numbers occurring odd number of times: ");
    for (i = 0; i < n; i++) {
        if (freq[i] == -1) {
            count = 1;
            for (j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    freq[j] = 0; // mark as visited
                }
            }
            freq[i] = count;
            if (count % 2 != 0) {
                printf("%d %d\n", arr[i], freq[i]);
            }
        }
    }

    return 0;
    
}
