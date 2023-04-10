#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main(){
    char charr1[20];
    char charr2[20] = "jaguar";
    string str1;
    string str2 = "panther";

    // assignment for string objects and character arrays
    str1 = str2;
    strcpy(charr1, charr2);

    // appending for string objects and character arrays
    str1 += " paste";
    strcat(charr1, " juice");

    int len1 = str1.size();
    int len2 = strlen(charr1);
}