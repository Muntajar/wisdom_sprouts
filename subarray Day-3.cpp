#include <iostream>

void findSubarray(int arr[], int n, int sum) {
    int curr_sum = arr[0], start = 0;

    for (int i = 1; i <= n; i++) {
        while (curr_sum > sum && start < i - 1) {
            curr_sum -= arr[start];
            start++;
        }

        if (curr_sum == sum) {
            std::cout << "Subarray found between index " << start << " and " << i - 1 << " with sum " << sum << ": [";
            for (int j = start; j < i - 1; j++) {
                std::cout << arr[j] << ", ";
            }
            std::cout << arr[i - 1] << "]\n";
            return;
        }

        if (i < n) {
            curr_sum += arr[i];
        }
    }

    std::cout << "No subarray found with sum " << sum << std::endl;
}

int main() {
    int arr1[] = {1, 4, 7, 3, 9, 8};
    int sum1 = 11;
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    findSubarray(arr1, n1, sum1);

    int arr2[] = {3, 2, 1, 5, 6};
    int sum2 = 7;
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    findSubarray(arr2, n2, sum2);
    
    int arr3[] = {2, 4, 6, 8};
    int sum3 = 14;
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    findSubarray(arr3, n3, sum3);
    
    int arr4[] = {1, 2, 3, 4, 5};
    int sum4 = 7;
    int n4 = sizeof(arr4) / sizeof(arr4[0]);
    findSubarray(arr4, n4, sum4);
    
    int arr5[] = {10, 5, 2, 6, 8};
    int sum5 = 15;
    int n5 = sizeof(arr5) / sizeof(arr5[0]);
    findSubarray(arr5, n5, sum5);
    
    int arr6[] = {1, 2, 3, 4, 5};
    int sum6 = 15;
    int n6 = sizeof(arr6) / sizeof(arr6[0]);
    findSubarray(arr6, n6, sum6);
    
    int arr7[] = {5, 10, 20, 30, 40};
    int sum7 = 100;
    int n7 = sizeof(arr7) / sizeof(arr7[0]);
    findSubarray(arr7, n7, sum7);
    
    int arr8[] = {1, 2, 3, 4, 5};
    int sum8 = 6;
    int n8 = sizeof(arr8) / sizeof(arr8[0]);
    findSubarray(arr8, n8, sum8);
    
    int arr9[] = {8, 7, 15, 6, 10};
    int sum9 = 17;
    int n9 = sizeof(arr9) / sizeof(arr9[0]);
    findSubarray(arr9, n9, sum9);
    
    int arr10[] = {1, 1, 1, 1, 1};
    int sum10 = 3;
    int n10 = sizeof(arr10) / sizeof(arr10[0]);
    findSubarray(arr10, n10, sum10);

    return 0;
}

