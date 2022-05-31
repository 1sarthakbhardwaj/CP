/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

int getBit(int n, int pos){
    return ((n&(1<<pos)) !=0);
}

int setBit(int n, int pos){
    return (n|(1<<pos));
}

int clearBit(int n, int pos){
    return (n^(1<<pos));
}

int clearBit2(int n, int pos){
    int mask = ~(1<<pos);
    return (mask & n);
}

int updateBit(int n, int pos, int value){
    int mask = ~(1<<pos);
    n = (mask & n);

    return (n|(value<<pos));
}





int main()
{
    std::cout << getBit(5,1) << std::endl;
    std::cout << setBit(5,1) << std::endl;
    std::cout << clearBit2(5,0) << std::endl;
    std::cout << updateBit2(5,1,1) << std::endl;

    return 0;
}
 