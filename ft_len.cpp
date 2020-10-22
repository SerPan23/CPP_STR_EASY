#include <iostream>
#include <string>
#include "new_str.h"
using namespace std;
int ft_len(string str){
    int kol = 0;
    while(str[kol] != '\0'){
        kol++;
    }
    return kol;
}
