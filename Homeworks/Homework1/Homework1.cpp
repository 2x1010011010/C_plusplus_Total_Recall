#include <iostream>
#include <cmath>

float GetSideSize(char sideName){
    float size;
    std::cout << "\n Enter side " << sideName <<" lenght :";
    std::cin >> size;
    return size;
}

float GetResult(float aSide, float bSide){
    float result;
    return  result = sqrt(aSide*aSide + bSide*bSide);
}

int main()
{
    float aSide;
    float bSide;

    aSide = GetSideSize('a');
    bSide = GetSideSize('b');
    
    std::cout << "\n c side lenght = " << GetResult(aSide, bSide) << std::endl;

    return 0;
}