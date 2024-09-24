#include <fstream>
#include <iostream>

int main() {
    std::ifstream stream(__FILE__);

    char c = '\0';

    while (stream.good()) {
        stream.get(c);

        std::cout.put(c);
    }

    stream.close();

    return 0;
}
