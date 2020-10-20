// houseProgramme.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    // for some reason when i got back through the array it messes up
    const static int ROWS{ 8 };
    const static int COLUMNS{ 8 };
    int houseArray[ROWS][COLUMNS] = { {0,0,0,0,0,0,0},{0,0,0,0,1,0,0,0},{0,0,1,0,0,1,0,0},{0,1,0,0,0,0,1,0} ,{0,1,0,0,0,0,1,0} ,{0,1,0,0,0,0,1,0}  ,{0,1,0,0,0,0,1,0} ,{0,1,1,1,1,1,1,0 } };


    for (int i = 0; i < COLUMNS; i++)
    {


        for (int j = 0; j < ROWS; j++)
        {

            std::cout << houseArray[i][j] << " ";

            if (j == 7)
            {
                std::cout << "\n";
            }
            else
            {
                std::cout << "";
            }
        }



    }
    std::cout<<"" << std::endl;

  

    std::cout << "rotate by 240 degress" << std::endl;
    std::cout << "" << std::endl;
    for (int i = 0; i < COLUMNS; i++)
    {


        for (int j = 0; j < ROWS; j++)
        {
           
            
             std::cout << houseArray[j][i] << " ";
            
           
            if (j == 7)
            {
                std::cout << "\n";
            }
            
        }



    }

    std::cout << "" << std::endl;
    std::cout << "rotate by 180 degress" << std::endl;
    std::cout << "" << std::endl;
    for (int i = COLUMNS-2; i >= 0; i--)
    {
        for (int j = ROWS-1; j >= 0; j--)
        {
           std::cout<< houseArray[i][j] << " ";
          
           if (j == 7)
           {
               std::cout << "\n";

           }
        }
        
    }
   
    std::cout << "" << std::endl;
    std::cout << "rotate by 90 degress" << std::endl;
   
    for (int i = COLUMNS-2; i >0; i--)
    {


        for (int j = ROWS-1; j >0; j--)
        {

            std::cout << houseArray[j][i] << " ";

            if (j == 7)
            {
                std::cout << "\n";
            }
            else
            {
                std::cout << "";
            }
        }



    }
  
   
}

