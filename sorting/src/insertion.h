//
// Created by carl on 2/20/18.
//

#ifndef ALGORITHMS_INSERTION_H_H
#define ALGORITHMS_INSERTION_H_H

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

std::vector<string> getWords(string filename);

std::vector<string> insertionSortWords(std::vector<string> words);

#endif //ALGORITHMS_INSERTION_H_H
