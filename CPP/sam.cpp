#include <iostream>
#include <vector>
using namespace std;

class Sudoku{
public:


    bool is_valid() const{
        // Return a boolean specifying whether the current state of the sudoku is valid
        // i.e. there is only a single copy of each number in each row/col/block
        return false;
    }

    unsigned int get_N() const{
        // Return the N where the current sudoku is NxN

        return 0;
    }

    int& at(int row, int col){
        // Return the value of stored in the sudoku at the given row and col
        // This should return a reference, allowing the user to update the value in the sudoku

    }

    int& operator()(int row, int col){
        // Sudoku s;
        // s(2,5) will return whatever at(...) returns
        return at(row, col);
    }

    bool solve(){

    }

};

int main()
{
    vector<string> input;
    string line;

    while(getline(cin, line)){
        input.push_back(line);
    }

    Sudoku s(input);
    if(s.solve()){

    }else{

    }

    return 0;
}
