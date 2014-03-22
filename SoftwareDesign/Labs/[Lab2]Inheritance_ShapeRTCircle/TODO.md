Problem: Generate a C++ object-oriented project that models the following descriptions:
=> A circle is-a shape.
=> A circle has-a a point (x,y) and a radius.
=> A right triangle is-a shape.
=> A right triangle has-a hypotenuse and two sides, denoted as side1 and side2.
=> A shape, a circle, or a right triangle has-an area.
 
 
Requirements:
1. The is-a relationship is modeled by public inheritance.
2. The has-a relationship is modeled by composition.
3. The project contains four classes, i.e., Shape, Point, Circle, and RTriangle.
4. All classes must have a default constructor.
5. Class Point, Circle, and RTriangle must have a constructor initializer, which takes as many parameter as needed to initialize the data members.
6. Class Shape must have a protected data member area of type double.
7. All classes must have a public method called calculate_area().
8. Class Point must have two public data members x and y, both of type int.
9. Class Circle must have one protected data member named center that is an object or a pointer to an object of class Point.
10. Class Circle must have one protected data member radius of type double.
11. Class RTriangle must have three protected data members hypotenuse, side1 and side2, all of type int.
12. Class Shape is the base class for Circle, and RTriangle.
13. The constructor initializer for RTaiangle must validate the three sides by the equation that
    hypotenuse2=side12 + side22.
14. The main driver must declare an object of class Circle, and an object of class RTriangle, as show in the
figure, and print out the corresponding data members and the area of each object.