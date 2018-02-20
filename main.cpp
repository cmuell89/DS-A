#include <iostream>
#include <insertion.h>
#include <vector>

using namespace std;

int main() {
    std::vector<string> words = getWords("../data/random_words.txt");
    for(std::vector<string>::const_iterator i = words.begin(); i != words.end(); ++i){
        std::cout << *i << ' ';
    }
    return 0;
}