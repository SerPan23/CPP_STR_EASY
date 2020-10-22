#include <iostream>
#include <string>
#include "new_str.h"
using namespace std;
string ft_print_copy_str(string str, int number){
    string otv;
    for(int i = 0; i < number; i++){
        otv += str + " ";
    }
    return otv;
}
