#include <iostream>
#include "new_str.h"
using namespace std;
string ft_three_str(string str, string str2, string str3)
{
    string news;
    int len2 = ft_len(str2);
    int pos = ft_find_str(str, str2);
    while(pos != -1){
        char a = '1';
        for(int i = 0; a != '\0'; i++){
            a = str[i];
            if(i == pos){
                news += str3;
                i += len2-1;
            }
            else
                news += str[i];
        }
        str = news;
        news = "";
        pos = ft_find_str(str, str2);
        //cout << pos << " " << str << endl;
    }
    return str;
}
