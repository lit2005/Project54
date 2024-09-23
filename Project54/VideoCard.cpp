#include "VideoCard.h"  
using namespace std;
int VideoCard::count = 0;

VideoCard::VideoCard(const string& model, int memory)
    : model(model), memory(memory) {
    count++;
}

VideoCard::~VideoCard() {
    count--;
}

int VideoCard::getCount() {
    return count;
}

string VideoCard::getModel() const {
    return model;
}

int VideoCard::getMemory() const {
    return memory;
}
