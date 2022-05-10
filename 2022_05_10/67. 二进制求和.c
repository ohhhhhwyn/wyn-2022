void reserve(char *string)
{
    int length = strlen(string);
    for(int i = 0; i < length / 2; ++i)
    {
        char tmp = string[i];
        string[i] = string[length - 1 -i];
        string[length - 1 - i] = tmp;
    }
}
char * addBinary(char * a, char * b){
    reserve(a);
    reserve(b);
    int length_a = strlen(a), length_b = strlen(b);
    int length_max = fmax(length_a, length_b);
    char* ret = (char*)malloc(sizeof(char) * (length_max + 2));
    int cur = 0, sum = 0;
    for(int i = 0; i < length_max; ++i)
    {
        sum += i < length_a ? (a[i] == '1') : 0;
        sum += i < length_b ? (b[i] == '1') : 0;
        ret[cur++] = sum % 2 + '0';
        sum /= 2;
    }
    if(sum)
    {
        ret[cur++] = '1';
    }
    ret[cur] = '\0';
    reserve(ret);
    return ret;
}