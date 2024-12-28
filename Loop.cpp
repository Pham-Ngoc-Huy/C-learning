#include <iostream>

using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    string list_of_output[9] ={"one", "two", "three", "four","five", "six", "seven", "eight", "nine"};
    for(int i = a; i <= b ; i++){
        if (1 <= i && i <= 9){
                cout<<list_of_output[i-1]<<endl;
            }
        else if (i > 9 && i%2 == 0){
            cout << "even" << endl;   
        }
        else {
            cout << "odd" << endl;
        }
    }
    return 0;
}