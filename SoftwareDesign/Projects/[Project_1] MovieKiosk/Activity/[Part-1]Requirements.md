Video Store Project
Overview: Program requirements specification for a rental store to keep the data of the customer based on the list that will keep track of the rental item data and customer data including name, phone number, number of movies, and IDs. Movies are stored in ascending order depending on the categories applied. Customers will able to enter their phone number when return a movie in search in the data base. Movie ID will be entered and saved to data base depending on the return/add manner. 
System Description:
•	Program that for Movie Kiosk that store, displays data of customers
•	Search through data using customer’s phone number
•	The data of the users are used internally, possibly as a data base is better
•	A GUI user interface suits better and easy for customer to interact with the program
•	Verification process depending on what client returns
•	Movie is stored in category, data is read numerically and displayed as text i.e (‘f’ for feature, ‘c’ = comedy, ‘h’ = horror)
 Class:
+verification(phoneNumber: int) :int  //verifies the authentic user
+add(IDOfMovie:int) :int          //add movie ID to list
+remove(IDOFMovie:int)    //remove movie ID from list
+search(IDOFMovie:int):int      //search the entered item from the list
+print():void        //display the items from the list
-name
-phoneNumber
-numberOfMovie
-IDOfMovie
-title
-numberOnHand

Environmental Consideration: 
Windows XP/Vista/7/8
 .netFramework(4+) compatibility
Efficiency for searching with best O notation O(1) and smoother experience required. Program must be run on at least 512 MB RAM.
Internal Host requirements with specific writable permission.
Program must needs to have better interface and ways to handle user inputs
Cost: 
•	Cost of the program including testing and automation is: $1500
•	Automated and manual testing is necessary to check bugs and other issues
Acceptance - Program must be completed before the due date: April 9th
Verification - using the simulated data must be completed
Validation - Service after operation on actual environment is required



