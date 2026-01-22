#include <iostream>

using namespace std;

static double operation(double a, double b, char operation){
    switch (operation)
    {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;
    case '/':
        if (b==0){ 
            cout << "Divide by 0 Error" << endl;
            return 0;
        }
        else return a/b;
        break;
    default:
        cout << "Unknown Operand" << endl;
        break;
    }
    return 0;
}

int main(){
    cout << operation(12, 6, '/');
}