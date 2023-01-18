#include <iostream>

/*
    ToDo:
        Add other colors of marbles
        A way to remove a marble🙂!
        Create project folder
        Create readme with design...
            A representation for marbles could just be a count of each kind of marble that I consider valid...
        at least basic input validation
        add a few tests
*/


int main(void) {
    int red_count = 0;
    int green_count = 0;
    int blue_count = 0;

    std::cout << "Welcome to the marble bag!" << std::endl << "How many red marbles would you like to add?" << std::endl << ">";

    std::cin >> red_count;

    std::cout << "There are now " << red_count << " red marbles." << std::endl;

    return 0;
}
