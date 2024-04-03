#include <iostream>
using namespace std;

class Shapes{
    private:
        int dimension;
        float length,breadth,radius,height;
        float area,perimeter,volume,surfaceArea;

    public:
        void setDimension(int d){
            dimension = d;
        }
        void setLength(float l){
            length = l;
        }
        void setBreadth(float b){
            breadth = b;
        }
        void setRadius(float r){
            radius = r;
        }
        void setHeight(float h){
            height = h;
        }
        
        Shapes(){
            dimension = 0;
            length = 0;
            breadth = 0;
            radius = 0;
            height = 0;
            area = 0;
            perimeter = 0;
            volume = 0;
            surfaceArea = 0;
        }
        int getDimension(){
            return dimension;
        }

        if (getDimension() == 2){
            string getShapeName(){
                if (radius > 0 && height == 0){
                    return "Circle";
                }
                else if (length > 0 && breadth == length && height == 0 && length == breadth){
                    return "Square";
                }
                else if (length > 0 && breadth > 0 && height == 0 && length != breadth){
                    return "rectangle";
                }
                else if (breadth > 0 && height > 0 && length == 0){
                    return "Triangle";
                }
            } 

        else if (getDimension() == 3){
            string getShapeName(){
                if (length > 0 && breadth > 0 && height > 0 && (length != breadth || length != height || breadth != height)){
                    return "Cuboid";
                }
                else if (length > 0 && breadth == length && height == length && length == breadth && breadth == height && height == length){
                    return "Cube";
                }
                else if (radius > 0 && height > 0 && radius != height){
                    return "Cylinder";
                }
                else if(radius > 0 && height > 0  && radius != height){
                    return "Cone";
                }
                else if (radius > 0 && height > 0 && height == radius){
                    return "Sphere";
                }
            }
        }
        else{
            return "Invalid Shape";
        }
        }
};

int main(){
    Shapes shape1;
    shape1.setLength(10);
    shape1.setBreadth(10);
    cout << shape1.getShapeName() << endl;
    //square

    Shapes shape2;
    shape2.setLength(10);
    shape2.setHeight(5);
    shape2.setBreadth(10);
    cout <<shape2.getShapeName() << endl;
    //Cuboid

    Shapes shape3;
    shape3.setLength(10);
    shape3.setBreadth(15);
    cout << shape3.getShapeName() << endl;
    //Rectangle

    Shapes shape4;
    shape4.setLength(10);
    shape4.setBreadth(10);
    shape4.setHeight(10);
    cout << shape4.getShapeName() << endl;
    //Cube

    Shapes shape5;
    shape5.setRadius(10);
    shape5.setHeight(10);
    cout << shape5.getShapeName() << endl;

    Shapes shape6;
    shape6.setRadius(10);
    cout << shape6.getShapeName() << endl;
    

}