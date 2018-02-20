# coding=utf-8
from random import shuffle

with open("../data/words.txt") as f:
    words = f.read().splitlines()

shuffle(words)

with open("../data/random_words.txt", "w") as f:
    for item in words:
        f.write("%s\n" % item)