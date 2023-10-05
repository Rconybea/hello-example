#include <iostream>

using namespace std;

int
main(int argc, char * argv[]) {
    std::string subject = "World";

    if (argc > 1)
        subject = argv[1];

    cout << "Hello, " << subject << "!" << std::endl;
} /*main*/
