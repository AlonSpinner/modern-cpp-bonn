
class Image {
    public:
    Image() {} //default
    Image(int rows, int cols) : rows_{rows}, cols_{cols} {} //constructor
    
    const int& at(int row, int col) const { //getter function
        return data_[row * cols_ + col];
    }

    const int at(int row, int col) const {
        return data_[row*cols_ + col];
    }

    int rows() const {return rows_;}
    int cols() const {return cols_;}

    private:
    const int rows_ = 0;
    const int cols_ = 0;
};