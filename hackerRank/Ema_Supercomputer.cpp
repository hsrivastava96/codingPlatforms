#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'twoPluses' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING_ARRAY grid as parameter.
 */

int twoPluses(vector<string> grid) 
{
    int r = grid.size(), c = grid[0].size();
    int max1 = 0, max2 = 0, count = 0, l1 = 0, l2 = 0, l = 0, a1 = 0, a2 = 0, total = 0;

    int rowMat[r][c], colMat[r][c];
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            if(grid[i][j] == 'G' && j-1 >= 0)
                rowMat[i][j] = rowMat[i][j-1] + 1;
            else if(grid[i][j] == 'G')
                rowMat[i][j] = 1;
            else
                rowMat[i][j] = 0;
        }
    }

    for(int i = 0; i < c; i++)
    {
        for(int j = 0; j < r; j++)
        {
            if(grid[j][i] == 'G' && j-1 >= 0)
                colMat[j][i] = colMat[j-1][i] + 1;
            else if(grid[j][i] == 'G')
                colMat[j][i] = 1;
            else
                colMat[j][i] = 0;
        }
    }

    // cout<<"Row:"<<endl;
    // for(int i = 0; i < r; i++)
    // {
    //     for(int j = 0; j < c; j++)
    //         cout<<rowMat[i][j]<<"\t";
    //     cout<<endl;
    // }
    // cout<<"Col:"<<endl;
    // for(int i = 0; i < r; i++)
    // {
    //     for(int j = 0; j < c; j++)
    //         cout<<colMat[i][j]<<"\t";
    //     cout<<endl;
    // }
    
    for(int i = 0; i < r; i+=2)
    {
        for(int j = 0; j < c; j++)
        {
            if(colMat[i][j] > 0)
            {
                if(i-1 >= 0 && j+1 < c)
                {
                    if(rowMat[i-1][j+1] > 0)
                    {
                        if(colMat[i][j] % 2 == 0)
                            l1 = colMat[i][j] - 1;
                        else
                            l1 = colMat[i][j];

                        if(rowMat[i-1][j+1] % 2 == 0)
                            l2 = rowMat[i-1][j+1] - 1;
                        else
                            l2 = rowMat[i-1][j+1];

                        if(l1 < l2)
                            l = l1;
                        else
                            l = l2;

                        if(count == 0)
                            max1 = l;
                        else if(count == 1)
                        {
                            if(l > max1)
                                max2 = l;
                            else
                            {
                                max2 = max1;
                                max1 = l;
                            }
                        }
                        else
                        {
                            if(l > max2)
                            {
                                max1 = max2;
                                max2 = l;
                            }
                            else if(l > max1)
                                max1 = l;
                        }
                    }
                }
            }
        }
    }
    a1 = 2*max1 -1;
    a2 = 2*max2 -1;
    total = a1 * a2;

    return total;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);

    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

    int n = stoi(first_multiple_input[0]);

    int m = stoi(first_multiple_input[1]);

    vector<string> grid(n);

    for (int i = 0; i < n; i++) {
        string grid_item;
        getline(cin, grid_item);

        grid[i] = grid_item;
    }

    int result = twoPluses(grid);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
