#include "RAM.h"  
using namespace std;
int RAM::count = 0;

RAM::RAM(const string& model, int size)
    : model(model), size(size) {
    count++;
}

RAM::~RAM() {
    count--;
}

int RAM::getCount() {
    return count;
}
string RAM::getModel() const {
    return model;
}

int RAM::getSize() const {
    return size;
}
