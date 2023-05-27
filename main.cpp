#include<iostream>
#include "chat.h"
using namespace std;
void function(int a)
{
    a=a+1;
    cout<<a;
}
int main(){
    int a=10;
    function(a);
}