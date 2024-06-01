#include <iostream>
using namespace std;

int div_5(int i){
    if (i%5 ==0){
        cout<<i<<" is divisible by 5."<<endl;
    }
    return 0;
}
int main(){
    for (int i=1; i<101; i++){
        div_5(i);
    }
    return 0;
}