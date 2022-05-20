int nearestValidPoint(int x, int y, int** points, int pointsSize, int* pointsColSize){
    int distance = INT_MAX;
    int subscript = INT_MAX;
    for(int i = 0; i < pointsSize; ++i)
    {
        if(points[i][0] == x || points[i][1] == y)
        {
            int tmp = abs(points[i][0] - x) + abs(points[i][1] - y);
            if(distance > tmp)
            {
                distance = tmp;
                subscript = i;
            }
        }
    }
    if(subscript == INT_MAX)
    {
        return -1;
    }
    return subscript;
}