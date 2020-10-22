#include <iostream>
#include <string>
#include "new_str.h"
using namespace std;
int ft_max_char_on_end(string str)
{
    int kol = 0, maxx = 0;
    char a = '1';
    for(int i = 0; a != '\0'; i++){
        a = str[i];
        if(a >= '0' && a <= '9')
            kol++;
        else{
            if(kol > maxx)
                maxx = kol;
            kol = 0;
        }
    }
}
