#include <iostream>
#include <string>
#include "new_str.h"
using namespace std;
bool ft_equal_reverse(string str)
{
    int len = ft_len(str);
    for(int i = 0; i < len; i++){
        if(str[i] != str[len-1-i])
            return false;
    }
    return true;
}
