int binarySearch(int arr[], int arr_size) {
    int start = 0;
    int end = arr_size - 1;
    while (start <= end) {
        int mid = (start + end) / 2;
        if (arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1]) {
            return mid;
        } else if (arr[mid] < arr[mid + 1]) {
            start = mid + 1;
        } else if (arr[mid] < arr[mid - 1]) {
            end = mid - 1;
        }
    }
    return -1;
}
int peakIndexInMountainArray(int* arr, int arrSize) {
    return binarySearch(arr, arrSize);
}
