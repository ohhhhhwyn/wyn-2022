bool checkStraightLine(int** coordinates, int coordinatesSize, int* coordinatesColSize){
    for(int i = 1; i < coordinatesSize - 1; ++i)
    {
        int delta_x1 = coordinates[i][0] - coordinates[i - 1][0];
        int delta_y1 = coordinates[i][1] - coordinates[i - 1][1];
        int delta_x2 = coordinates[i + 1][0] - coordinates[i][0];
        int delta_y2 = coordinates[i + 1][1] - coordinates[i][1];
        if(delta_x1 * delta_y2 != delta_x2 * delta_y1)
        {
            return false;
        }
    }
    return true;
}