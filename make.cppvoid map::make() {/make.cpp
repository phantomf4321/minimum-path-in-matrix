void map::make()
{
    
    s_data = new string* [100];
    i_data = new int* [100];
    for (int counter1 = 0; counter1 < degree+1; counter1++)
    {
        s_data[counter1] = new string[degree];
    }
    for (int counter1 = 0; counter1 < degree + 1; counter1++)
    {
        i_data[counter1] = new int[degree];
    }
    
    
}
