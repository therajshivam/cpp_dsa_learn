#include <iostream>
#include <vector>

// typedef std::vector<std::pair<std::string, int>> pairlist_t;
// typedef std::string text_t;
// typedef int number_t;

using text_t = std::string;
using number_t = int;


int main() {

    // typedef
    // - reserved keyword used to create an additional name (alias) for another data type.
    // - New identifier for an exising type.
    // - Helps with readablity and reduce typos.
    // - Use when there is a clear benefit.
    // - Replaced with 'using' keyword (work better w/ templates)

    // pairlist_t pairlist;
    text_t firstName = "Bro";
    number_t age = 21;

    std::cout << firstName << std::endl;
    std::cout << age << std::endl;



    return 0;
}
