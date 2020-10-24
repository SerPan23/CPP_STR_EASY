#include <iostream>
#include <string>
#include "new_str.h"
using namespace std;
double ft_percent_lower_uppercase(string str)
{
    double kols = 0, kolp = 0;
    char a = '1';
    for(int i = 0; a != '\0'; i++){
        a = str[i];
        if(a >= 'A' && a <= 'Z')
            kols += 1.0;
        else if (a >= 'a' && a <= 'z')
            kolp += 1.0;
    }
    //cout << kols << " " << kolp << endl;
    return (kols/kolp)*100;
}
