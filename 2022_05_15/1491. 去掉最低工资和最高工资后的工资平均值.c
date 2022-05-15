double average(int* salary, int salarySize){
    double max = INT_MIN;
    double min = INT_MAX;
    double sum = 0;
    double ret = 0;
    for(int i = 0; i < salarySize; ++i)
    {
        if(max < salary[i])
        {
            max = salary[i];
        }
        if(min > salary[i])
        {
            min = salary[i];
        }
        sum += salary[i];
    }
    ret = (sum - max - min) / (salarySize - 2);
    return ret;
}