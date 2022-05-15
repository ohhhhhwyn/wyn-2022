int cmp(void* _a, void* _b)
{
    int a = *(int*) _a;
    int b = *(int*) _b;
    return a - b;
}
bool canMakeArithmeticProgression(int* arr, int arrSize){
    qsort(arr, arrSize, sizeof(int), cmp);
    for(int i = 1; i < arrSize - 1; ++i)
    {
        if(2 * arr[i] != arr[i - 1] + arr[i + 1])
        {
            return false;
        }
    }
    return true;
}