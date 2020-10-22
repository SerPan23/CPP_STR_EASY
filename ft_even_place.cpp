#include <iostream>
#include <string>
#include "new_str.h"
using namespace std;
string ft_even_place(string str)
{
    string news;
    char a = '1';
    for(int i = 0; a != '\0'; i++){
        a = str[i];
        if(i%2 == 0)
            news += str[i];
    }
    return news;
}
