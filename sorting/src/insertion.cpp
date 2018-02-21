#include <insertion.h>

std::vector<string> getWords(string filename){
    vector<string> words;
    string line;
    ifstream myfile(filename);
    if (myfile.is_open())
    {
        while ( getline (myfile,line) )
        {
            words.push_back(line);
        }
        myfile.close();
    }
    else cout << "Unable to open file";

    return words;
}

std::vector<string> insertionSortWords(std::vector<string> words){
    int counter = 1;
    while(counter < words.size()) {
        int cur = counter;
        while (cur > 0 && words.at(cur - 1) > words.at(cur)) {
            string temp = words.at(cur - 1);
            words.at(cur - 1) = words.at(cur);
            words.at(cur) = temp;
            cur--;
        }
        counter++;
    }
    return words;
}

