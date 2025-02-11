#include <iostream>

namespace first
{
    int x = 1;
} // namespace first

namespace second
{
    int x = 2;
} // namespace second



int main () {

    // Namespace
    // - provides a solution for preventing name conflicts in large projects.
    // - Each entity needs a unique name.
    // - A namespace allows for identically names entities as long as the namespaces are different.
    
    // int x = 0;

    // std::cout << first::x << '\n';
    // std::cout << second::x;

    using namespace first;

    std::cout << x;
    
    


    return 0;
}