<h3>Problem: Generate a C++ object-oriented project that models the following descriptions:<\h3>

1. The project contains three classes, i.e., Point2D, Circle, and Cylinder where Circle “is-a”
Point2D, and Cylinder “is-a” Circle.
2. The “is a” relationship is modeled by public inheritance.
3. All classes must have a default constructor and constructor-initializer which takes as many
parameters as needed to initialize the existing data members.
4. All classes have set and get functions included into the public section.
5. Classes Circle and Cylinder have a public method called calculate_area(…).
6. All classes have a public method equal(…) testing the equality of two objects of the same class.
7. Design a non-member function distance(…) calculating the distance to the origin for class Point
and class Circle.
8. Design a member function distance(…) calculating the distance between the centers of two
objects of class Circle.
9. Class Cylinder contains a member function volume(…).
10. Class Point2D contains two private data members x and y, both of type int; class Circle has one
private data member radius of type double and class Cylinder has one private data member
height of type double.
11. All classes contain public print(..) showing the values stored into the corresponding data members
as well as the area and volume when appropriate.
12. The main (driver) program must declare 2-3 objects each of the above classes implementing all
member functions included into them as well as the two non-member functions of (7).