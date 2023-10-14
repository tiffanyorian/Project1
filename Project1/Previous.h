//
//  Previous.hpp
//  Project1
//
//  Created by Tiffany Orian on 7/3/23.
//

#ifndef Previous_h
#define Previous_h



class Previous
{
    
  public:
    
    Previous (int nRows, int nCols);
    ~Previous();
    bool dropACrumb(int r, int c);
    void showPreviousMoves() const;
    

  private:
    
    int m_rows;
    int m_cols;
    int **arr;
};

#endif /* Previous_hpp */
