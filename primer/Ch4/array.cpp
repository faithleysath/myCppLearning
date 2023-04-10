#include<iostream>
using namespace std;
const int n = 12;
int main(){
    short months[12]; // months' type is not "array", but "float array"
    short month[n]; // can also use constant value
    months[0] = 1; // the index of the head is 0

    //create and initialize
    int yams[3];
    yams[0] = 7; // assign value to the first element
    yams[1] = 8;
    yams[2] = 6;

    int yamcosts[3] = {20, 30, 5}; // create, initialize array
    static int yamcost[3] = {20, 30, 5};

    // initialize rules
    int cards[4] = {3, 6, 8, 10};
    int hand[4] {5, 6, 7, 9}; // allowed
    hand[4] = {5, 6, 7, 9}; // not allowed
    hand = cards; // not allowed
    float hotelTips[5] = {5.0, 2.5}; // allowed, [0]=5.0 [1]=2.5 [234] = 0
    short things[] = {1, 5, 3, 8}; // allowed
    int num_elements = sizeof things / sizeof (short);

    int N[5]{}; // all zero
}