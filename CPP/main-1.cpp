#include <iostream>
#include <queue>
#include <vector>
#include <cstring>

using namespace std;

struct point{

    int r;
    int c;
};

struct node{

    point pt;
    int dist;
};

bool valid(vector<vector<char>>& matrix, int row, int col, int mr, int nc){

    return //(row != 'x') &&
            (row < mr) &&
           //(col != 'x') &&
            (col < nc) &&
            (matrix[row][col] != 'x');
}

int numofrows[] = {-1, 0, 0, 1};
int numofcols[] = {0, -1, 1, 0};

int BFS(queue<node> q, vector<vector<char>>& matrix, point S, point G, int mr, int nc){

    if (!matrix[S.r][S.c] || !matrix[G.r][G.c])
        return -1;

    bool visited[14][17];

    memset(visited, false, sizeof visited);

    visited[S.r][S.c] = true;

    //queue<node> q;

    node s = {S, 0};

    q.push(s);

    while (!q.empty()){

        node curr = q.front();

        point pt = curr.pt;

        if (pt.r == G.r && pt.c == G.c){

            matrix [pt.r][pt.c]='G';
            return curr.dist;}

        q.pop();
        //matrix [pt.r][pt.c]=' ';

        for (int i = 0; i < 4; i++){

            int row = pt.r + numofrows[i];

            int col = pt.c + numofcols[i];

            if (valid(matrix, row, col, mr, nc) && matrix[row][col] &&

               !visited[row][col]){

                visited[row][col] = true;

                if (matrix[row][col]!='x'||matrix[row][col]!='S'||matrix[row][col]!='G'){
                                matrix[row][col] = '*';}

                node neighbour = { {row, col},

                                      curr.dist + 1 };

                q.push(neighbour);
                //

            }
        }
    }

    return -1;
}

int main(){

    queue<node> q;
    int mr;
    int nc;
    string line;

    cin >> mr;
    cin >> nc;

    int srow = 0;
    int scol = 0;
    int grow = 0;
    int gcol = 0;

    vector <vector<char>> matrix(mr, vector<char>(nc));

    int counter = 0;
    while (counter != mr){

        getline(cin, line);
        for (char i = 0; i < nc; i++){
            char val = line[i];
            matrix[counter][i] = val;
            if (val=='S'){
                srow = counter;
                scol = i;
            }
            else if (val=='G'){
                grow = counter;
                gcol = i;
            }
        }
        counter = counter + 1;
    }

    point source = {srow, scol};

    point goal = {grow, gcol};

    int dist = BFS(q, matrix, source, goal, mr, nc);

    if (dist != -1){

        matrix[srow][scol]= 'S';

        for (int i = 0; i < 14; i++){
            for (int j = 0; j < nc; j++){

               /* int node_row = q.front().pt.r;
                 int node_col = q.front().pt.c;

           // node a = {i, j};
            if (i == node_row && j == node_col){;
                matrix[i][j] = '*';
                q.pop(); }*/

        cout << matrix[i][j];
        }cout << endl;
        }cout << "xxxxxxxxxxxxxxxxx" << endl;
        }

    else

        cout << "No Path" << endl;

    return 0;

}
