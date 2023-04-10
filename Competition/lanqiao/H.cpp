#include <iostream>
#include <list>
using namespace std;
int main(){
    int N, K, n;
    cin >> N >> K;
    list<int> num;
    for (int i = 0; i < N; i++){
        cin >> n;
        num.push_back(n);
    }
    for (int i = 0; i < K; i++){
        list<int>::iterator minIt = num.begin();
        for (list<int>::iterator it = num.begin(); it != num.end(); it++) if(*it < *minIt) minIt = it;
        list<int>::iterator j = minIt, k = minIt;
        j--;
        k++;
        *j += *minIt;
        *k += *minIt;
        num.erase(minIt);
    }
    list<int>::iterator it = num.begin();
    cout << *it;
    it++;
    for (; it != num.end(); it++) cout << " " << *it;
    return 0;
}