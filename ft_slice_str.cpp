#include <iostream>
#include <string>
#include "new_str.h"
using namespace std;
string ft_slice_str(string str, int start, int ends)
{
    string news;
    for(int i = start; str[i] != '\0'; i++){
        if (i <= ends)
        {
            news += str[i];
        }
        else
            return news;
    }
    return news;
}
