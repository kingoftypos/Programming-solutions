class Solution {  
public:
    int mergeSort(vector<int> &arr, int low, int high) {
        int count = 0;
        if (low < high) {
            int mid = low + (high - low) / 2;

            count += mergeSort(arr, low, mid);
            count += mergeSort(arr, mid + 1, high);
            count += mycount(arr, low, high, mid);

            myMerge(arr, low, mid, high);
        }
        return count;
    }

    void myMerge(vector<int> &arr, int low, int mid, int high) {
        vector<int> temp(high - low + 1);
        int i = low, j = mid + 1, k = 0;

        while (i <= mid && j <= high) {
            if (arr[i] <= arr[j])
                temp[k++] = arr[i++];
            else
                temp[k++] = arr[j++];
        }

        while (i <= mid)
            temp[k++] = arr[i++];
        while (j <= high)
            temp[k++] = arr[j++];

        for (int p = 0; p < k; p++)
            arr[low + p] = temp[p];
    }

    int mycount(vector<int> &a, int low, int high, int mid) {
        int count = 0;
        int right = mid + 1;
        for (int i = low; i <= mid; i++) {
            while (right <= high && a[i] > (long)2 * a[right])
                right++;
            count += right - (mid + 1);
        }
        return count;
    }

    int reversePairs(vector<int>& nums) {
        return mergeSort(nums, 0, nums.size() - 1);
    }

};