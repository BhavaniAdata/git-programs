#include<iostream>
#include "chat.h"
using namespace std;
void func(int a)
{
    a=a+1;
    cout<<a;
}
int main(){
    int a=10;
    func(a);
}