#include <iostream>
#include <string>
#include "new_str.h"
using namespace std;
int ft_find_str(string str, string str2)
{
    int len = ft_len(str);
    int len2 = ft_len(str2);
    for(int i = 0; i < len; i++)
    {
        bool f = 1;
        for(int j = 0; j < len2; j++)
        {
            if(str[i+j] != str2[j])
                f = 0;
        }
        if(f == 1)
            return i;
    }
    return -1;
}
