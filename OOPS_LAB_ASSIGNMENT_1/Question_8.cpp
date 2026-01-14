#include <iostream>

using namespace std;

static int late_fee(int days){

    if (days <= 5) {
        return 0;
    }
    if (days > 5 || days <= 10){
        return 5;
    }
    if (days >= 30){
        return -1;
    }
    return 0;
}

int main(){

    int days;
    cin >> days;

    switch (late_fee(days))
    {
    case 0:
        cout << "Your fine is 50 paise";
        break;

    case 5:
        cout << "Your fine is 5 rupees";
        break;
    
    case -1:
        cout << "Your membership has been cancelled!!";
        break;
    default:
        cout << "Issue with input";
        break;
    }
}