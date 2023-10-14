//
//  Previous.cpp
//  Project1
//
//  Created by Tiffany Orian on 7/3/23.
//

#include "Previous.h"

#include <iostream>
using namespace std;

Previous::Previous (int nRows, int nCols)
{
    m_rows = nRows;
    m_cols = nCols;
    
    arr = new int*[nRows];
        for (int i = 0; i < nRows; ++i)
        {
            arr[i] = new int[nCols];

            for (int j = 0; j < nCols; j++)
                arr[i][j] = 0;
        }
}

Previous:: ~Previous()
{
    for(int i = 0; i < m_rows; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
}

bool Previous::dropACrumb(int r, int c)
{
    if(r < 1 || r > m_rows || c < 1 || c > m_cols){
        return false;
    }
    arr[r - 1][c - 1] += 1;

    return true;
}

void Previous::showPreviousMoves() const{
    
    for(int r = 0; r < m_rows; r++){
        for(int c = 0; c < m_cols; c++){
            if(arr[r][c] == 0)
            {
                cout<< '.';
            }
            else if(arr[r][c] >= 26)
            {
                cout<< 'Z';
            }
            else
            {
                cout<< (char)(arr[r][c]+ 64);
            }
        }
        cout<<endl;
    }
}
