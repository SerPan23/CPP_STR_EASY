#include <iostream>
#include <string>
#include "new_str.h"
using namespace std;
string ft_cmp_str(string str, string str2, int n)
{
    string news;
    char a = '1';
    for(int i = 0; i < n; i++)
        news += str[i];
    news += str2;
    for(int i = n; a != '\0'; i++)
    {
        a = str[i];
        news += str[i];
    }
    return news;
}
