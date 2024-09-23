#include "CPU.h"
using namespace std;

int CPU::count = 0;

CPU::CPU(const std::string& model, float frequency) {
    :model(model), frequency(frequency) {
    count++;
}

CPU::~CPU() {
    count--;
}

int CPU::getCount() {
    return count;
}
string CPU::getModel() const {
    return model;
}

float CPU::getFrequency() const {
    return frequency;
}
return;