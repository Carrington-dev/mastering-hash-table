#include <iostream>

using namespace std;

void generate(string current, int n) {

    if (current.length() == n) {
        cout << current << endl;
        return;
    }

    generate(current + "0", n);

    generate(current + "1", n);
}

int main(){
    generate("1", 3);
    generate("0", 3);
    generate("2", 3);
    return 0;
}