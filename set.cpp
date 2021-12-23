void map::set()
{
    make();
    for (int counter1 = 0; counter1 <= degree; counter1++)
    {
        for (int counter2 = 0; counter2 <= degree; counter2++)
        {
            accelerator[counter1][counter2] = false;
            barrier[counter1][counter2] = false;
            if (counter1 == 0 || counter2 == 0)
            {
                i_data[counter1][counter2] = INT16_MAX;
            }
            else
            {   
                cin >> s_data[counter1][counter2];
                found(s_data[counter1][counter2], counter1, counter2);
                stringstream geek(s_data[counter1][counter2]);
                geek >> i_data[counter1][counter2];
                
            }
        }
    }
}
