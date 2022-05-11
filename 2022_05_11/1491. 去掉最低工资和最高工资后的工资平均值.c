double average(int* salary, int salarySize){
    int max = salary[0];
    int min = salary[0];
    int sum = salary[0];
    for(int i = 1; i < salarySize; ++i)
    {
        max = max < salary[i] ? salary[i] : max;
        min = min > salary[i] ? salary[i] : min;
        sum += salary[i];
    }
    return (sum - max - min) * 1.0 / (salarySize - 2);
}