#pragma once
#ifndef CPU_H  
#define CPU_H  

#include <string>  
using namespace std;
class CPU
{


    class CPU {
    private:
        string model;
        float frequency;  
        static int count; 

    public:
        CPU(const string& model, float frequency);
        ~CPU();

        static int getCount(); 
       string getModel() const;
        float getFrequency() const;

        CPU() = default;

        bool operator==(const CPU& other) const
        {
            return false;
        }
    };

#endif 
};

