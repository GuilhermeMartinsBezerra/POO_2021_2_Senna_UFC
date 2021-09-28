#include <iostream>
using namespace std;
auto multiplicacao(auto a, auto b){
    return a * b;
}
int main(){
    int n1=0, n2=0;
    std::cout << "Digite o primeiro numero: ";
    std::cin >> n1;
    std::cout << "Digite o segundo numero: ";
    std::cin >> n2;
    std::cout << multiplicacao(n1, n2) << '\n';
    return 0;
}