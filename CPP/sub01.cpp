#include <iostream>
using namespace std;
#define N 9



bool isLegal(int grid[N][N], int row, int col, int block)
{
	

	for (int a = 0; a <= 8; a++)
		if (grid[row][a] == block)
			return false;


	for (int a = 0; a <= 8; a++)
		if (grid[a][col] == block)
			return false;


	int rowBegin = row - row % 3,
			colBegin = col - col % 3;

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			if (grid[i + rowBegin][j +
							colBegin] == block)
				return false;

	return true;
}


bool SOLVE(int grid[N][N], int row, int col)
{

	if (row == N - 1 && col == N)
		return true;

	if (col == N) {
		row++;
		col = 0;
	}
	
	if (grid[row][col] > 0)
		return SOLVE(grid, row, col + 1);

	for (int block = 1; block <= N; block++)
	{
		
		if (isLegal(grid, row, col, block))
		{
			
			grid[row][col] = block;
		
			if (SOLVE(grid, row, col + 1))
				return true;
		}
	
	
		grid[row][col] = 0;
	}
	return false;
}

void print(int arr[N][N]){
	
	for (int i = 0; i < N; i++){
		
		for (int j = 0; j < N; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}
}



int main()
{
	int grid[9][9];
	
	for(int s = 0; s < 9; s++)
    	{
    		for(int p = 0; p < 9; p++)
    		{
    			grid[s][p] = 0;
    			cin >> grid[s][p];
    		}
    	}

	if (SOLVE(grid, 0, 0))
		print(grid);
	else
		cout << "No solution" << endl;

	return 0;

}

