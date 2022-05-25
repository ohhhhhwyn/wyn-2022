char nextGreatestLetter(char* letters, int lettersSize, char target){
    int left = 0;
    int right = lettersSize - 1;
    while(left <= right){
        int mid = left + ((right - left) >> 1);
        if(target < letters[mid]){
            right = mid - 1;
        }
        else{
            left = mid + 1;
        }
    }
    if(left == lettersSize){
        return letters[0];
    }
    return letters[left];
}