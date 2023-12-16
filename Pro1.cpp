#include <iostream.h>
#include <conio.h>

int Matrix(int** matrix,int size)
{
     int down=0,up=0;
     for(int i=0;i<size;i++)
     {
                for(int j=0;j<size;j++)
                {
                          if(j>i && matrix[i][j] != 0)
                                    down=2;
                          if(i>j && matrix[i][j] != 0)
                                    up=1;
                }
     }
     return down+up;
}

int main()
{
     int size=0;
     cout<<"Enter size of matrix(number of rows and columns):";
     cin>>size;
     cout<<endl;
     int *matrix=new int[size];
     for(int i=0;i<size;i++)
                matrix[i]=new int[size];
     int row=1;
     while(row<=size)
     {
            cout<<"Enter numbers for row "<<row<<":";
            for(int i=0;i<size;i++)
                      cin>>matrix[row-1][i];
            row++;
     }
     for(i=0;i<size;i++)
     {
                for(int j=0;j<size;j++)
                          cout<<matrix[i][j]<<" ";
                cout<<endl;
     }
     cout<<endl<<endl;
     int ud=Matrix(matrix,size);
     if(ud==3)
            cout<<"Hich kodum"<<endl;
     else if(ud==2)
            cout<<"Bala mosallasi"<<endl;
     else if(ud==1)
            cout<<"Paein mosallasi"<<endl;
     else if(ud==0)
            cout<<"Har do"<<endl;
     cout<<"Press any key to quit...";
     getch();
     return 0;
}