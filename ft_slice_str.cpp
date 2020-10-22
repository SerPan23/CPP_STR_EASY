#include <iostream>
#include <string>
#include "new_str.h"
using namespace std;
string ft_slice_str(string str, int start, int ends)
{
    string news;
    char a = '1';
    for(int i = start-1; (a != '\0' && i < ends); i++){
        if (i < ends)
        {
            a = str[i];
            news += str[i];
        }
    }
    return news;
}
