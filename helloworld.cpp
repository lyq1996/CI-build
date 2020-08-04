#include <iostream>
#include <vector>

int main(){
    std::vector<int> output(10,0);
    std::vector<int>::iterator itr = output.begin();
    for(;itr!=output.end();itr++){
        std::cout << "The new branch" << std::endl;
    }
    return 0;
}
