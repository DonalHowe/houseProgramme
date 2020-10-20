#include <iostream>
#include <ctime>
///author: donal howe
/// time spent: 3hrs
/// 
/// 
/// 
/// 


// this funciton allows the player to choose any missile
bool selectMissile(bool t_missileSelected)
{

    int missileNo{ 0 };//this will dictate the type of missile it is
    std::cout << "please select a missile" << std::endl;
    std::cout << "either normal missile or atomic missile and napolm missile" << std::endl;
    std::cout << "please input 1 or 2 or 3 " << std::endl;
    std::cout << "number 1 is normal missile and number two is atomic missile" << std::endl;
    std::cin >> missileNo;
    t_missileSelected = true;
    if (missileNo == 1)
    {
        std::cout << "you have selcted normal missile" << std::endl;
        std::cout << "this missile will one hit the ship as it is was designed to guarentee one kill provided the hit is successfull"<<std::endl;
        std::cout << "***********************************************************" << std::endl;
        std::cout << "" << std::endl;

    }
    else if (missileNo == 2)
    {
        std::cout << "you have selected atomic missile" << std::endl;
        std::cout << "this missile will emit a nuclear explosion which is pretty self explanatory" << std::endl;
        std::cout << "********************************************************" << std::endl;
        std::cout << "" << std::endl;

    }
    else if (missileNo == 3)
    {
        std::cout << "you have selected napolm missile" << std::endl;
        std::cout << "this missile emits a firey explosion which will attach to the ships crew" << std::endl;
        std::cout << "********************************************************" << std::endl;
        
        std::cout << "" << std::endl;

    }


    return t_missileSelected;
}
// this function tells the player how to complete the game
void starterInstructions()
{
    bool understood = false;
    int understanding = 0;
    std::cout << "this is a text based game" << std::endl;
    std::cout << "A MISSILE GAME" << std::endl;
    std::cout << "step one: choose a missile " << std::endl;
    std::cout << "step two acquire target" << std::endl;
    std::cout << "step three input a launch code for set missile" << std::endl;
    std::cout << "step four choose to arm the missile and fire" << std::endl;
    std::cout << "step five wait to see if your missile destroyed target" << std::endl;
    std::cout << "******************************************************" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "press one if you understand the game" << std::endl;
    std::cin >> understanding;
    std::cout << "******************************************************" << std::endl;
    std::cout << "" << std::endl;

}
// this funcion inputs the players coordinates of choice
int  acquireTarget(int &t_coordinate)
{
    int Xpos = 0;
    int Ypos = 0;
    
    std::cout << "please choose a point where you want to shoot your missile" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "please select your x position between 1-20" << std::endl;
    std::cin >> Xpos;
    std::cout << "" << std::endl;
    std::cout << "please choose your y position between 1-20" << std::endl;
    std::cin >> Ypos;
    std::cout << "" << std::endl;
    std::cout << "***********************************************************" << std::endl;
    std::cout << "" << std::endl;
    t_coordinate = Xpos + Ypos;
   
    return t_coordinate;
}
//this funciton requires the user to put in the launch codes to fire the missile
void inputLaunchCode(int t_digitOne, int t_digiTwo, int t_digiThree)
{
    srand(time(NULL));
    int armed = rand() % 15+1;
    int codeTotal = 0;
    
    for (int i = 0; i < 5; i++)
    {
        std::cout << "" << std::endl;
        std::cout << "please select a three digit launch code" << std::endl;
        std::cout << "" << std::endl;
        std::cout << "HINT HIGHER THAN 5" << std::endl;
        std::cout << "" << std::endl;
        std::cout << "enter the launch code" << std::endl;
        std::cout << "" << std::endl;
        std::cout << "enter digit one" << std::endl;
        std::cin >> t_digitOne;
        std::cout << "" << std::endl;
        std::cout << "enter digit two" << std::endl;
        std::cin >> t_digiTwo;
        std::cout << "" << std::endl;
        std::cout << "enter digit three" << std::endl;
        std::cin >> t_digiThree;
        std::cout << "" << std::endl;
        codeTotal = t_digitOne + t_digiTwo + t_digiThree;

        if (codeTotal > armed)
        {
            std::cout << "" << std::endl;
            std::cout << "YOUR BOMB HAS BEEN ARMED and FIRED AT THE COORDINATES" << std::endl;
            std::cout << "******************************************************" << std::endl;
            std::cout << "" << std::endl;
            break;

        }
        else
        {
            std::cout << "" << std::endl;
            std::cout << "CODE IS WORNG TRY AGAIN" << std::endl;
            std::cout << "******************************************************" << std::endl;
            std::cout << "" << std::endl;
            continue;
        }
    }
   


 
}
//this function detects whether the missile has hit or not
bool collsionDetection(int t_targetPoint,bool t_restartGame)
{

    int frontOfShip = 20;
    int backOfShip = 50;
    int coordinates = t_targetPoint;
    bool reAim = false;
    
    if (coordinates >= frontOfShip && coordinates<=backOfShip)// JUST A RANGE FOR THE COOORDINATES total to be in to make it easier for the gamer
    {
        std::cout << "missile has collided ship destroyed" << std::endl;
        std::cout << "" << std::endl;
        std::cout << "YOU ARE THE CHAMPION OF THE GAME WELL DONE" << std::endl;
    }
    else
    {
        std::cout << "missile has missed tryAgain" << std::endl; 
        std::cout << "" << std::endl;


        reAim = true;
           
    }
    t_restartGame = reAim;


    return t_restartGame;


}



int main()
{
    // the integers need to run the game
    int digitOne = 0;
    int digitTwo = 0;
    int digitThree = 0;
    int digitFour = 0;
    int cooridinateTotal=0;
    int targetPoint = 0;
    // the bools to run the game
    bool selectmissileName = false;
    bool missileSelcted = false;
    bool launchCodesInputted = false;
    bool targetAcquired = false;
    bool RunGame = false;
    bool resartGame = false;
    bool reFire = false;

    
    // THIS is the main pattern for the game
    starterInstructions();
    system("CLS");
    selectMissile(selectmissileName);
    system("CLS");
    while (reFire==false)
    {
        switch (RunGame)
        {
        default:
            acquireTarget(cooridinateTotal);
            system("CLS");
            targetPoint = cooridinateTotal;

        case 2:
            inputLaunchCode(digitOne, digitTwo, digitThree);
            system("CLS");
        case 3:
            
            collsionDetection(targetPoint, resartGame);
            reFire = resartGame;
            system("CLS");

        case 4:
            if (reFire == false)
            {
                break;

            }
            else if (!reFire)
            {
                acquireTarget(cooridinateTotal);
               
                break;
            }
        
            

        }
    }
        
  
       
       
    

}

