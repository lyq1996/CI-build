#include <iostream>
#include <vector>

int main(){
    std::vector<int> output(10,0);
    std::vector<int>::iterator itr = output.begin();
    for(;itr!=output.end();itr++){
        std::cout << "yes you are good" << std::endl;
    }
    return 0;
}
