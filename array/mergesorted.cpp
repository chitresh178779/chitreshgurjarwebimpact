#include <iostream>
using namespace std;

void merge(int nums1[], int m, int nums2[], int n, int merged[]) {
    int i = 0, j = 0, k = 0;

    while (i < m && j < n) {
        if (nums1[i] < nums2[j]) {
            merged[k++] = nums1[i++];
        } else {
            merged[k++] = nums2[j++];
        }
    }

    while (i < m) {
        merged[k++] = nums1[i++];
    }

    while (j < n) {
        merged[k++] = nums2[j++];
    }
}

int main() {
    int nums1[] = {1, 3, 5};
    int nums2[] = {2, 4, 6};
    int m = 3, n = 3;
    int merged[m + n];

    merge(nums1, m, nums2, n, merged);

    for (int i = 0; i < m + n; i++) {
        cout << merged[i] << " ";
    }
    return 0;
}
