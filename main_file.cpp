#include <iostream>
#include <limits>

class TicTacToe {
private:
    char arr[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    int x, y, ctr = 0;

public:
    void display() {
        for (int i = 0; i < 3; ++i) {
            std::cout << ' ';
            for (int j = 0; j < 3; ++j) {
                std::cout << arr[i][j] << ' ';
                if (j < 2)
                    std::cout << "| ";
            }

            std::cout << std::endl;

            if (i < 2) {
                std::cout << '-';
                for (int k = 1; k < 10; ++k) {
                    if (k % 3 == 0 and k != 9)
                        std::cout << "|-";
                    else if (k != 9)
                        std::cout << '-';
                }
                std::cout << std::endl;
            }
        }
        std::cout << std::endl;

        return;
    }

    bool makeAMove(char c) {
        int flag = 1;
        while (true) {
            std::cout << "Enter the location of " << c << ": ";
            std::cin >> x >> y;
            if (std::cin.fail()) {
                std::cin.clear(); // Clear the error flag
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n'); // Ignore invalid input
                std::cout << "Invalid input. Please enter two integers.\n";
                continue; // Ask for input again

            }

            if (x < 0 || x > 2 || y < 0 || y > 2 || arr[x][y] != 'E') {
                std::cout << "WRONG MOVE" << std::endl;
                continue;
            }

        std::cout << std::endl;
        arr[x][y] = c;
        ctr += 1;
        break;
    }
        if (checkwinner(x, y, c)) {
            std::cout << c << " is the winner!" << std::endl;
            return 1;
        }

        return 0;
    }
    bool checkwinner(int i, int j, char c) {
        int a = -1;
        for (int y = 0; y < 3; y++) {
            if (arr[i][y] == c) {
                a++;
            }
        }
        if (a == 2) {
            return 1;
        }
        a = -1;

        for (int n = 0; n < 3; n++) {
            if (arr[n][j] == c) {
                a++;
            }
        }

        if (a == 2) {
            return 1;
        }
        if (i == j) {
            if (arr[0][0] == c && arr[1][1] == c && arr[2][2] == c) {
                return 1;
            }
        }

        if (i + j == 2) {
            if (arr[0][2] == c && arr[1][1] == c && arr[2][0] == c) {
                return 1;
            }
        }
        return 0;
    }

    void play() {
        for (int i = 0; i < 4; ++i) {
            this->display();
            if (this->makeAMove('X'))
                break;
            this->display();
            if (this->makeAMove('O'))
                break;
        }
        this->display();
        if (ctr == 8) {
            if (!makeAMove('X')) {
                std::cout << "The match is draw!\n" << std::endl;
            }
            this->display();
        }

        return;
    }
};

int main() {
    TicTacToe g1;
    g1.play();

    return 0;
}
