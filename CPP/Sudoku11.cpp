#include <iostream>
#define  N 9

using namespace std;

int n; 
//Function to coutSudoku a NxN blocks

void coutSudoku(int block[9][9])
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cout << block[i][j] << " ";
        }
        cout << endl;
    }
}


//Checks if row and col valid on blocks
bool isValid(int blocks[9][9], int row, int col, int num)
{
    for(int p = 0; p < 9; p++)
    {
	
        if (blocks[row][p] == num)
            return false;

        if (blocks[p][col] == num)
            return false;
	}
	
    int Row = row - row % n, Col = col - col % n;

    for(int i = 0; i < 9; i++)
        for(int j = 0; j < 9; j++)
            if(blocks[i + Row][j + Col] == num)
                return false;
    return true;
}

bool SOLVE(int blocks[9][9], int row, int col)
{
    if (row == 9-1 && col == 9)
        return true;

    if (col == 9)
    {
        row++;
        col = 0;
    }

    if(blocks[row][col] > 0)
        return SOLVE(blocks, row, col + 1);

    for(int num = 1; num <= N; num++)
    {
        if(isValid(blocks, row, col, num))
        {
            blocks[row][col] = num;

            if (SOLVE(blocks, row, col + 1))
                return true;
        }
        blocks[row][col] = 0;
    }
    return false;
}

int main()
{
	cin >> n; int blocks[9][9];
    
    //for(int k = 0; k < n; k++)
    //{
    	for(int s = 0; s < 9; s++)
    	{
    		for(int p = 0; p < 9; p++)
    		{
    			blocks[s][p] = 0;
    			cin >> blocks[s][p];
			}
		}
	//}
	
    if (SOLVE(blocks, 0, 0))
        coutSudoku(blocks);
    else
        cout << "No Solution" << endl;
    return 0;
}
