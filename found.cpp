    void found(string s, int counter1, int counter2)
    {
        string saver = s;
        if (saver.find("+") < saver.length())
        {
            accelerator[counter1][counter2] = true;
        }
        if (saver.find("-") < saver.length())
        {
            barrier[counter1][counter2] = true;
        }
        if (saver.find("m") < saver.length())
        {
            s_data[counter1][counter2] = "99999";
        }
    }
