#include "SSD.h"
using namespace std;

int SSD::count = 0;

SSD::SSD(const string& model, int capacity)
    : model(model), capacity(capacity) {
    count++;
}

SSD::~SSD() {
    count--;
}

int SSD::getCount() {
    return count;
}

string SSD::getModel() const {
    return model;
}

int SSD::getCapacity() const {
    return capacity;
}