# include <iostream>
using namespace std;

double TriangleArea (double base, double height){
    return 0.5 * base * height;
}
double RectangleArea (double length, double width){
    return length * width;
}
double SquareArea (double side){
    return side * side;
}

int main (){
    int choice;
    cout <<"Please select the area to calculate" <<endl;
    cout <<"1. Square " <<endl;
    cout <<"2. Rectangle " <<endl;
    cout <<"3. Triangle " <<endl;

    while (true) {
        cout <<"Please select your choice of the area to calculate:" <<endl;
        cin >> choice;
        if (choice == 1||choice == 2||choice == 3){
            cout <<"your input was "<< choice <<" which is an invalid input" <<endl;
            cout <<"Please enter a valid input" <<endl;
        }
        if (choice == 1){
           double side;
        cout <<"Enter the side of the square: " <<endl;
        cin >> side;
        double area = SquareArea (side);
        cout <<"The area of the square is " << area <<endl;
    } 
            
        } if (choice == 2){
            double length, width;
            cout <<"Enter the length of the rectangle: " <<endl;
            cin >> length;
            cout <<"Enter the width of the rectangle: " <<endl;
            cin >> width;
            double area = RectangleArea (length, width);
            cout <<"The area of the rectangle is " << area <<endl;        
    
       } else  (choice == 3);{
        double base, height;
            cout <<"Enter the base of the triangle: " <<endl;
            cin >> base;
            cout <<"Enter the height of the ttriangle: " <<endl;
            cin >> height;
            double area = TriangleArea (base, height);
            cout <<"The area of the triangle is " << area <<endl;
        }
        
    return 0;
    
}