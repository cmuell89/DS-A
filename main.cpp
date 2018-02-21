#include <iostream>
#include <insertion.h>
#include <fstream>
#include <iterator>

using namespace std;

int main() {
    std::vector<string> words = getWords("../data/random_words.txt");

    // C++ Iterator:
//    for(std::vector<string>::const_iterator i = words.begin(); i != words.end(); ++i){
//        std::cout << *i << ' ';
//    }

    std::vector<string> sortedWords = insertionSortWords(words);


    std::ofstream output_file("../data/sorted_words.txt");
    std::ostream_iterator<std::string> output_iterator(output_file, "\n");
    std::copy(sortedWords.begin(), sortedWords.end(), output_iterator);

    if(words == sortedWords){
        std::cout << "Sorted!";
    } else {
        std::cout << "Not sorted! You fail!";
    }

    return 0;

}