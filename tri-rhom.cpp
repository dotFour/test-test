
#include <iostream>
#include <string>

using namespace std;

void drawTriangle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i >= j)
            {
                cout << "*";
            }
            else 
            {
                cout << ".";
            }
        }
        cout << "\n";
    }
}


void drawRhombus(int n)
{
    for (float i = 1; i <= n; i += 1)
    {
        for (float j = n; j >= 1; j -= 1)
        {            
            if (i >= j)
            {
                cout << "*";
            }
            else 
            {
                cout << ".";
            }
            cout << " ";
        }
        for (float j = 1; j <= n-1; j += 1)
        {            
            if (i >= j+1)
            {
                cout << "*";
            }
            else 
            {
                cout << ".";
            }
            cout << " ";
        }

        cout << "\n";
    }
    for (float i = n-1; i >= 1; i -= 1)
    {
        for (float j = n; j >= 1; j -= 1)
        {            
            if (i >= j)
            {
                cout << "*";
            }
            else 
            {
                cout << ".";
            }
            cout << " ";
        }
        for (float j = 1; j <= n-1; j += 1)
        {            
            if (i >= j+1)
            {
                cout << "*";
            }
            else 
            {
                cout << ".";
            }
            cout << " ";
        }

        cout << "\n";
    }
}


int main()
{
  drawTriangle(3);
  
  cout << endl << endl;
  
  drawRhombus(6);
  return 0;
}
