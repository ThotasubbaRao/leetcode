char nextGreatestLetter(char* letters, int lettersSize, char target) {
    int left = 0, right = lettersSize - 1;
    if (target >= letters[right] || target < letters[0]) {
        return letters[0];
    }
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
       
        if (letters[mid] > target) {
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }
     return letters[left % lettersSize];
}