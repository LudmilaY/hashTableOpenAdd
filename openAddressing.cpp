int h1 (int key)
{
    return key%10;
}

void inserirEndAberto (int key, int len)
{
    int count = h1(key);
    int pos = h1(key);
    
    if (table [pos] == NULL)
    {
        table [pos] = key;
    }
    
    else
    {
            while (table [pos]!=NULL)
            {
                pos ++
                if (pos == len)
                    pos = 0;
                if (table [pos] == NULL)
                {
                    table[pos]=key;
                    break;
                }
                if (pos == count)
                    break;
            }
    } 
}