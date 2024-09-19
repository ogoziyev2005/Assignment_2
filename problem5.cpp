//
// Created by Otabek Goziyev on 19/09/24.
//
#include <iostream>
using namespace std;
int main(){
   double x,result,y;
    char operation;
    cin>>x;
cin>>operation;
cin>>y;
    switch(operation){
        case '-':
            result=x-y;
            cout<<result<<endl;
      break;
        case '+':
            result=x+y;
            cout<<result<<endl;
            break;
        case '*':
            result=x*y;
            cout<<result<<endl;
            break;
        case '/':
            result=x/y;
            cout<<result<<endl;
            break;
    }//if(x)
}