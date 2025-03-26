#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& v, int left, int mid, int right) {
    vector<int> temp(right - left + 1);
    int i = left, j = mid + 1, k = 0;

    // Merge two sorted halves in descending order
    while (i <= mid && j <= right) {
        if (v[i] >= v[j]) 
            temp[k++] = v[i++];
        else 
            temp[k++] = v[j++];
    }

    // Copy remaining elements
    while (i <= mid) temp[k++] = v[i++];
    while (j <= right) temp[k++] = v[j++];

    // Copy sorted elements back to the original array
    for (int p = 0; p < temp.size(); ++p) {
        v[left + p] = temp[p];
    }
}

void mergeSortDesc(vector<int>& v, int left, int right) {
    if (left >= right) return;

    int mid = left + (right - left) / 2;
    mergeSortDesc(v, left, mid);
    mergeSortDesc(v, mid + 1, right);
    merge(v, left, mid, right);
}

int main() {
    vector<int> v = {1, 4, 5, 8, 10, 6, 9, 40, 25, 80};

    mergeSortDesc(v, 0, v.size() - 1);

    for (int num : v) {
        cout << num << " ";
    }
    return 0;
}
