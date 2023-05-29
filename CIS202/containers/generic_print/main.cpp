#include <iostream>
#include <vector>
#include <list>
#include <sstream>

using namespace std;
template <typename T>
void gen_print(const T &container, ostream& o, const string& delim=" "){
    int sz = sizeof(container);
    int count = 0;
    for (auto value: container){
        if(count < sz - 1){
            o << value << delim;
        }
        count++;
    }
    o << container[sz-1];
    o << endl;
}

int main(){
    vector<int> intVec = {10, 9, 8, 7};
    vector<char> charVec = {'a', 'b', 'c', 'd'};
    int intArr[] = {1, 2, 3, 4};
    char charArr[] = {'a', 'b', 'c', 'd'};
    ostringstream os;

    gen_print(intVec, cout);
    gen_print(charVec, cout);
    gen_print(intArr, cout);
    gen_print(charArr, cout);

    cout << endl;

    gen_print(intVec, os, ", ");
    gen_print(charVec, os);
    gen_print(intArr, os);
    gen_print(charArr, os);

    cout << os.str() << endl;

    return 0;
}