// P5733
// #include<iostream>
// int main(){
//     char n;
//     while(std::cin>>n)std::cout<<('a'<=n&&n<='z'?char(n-32):n);
//     return 0;
// }
#include<iostream>
#include<cstdio>
using namespace std;
char s[100];
int main(){
    scanf("%s", s); // cin >> s;
    for (int i = 0; s[i] != '\0'; i++)
        if (96 < s[i] && s[i] < 123)
            s[i] -= 32;
    printf("%s\n", s); // cout << s << endl;
    return 0;
}
// #include<cstdio>
// #include <stdio.h>
// using namespace std;
// int main(){
//     char n;
//     while (true) {
//         n = getchar();
//         if (n == EOF) {
//             break;
//         }
//         if ('a'<=n&&n<='z') {
//             n -= 32;
//         }
//         putchar(n);
//     }
//     return 0;
// }