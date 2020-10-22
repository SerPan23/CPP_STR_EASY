#include <iostream>
#include <string>
#include "new_str.h"
using namespace std;
string ft_first_end_three(string str)
{
    int len = ft_len(str);
    string otv;
    if (len > 5){
        //cout << str[0] << str[1] << str[2] << str[len-3] << str[len-2] << str[len-1];
        otv += str[0] + str[1] + str[2] + str[len-3] + str[len-2] + str[len-1];
    }
    else
    {
        for (int i = 0; i < len; i++)
        {
            otv += str[0];
        }
    }
    return otv;
}
