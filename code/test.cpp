#include <iostream>
#include <list>

using namespace std;

int main(){

    list <int> listA;
    listA.push_back(5);
    listA.push_back(6);
    listA.push_back(7);
    listA.push_back(8);

    cout << "The length of listA is: " << listA.size() << endl;
    

    return 0;
}