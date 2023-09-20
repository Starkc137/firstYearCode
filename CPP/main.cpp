#include <iostream>
#include <queue>
#include <fstream>
#include <vector>
#include <tuple>
#include <limits>
#include <stack>

using namespace std;

class World{
public:
    int rows, cols;
    vector<string> data;
    pair<int, int> start, goal;

    const pair<int, int> mUnvisited = {-1, -1};
    vector<vector<pair<int,int>>> mParents;
    vector<vector<pair<int,int>>> Distance;

    World(istream & in){
        string line;
        //read rows and cols
        in>> rows>> cols;
        //throw away remaining /n
        getline(in, line);

        for(int r=0; r<rows; r++){
            //read the line
            getline(in, line);
            data.push_back(line);

            mParents.emplace_back(cols, mUnvisited);

            //check for the start
            auto tmp = line.find('S');
            if(tmp != line.npos){
                start.first =r;
                start.second = tmp;
            }
            //check for the goal
            tmp = line.find('G');
            if(tmp != line.npos){
                goal.first = r;
                goal.second = tmp;

            }
        }
    }
    bool valid(pair<int, int>curr){
        return curr.first >= 0 && curr.second >=0 &&
                curr.first < rows && curr.second < cols &&
                data[curr.first][curr.second] != 'x';
    }
    bool unvisited(pair<int,int> curr){
        return mParents[curr.first][curr.second]== mUnvisited;
    }
    void DFS(){
        mParents[start.first][start.second]= {-2,-2};
        BFS();

        if(unvisited(goal)){
            cout<< "No Path"<< endl;
        }else{
            pair<int,int> curr = mParents[goal.first][goal.second];
            while(curr != start){
                data[curr.first][curr.second]='*';
                curr = mParents[curr.first][curr.second];
            }

            print();
        }


    }
    void iDFS(){
        stack<pair<int,int>>s;
        s.push(start);

        while(!s.empty() && unvisited(goal)){
            pair<int,int> curr = s.top();
           

            pair<int,int> down = {curr.first+1, curr.second};
            pair<int,int> left = {curr.first, curr.second-1};
            pair<int,int> up = {curr.first-1, curr.second};
            pair<int,int> right = {curr.first, curr.second+1};

            if(valid(down)&& unvisited(down)){
                mParents[down.first][down.second] =curr;
                s.push(down);
            }else if(valid(left)&& unvisited(left)){
                mParents[left.first][left.second] =curr;
                s.push(left);

            }else if(valid(up)&& unvisited(up)){
                mParents[up.first][up.second] =curr;
                s.push(up);

            }else if(valid(right)&& unvisited(right)){
                mParents[right.first][right.second] =curr;
                s.push(right);

            }else{
                s.pop();
            }
        }
    }
    void BFS(){
        queue<pair<int,int>>q;
        //int inf = std::numeric_limits<int>::max();//this sets 'inf' as maximum value(infinity)
        //Distance[start.first][start.second]= {inf,inf};
        mParents[start.first][start.second]= {-2,-2};
        q.push(start);

        while(!q.empty() && unvisited(goal)){
            pair<int,int> curr = q.front();
            //q.pop();

            pair<int,int> down = {curr.first+1, curr.second};
            pair<int,int> left = {curr.first, curr.second-1};
            pair<int,int> up = {curr.first-1, curr.second};
            pair<int,int> right = {curr.first, curr.second+1};

            if(valid(down)&& unvisited(down)){
                //Distance[down.first][down.second]= curr;
                mParents[down.first][down.second] =curr;
                q.push(down);
            }else if(valid(left)&& unvisited(left)){
                //Distance[left.first][left.second]= curr;
                mParents[left.first][left.second] =curr;
                q.push(left);

            }else if(valid(up)&& unvisited(up)){
                //Distance[up.first][up.second]= curr;
                mParents[up.first][up.second] =curr;
                q.push(up);

            }else if(valid(right)&& unvisited(right)){
                //Distance[right.first][right.second]= curr;
                mParents[right.first][right.second] =curr;
                q.push(right);

            }else{
                q.pop();
            }
        }

    }

    void print(){
        for(const string &line : data){
            cout << line << endl;
        }
    }
};

int main()
{
    //fstream f("/users/stark/downloads/bfs-sampleio (1)/maze1.txt");
    World w(cin);//change this to world w(cin)
    //w.print();
    w.DFS();
    return 0;
}
