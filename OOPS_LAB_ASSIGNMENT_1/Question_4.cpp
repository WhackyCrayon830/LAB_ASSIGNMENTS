#include <iostream>

using namespace std;

static float celcius_to_farenheit(float celcius){
    return ((9 * celcius)/5.0) + 32;
}

int main(){
    cout << celcius_to_farenheit(32);
}