#include<iostream>
using namespace std;

int sumEvenTo(int n) {
   if(n==1 && n%2!=0){return 0;}

   sumEvenTo(n%2);

}
int main(){

    cout<<sumEvenTo(6);
}