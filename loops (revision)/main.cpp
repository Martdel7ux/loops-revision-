//
//  main.cpp
//  loops (revision)
// Question(output the multiplication table for a user defined number)
//
//  Created by MARTIN on 23/08/2021.
//

#include <iostream>

using namespace std;
int main()
{
    int limit=10;
    int count=0;
    int num;
    
    cout<<"enter the number here"<<endl;
    cin>>num;
    
    while(count<=limit)
    {
        cout<<count<<"*"<<num<<"="<<count*num<<endl;
        count++;
    }
    
    return 0;
}
