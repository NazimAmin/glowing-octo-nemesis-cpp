Project (C++):Video Rental Store
For a rental store: a program should keep track of customers
borrowing and returning movies
What are the objects?
Rental item data: title, quantity on hand, & ID
Customers data: name, phone, number of movies borrowed
and their IDs
The movie data is stored in a file with a letter indicating the
movie category (’f’ for feature, ’c’ for comedy, ’h’ for horror)
When data is read into memory, the information is stored
numerically (1=’f’, 2=’c’ 3=’h’)

Video Rental Store cont'd
when data is displayed it is displayed as words (’feature’,
’comedy’, ’horror’)
when a customer returns a movie, the user enters his/her
phone number to search the database
after verification: the quantity on hand is decremented and
movie id is added to the list of movie id borrowed by this
customer

Case Study: Video Rental Store
main() does not ask the user to enter data and does not
output anything itself
Try to find out
who is asking the user to enter the phone number of a
customer?
Where is an error message is printed in case the
customer ID does not exists?
Who is responsible to update the files? etc.
⇒ A well-designed program pushes responsibility from client
code to server code
⇒ Client code thus expresses the meaning of computations, not
details of computations