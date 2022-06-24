void reverse(char* s, int left, int right){
    while(left < right){
        char tmp = s[left];
        s[left++] = s[right];
        s[right--] = tmp;
    }
}
bool rotateString(char * s, char * goal){
    int len = strlen(s);
    for(int i = 0; i < len; i++){
        if(0 == strcmp(s, goal)){
            return true;
        }
        reverse(s, 1, len - 1);
        reverse(s, 0, len - 1);
    }
    return false;
}