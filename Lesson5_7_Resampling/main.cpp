// prob normalization

#include <iostream>
#include <vector>

using namespace std;

vector<double> w = { 0.6, 1.2, 2.4, 0.6, 1.2 };//You can also change this to a vector

//TODO: Define a  ComputeProb function and compute the Probabilities

void ComputeProb(vector<double> &w_in){

    auto prob = 0.0;
    auto sum = 0.0;

    for (auto &elem : w_in) sum += elem;

    for (auto &w : w_in)
    {
        w = w / sum;
        std::cout << w << std::endl;
    }
}

int main()
{
    //TODO: Print Probabilites each on a single line:
    //P1=Value
    //:
    //P5=Value
    ComputeProb(w);
    
    return 0;
}
