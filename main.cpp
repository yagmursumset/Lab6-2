#include <iostream>
using namespace std;


float recursive(int n){
    if (n == 0){
        return 1;
    }
    else{
        float answer = (((float) n / (float)(n + 2)) - 10) * recursive(n - 1);
        return answer;
    }
}

float recursive(){
    cout << "Enter a number: " << endl;
    int num;
    cin >> num;
    float sum = 1;
    while(num!=0){
        sum = sum * (((float) num / (float)(num + 2)) - 10);
        num--;
    }
    cout<< "The result is: " << sum <<endl;
}
int main() {
    cout<<"Enter a number : "<< endl;
    int number;
    cin>>number;
    cout<< "The result is: " << recursive(number) <<endl;


    recursive();
    return 0;


}
