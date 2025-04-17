#include<iostream>

using namespace std;

void inputMatrix(int mat[10][10] , int &row , int &column){  // Take the Matrix

    cout<<"Enter the number of rows(max 10):";
    cin>>row;
    cout<<"Enter the number of columns(max 10):";
    cin>>column;
    for (size_t i = 0; i < row; i++)
    {   
        cout<<"R"<<i+1<<"\n";
        for (size_t j = 0; j < column; j++)
        {
            cout<<"C"<<j+1<<"=";
            cin>>mat[i][j];
        }        
    }    
}

void dispalyMatrix(int mat[10][10] , int row , int column){  // Display Matrix 
    for (size_t i = 0; i < row; i++)
    {   
        cout<<"[ ";
        for (size_t j = 0; j < column; j++)
        {
            cout<<mat[i][j]<<" ";
        }   
        cout<<"]\n";     
    } 
}

void transposeMatrix(int mat[10][10] ,  int row , int column){  // Transpose A Matrix
    int temp[10][10];
    for (size_t i = 0; i < row; i++)            // Store The Transpoesd Matrix in a Temp Matrix
    {
        for (size_t j = 0; j < column; j++)
        {
            temp[j][i]=mat[i][j];
        }
        
    }
    for (size_t i = 0; i < row; i++)            // Transfear The Values Of The Temp Matrix To The Original Matrix
    {
        for (size_t j = 0; j < column; j++)
        {
            mat[i][j]=temp[i][j];
        }   
    }
    
}

int SumMatrix(int mat1[10][10] ,int mat2[10][10]  ,int row, int row1 , int column ,int column1 , int result[10][10]){       // Summition Of Two Matrices
    if (column != column1 || row != row1)           // Check The Matrix Is The Same Size
    {
        cout<<"Invalid size (Matrix Should be Same Size) !!\n";
        exit(0);
    }
    for (size_t i = 0; i < row; i++)                // Sum The Two Matrices
    {
        for (size_t j = 0; j < column; j++)
        {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }   
    }
    return result[10][10];
}

int productMatrix(int mat1[10][10] ,int mat2[10][10]  ,int row, int row1 , int column ,int column1 , int result[10][10]){      // Product Of Two Matrices
    if (column != row1)         // Check The Matrices Size Is Right For Multiplication
    {
        cout<<"Invalid size (Matrix_1 column should be equal Matrix_2 row) !!\n";
        exit(0);
    }
    for (size_t i = 0; i < row; i++)            // Multiplication of The Two Matrices 
    {
        for (size_t j = 0; j < column; j++)
        {
            
            for (size_t k = 0; k < column1; k++)
            {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
            
        }   
    }
    return result[10][10];
}

int main (){
    int mat1[10][10] , mat2[10][10],row ,row1, column,column1 , selection , result [10][10];
    
    cout<<"*** Read and display an m × n matrix and find the sum, transpose and product of two m × n matrices ***\n";

    cout<<"Select an Operation from the menu:\n"<<"      [1] Read and Display Of A Matrix\n"<<"      [2] Transpose Of A Matrix\n"<<"      [3] Sum Of Two Matrices\n"<<"      [4] Product Of Two Matrices\n";
    cin>>selection;

    switch (selection)
    {
    case 1:
        cout<<"Enter The matrix:\n\n";
        inputMatrix(mat1 , row , column);
        cout<<"The matrix:\n";
        dispalyMatrix(mat1 , row , column);
        break;
    case 2:
        cout<<"Enter The matrix:\n\n";
        inputMatrix(mat1 , row , column);
        cout<<"The matrix:\n";
        dispalyMatrix(mat1 , row , column);
        cout<<"The matrix Transpose:\n";
        transposeMatrix(mat1 , row , column);
        dispalyMatrix(mat1 , row , column);
        break;
    case 3:
        cout<<"Enter The First matrix:\n\n";
        inputMatrix(mat1 , row , column);
        cout<<"Enter The Second matrix:\n\n";
        inputMatrix(mat2 , row1 , column1);
        cout<<"The Summition of :\n";
        dispalyMatrix(mat1 , row , column);
        cout<<"+\n";
        dispalyMatrix(mat2 , row1 , column1);
        cout<<"=\n";
        SumMatrix(mat1 , mat2 ,row , row1 ,column , column1 , result);
        dispalyMatrix( result, row , column);
        break;
    case 4:
        cout<<"Enter The First matrix:\n\n";
        inputMatrix(mat1 , row , column);
        cout<<"Enter The Second matrix:\n\n";
        inputMatrix(mat2 , row1 , column1);
        cout<<"The Product Matrix of :\n";
        dispalyMatrix(mat1 , row , column);
        cout<<"X\n";
        dispalyMatrix(mat2 , row1 , column1);
        cout<<"=\n";
        productMatrix(mat1 , mat2 ,row , row1 ,column , column1 , result);
        dispalyMatrix( result, row , column);
        break;
    default:
        cout<<"Invalid Selection !!\n";
        break;
    }

    return 0;
}