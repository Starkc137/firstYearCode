#include <iostream>
#include <fstream>

using namespace std;
#ifdef _WIN32
int main(int argc, char* argv[])
{
    int result = Catch::Session().run(argc, argv);
    return result;
}
#endif

void solve(int grid [9][9])
{

}
 readFile(int board[9][9])
{
   ifstream input;
   char fileName[256];
   cout << "Where is your board located? ";
   cin >> fileName;

   input.open(fileName);
   if (input.fail())
   {
      cout << "Invalid file!\n";
      return;
   }

   for (int i = 0; i < 9; i++)
   {
      for (int j = 0; j < 9; j++)
         input >> board[i][j];

   }
   input.close();
   return;

}

