#include <iostream>
#include <string>
#include "new_str.h"
using namespace std;
string ft_reverse_str(string str)
{
    string revs;
    int len = ft_len(str);
    for(int i = len-1; i >= 0; i--){
        revs += str[i];
    }
    return revs;
}
