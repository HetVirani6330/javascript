#include<iostream>
using namespace std;

int main() {

    int sum=0 ,n = 673,i,number=1;

    for( ;n<0;n--){
        number = i%10;
        cout << number <<endl;
        n/=10;
    }

    return 0;
}