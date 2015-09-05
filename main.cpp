#include<iostream>

using std::cout;
using std::endl;

bool isPermutation(char* a, char* b){
    // Holds character counts for both strings.
    unsigned short* counter[256] = {0};
    
    // Add character counts of first string.
    char* pA = a;
    while(*pA != '\0'){
        counter[*pA]++;
        pA++;
    }
    
    // Subtract character counts of second string.
    char* pB = b;
    while(*pB != '\0'){
        counter[*pB]--;
        pB++;
    }
    
    // Check that all character counts are 0
    for(int i = 0; i < 256; i++){
        if(counter[i] != 0)
            return false;
    }
    return true;
}

int main(int argc, char* argv[]){
    char* stringA = new char[6];
    char* stringB = new char[6];
    
    memcpy(stringA, "Hello\0", 6);
    memcpy(stringB, "Holel\0", 6);
    
    cout << (isPermutation(stringA, stringB) ? "True" : "False") << endl;
    
    delete[] stringA;
    delete[] stringB;
}