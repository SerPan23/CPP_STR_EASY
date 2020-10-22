#include <iostream>
#include <string>
#include "new_str.h"
using namespace std;
int ft_count_char_in_str(char c, string str)
{
    int kol = 0;
    char a = '1';
    for(int i = 0; a != '\0'; i++){
        a = str[i];
        if(str[i] == c)
            kol++;
    }
    return kol;
}
