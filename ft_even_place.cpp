#include <iostream>
#include <string>
#include "new_str.h"
using namespace std;
string ft_even_place(string str)
{
    string news;
    for(int i = 0; str[i] != '\0'; i++){
        if(i%2 == 0)
            news += str[i];
    }
    return news;
}
