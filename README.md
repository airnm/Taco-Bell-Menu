# Read Me # Project 3
# Taco Bell Menu With Nutritional Calculator


## Description
For this project is to create some sort of menu system for users that will make it easy for them to see all the nutritional 
facts of their order, live as its being ordered. We are considering basing this menu system off of Taco Bells. So that the users might 
choose to eat a little healthier while ordering fast food.



## Installation
To use this all you need to install is an IDE that will compile and run C++ code.

## Usage
Is to allow the user to keep track of their daily micro and macro nutrients.

## Support
Tell people where they can go to for help. It can be any combination of an issue tracker, a chat room, an email address, etc.
If there are any issues with this code email one of these emails.
* michael.austin@wallawalla.edu
* aaron.martinez@wallawalla.edu
* andree.contrera@wallawalla.edu
* mathew.arnold@wallawalla.edu

## Roadmap
In the future we can include additional features such as better user interface.

## Contributing
We use a priavte repo that does not allow 

## Authors and acknowledgment
Authors and creators of this file include:
* Mike Austin 
* Aaron Martinez
* Andree Contreras
* Mathew Arnold

## Project status
The build is deployed and it is ready to use.

# Description

The program defines a main function that initializes various variables to store the nutritional information and total price of the order.
The program defines three vectors (burritos, specialties, and sidesandsweets) to store the food items of each category.
The program defines a Taco object and a NutritionalInformation object to store the nutritional information of the tacos.
The program uses a do-while loop to display the menu options and prompts the user to select an option. It then uses a switch statement to execute different actions based on the user's input:
If the user selects option 1, the program runs the Taco_runner function and stores the resulting NutritionalInformation object in the info variable. The program then updates the total_calories, total_fat, total_cholesterol, total_sodium, total_carbs, total_protein, and total_price variables with the information from the info object, and adds the orders to the total_order list.
If the user selects option 2, the program checks if the burritos vector is empty. If it is empty, it runs the Burritos function and stores the resulting vector of NutritionalFacts objects in the burritos variable. If it is not empty, it creates a temporary vector to store the new items from the Burritos function and appends them to the burritos vector. The program then prompts the user to go back to the main menu.
If the user selects option 3, the program does the same thing as for option 2 but with the specialties vector.
If the user selects option 4, the program does the same thing as for option 2 but with the sidesandsweets vector.
If the user selects option 5, the program sets the break_option variable to 1 and exits the do-while loop.
If the user selects any other option, the program displays an error message and goes back to the beginning of the loop.
After the loop finishes, the program displays the total order and the total nutritional information and price.
Overall, the program uses object-oriented programming to encapsulate the logic of different food items and their nutritional information. It uses vectors to store the different items, and a list to store the user's order. The program also validates the user's input and handles invalid input appropriately.