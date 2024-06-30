#include <iostream>
#include <string>
#include<vector>
#include <fstream>
using namespace std;



#(CPlusPlus,n.d.)
class user {
    string username;
    int age;

public:
    user(string u, int a): username(u), age(a) {}

    string getTheUsername() {
        return username;
    };
    void setTheUsername(string n) {
        username=n;
    }

    int getTheAge() {
        return age;
    };
    void setTheAge(int a) {
        age=a;
    }
};

class characters {
    string type;
    string name;
    int health;
    int power;


public:
    characters(string t, string n, int h, int p) : type(t), name(n), health(h), power(p) {}

    string getTheType() {
        return type;
    };
    void setTheType(string t) {
        type=t;
    }

    string getTheName() {
        return name;
    };
    void setTheName(string n) {
        name=n;
    }

    int getTheHealth() {
        return health;
    };
    void setTheHealth(int h) {
        health=h;
    }

    int getThePower() {
        return power;
    };
    void setThePower(int p) {
        power=p;
    }
    void displayInfo() const {
        cout << "Name: " << name << endl;
        cout << "Health: " << health << endl;
        cout << "Power: " << power << endl;
    }

};


class rps {
public:

    int getUserrps() {
        int choice;
        cout << "Enter number to play (1. Rock, 2. Paper, 3. Scissors)";
        cin >> choice;
        return choice;
    }


    int getComputerrps() {
        srand(time(0));
        return rand() % 3 + 1;
    }

    void rpsresult(int userrps, int comprps) {
        cout << "Your item is ";

        switch (userrps) {
            case 1:
                cout << "Rock" << endl;
            break;
            case 2:
                cout << "Paper" << endl;
            break;
            case 3:
                cout << "Scissors" << endl;
            break;
            default:
                cout << "Invalid choice." << endl;
            return;
        }

        cout << "Computer's choice is ";

        switch (comprps) {
            case 1:
                cout << "Rock." << endl;
            break;
            case 2:
                cout << "Paper." << endl;
            break;
            case 3:
                cout << "Scissors." << endl;
            break;
        }

    }
};
#(MyCPLUS, 2024)

class Item {
public:
    string name;
    int quantity;
    int power;

    Item(string n, int q, int pwr) : name(n), quantity(q), power(pwr) {}
};

class Inventory {
public:
    vector<Item> items;

    void displayInventory() {

        cout << "\nCurrent Inventory:\n";
        for (Item item : items) {
            cout << item.name << ": " << item.quantity << endl;
            cout << "Power : "<< item.power << endl;
        }
    }
};

class Calculator {
public:
    int sum(int x1, int y1) {
        int cal1;
        cal1=x1+y1;
        return cal1;
    }
};
class PowerBoost {
public:
int boostpower(int n) {
    if ( n  > 4)
        return n*2;
    else
        return boostpower(n*2);
}
};


int main()
{
   cout<<"Welcome to our Adventure game of saving the princess from the castle."<<endl;
    cout<<"Are you ready to start?"<<endl;
    string userName;
    int userAge;

    cout << "Enter your name: ";
    getline(cin, userName);

    cout << "Enter your age : ";
    cin >> userAge;
    user user1(userName, userAge);
    cout << "Hello," << user1.getTheUsername() << endl;

    cout<<"Here is the story of the game."<<endl;
    cout<<"You are currently trapped in the room while entering the castle to save the princess at the top of the castle. There will be consequences for each steps therefore, think first before doing or choosing something.";

    cout<<"Here's the rule!!!"<<endl;
    cout<<"1. Be Honest. \n2.Be Brave. \n3. Be intelligent."<<endl;

    cout<<"Before starting, you have power of 10 and 3 healths. You will lose or gain them due to your choices."<<endl;


    cout << "Hello," << user1.getTheUsername() << endl;
    cout<< "There is a monster at the end you have to face\n";
    characters monster("Dragon","Grag", 1, 20);
    monster.displayInfo();
    cout<<"You have power of 10 at the start and have to be more than a monster to win."<<endl;
    cout<<"You have 3 health, if you lose all of that, you will die."<<endl;
    int power = 10;
    int health = 3;
    Inventory inventory;

    int choice1;

    do {
        cout << "\nThis is your first choosind stage. Think Carefullly. Let your intuition lead. \n";
        cout << "\n(Please type the number only to play this adventure game.)\n";
        cout << "1. The Red Room\n";
        cout << "2. The Dark Room.\n";
        cout << "Enter your choice: ";
        cin >> choice1;
        int markcal1=0;

        if (choice1 == 1) {

            cout << "You have entered the DARK ROOM. I guess you have bad guess. You will not see in this room as it is dark as the name.\n";
            cout<<"You have to answer the calculation. which is really simple. You will see the door after you have done based on your mark.\n";
            cout<<"You gain power of 1\n";
            power+=1;
            cout<<"You need to correct two or above to enter into the Safe Zone. Else, you have to eneter the Danger Zone.\n";


            cout<<"What is the answer of 3+4?"<<endl;
            Calculator calc;
            int x1=3;
            int y1=4;
            int cal1=calc.sum(x1, y1);
            int anscal1;
            cin>>anscal1;

            if (cal1==anscal1) {
                cout<<"Your answer is correct."<<endl;
                markcal1+=1;
            }
            else {
                cout<<"Your answer is not correct."<<endl;
            }

            cout<<"What is the answer of 4+4?"<<endl;
            x1=4;
            y1=4;
            cal1=calc.sum(x1, y1);
            int anscal2;
            cin>>anscal2;
            if (cal1==anscal2) {
                cout<<"Your answer is correct."<<endl;
                markcal1+=1;}
            else {
                cout<<"Your answer is not correct."<<endl;
            }

            cout<<"What is the answer of 5+5?"<<endl;
            x1=5;
            y1=5;
            cal1=calc.sum(x1, y1);
            int anscal3;
            cin>>anscal3;
            if (cal1==anscal3) {
                cout<<"Your answer is correct."<<endl;
                markcal1+=1;
            }
            else {
                cout<<"Your answer is not correct."<<endl;
            }


            cout<<"Your result of this game is "<< markcal1<<endl;
            if (markcal1>=2) {
                cout<<"You can now enter the Safe Zone"<<endl;
                power+=2;
                cout<<"You gain 2 power\n";
                string rollclick;
                cout<<"You have a luck. So, let's try to test your luck. "<<endl;
                cout<<"Type something to roll your dice. \nYou only have one chance."<<endl;
                cout<<"and you have to be over  4."<<endl;
                cin>>rollclick;
#(CodeAcademy, n.d.).
                srand(time(0));
                int rollcust = rand() % 10 + 1;
                cout << "Your number is a " << rollcust << endl;

                if (rollcust<=5) {
                    cout << "You are less than 5, and you lose." <<  endl;
                    cout << "You are to go to Angel Room." <<  endl;
                    srand(time(0));

                    cout << "Welcome to Rock, Paper, Scissors game from this room!" << endl;
                    cout<<"You don't get to choose, but to play this game to choose your power to fight the dragon. \nThere is no TIE. You have to play again if you tie,"<<endl;

                    rps game;
                    int userrps = game.getUserrps();
                    int comprps = game.getComputerrps();
                    game.rpsresult(userrps, comprps);

                    while(userrps==comprps) {
                        userrps = game.getUserrps();
                        comprps = game.getComputerrps();
                        game.rpsresult(userrps, comprps);
                    }
                    if ((userrps == 1 && comprps == 3) ||
                                   (userrps == 2 && comprps == 1) ||
                                   (userrps == 3 && comprps == 2)) {
                        cout << "You win this round!" << endl;

                        cout << "You can get a bag of powerful stones and they are worth of 20. Good Luck with your next step." << endl;
                        power+=20;

                                   }
                    else if  ((userrps == 1 && comprps == 2) ||
                            (userrps == 2 && comprps == 3) ||
                                (userrps == 3 && comprps == 1)){
                        cout << "You lose the game and you are now to face the dragon without having enough power." << endl;
                                }

                }
                else {
                    cout << "You are more than 5, and you win." <<  endl;
                    cout << "You are to go to the HEAVEN Room." <<  endl;

                    int itemchoice;
                    do{
                        cout << "\n(Please type the number only )\n";
                        cout << "1. Get a sword\n";
                        cout << "2. Get a gun\n";
                        cout << "Enter your choice: ";

                        cin>>itemchoice;

                        if(itemchoice==1) {


                            cout << "This sword is made from the teeth of a dragon, and you gain power of 20." << endl;
                            Item sword("Dragon warrior", 1, 20);
                            power+=20;
                            inventory.displayInventory();

                        }else if(itemchoice==2) {
                            cout << "You also get the powerful gun, which would gain power of 15 for you." << endl;
                            Item gun("Kicking Gun", 1, 15);
                            power+=15;
                            inventory.displayInventory();
                        }}
                    while (itemchoice!=1 && itemchoice!=2);
                }



            }
            else {
                cout<<"You have to enter the DANGER Zone"<<endl;
                cout << "You need to be careful with everything you touch because you are in danger and can lose your health points even if you cannot get one."<< endl;
                health-=1;
                cout<<"You have lost 1 health because it is danger."<<endl;
                cout<<"You still need to choose the room based on your game result."<<endl;

                vector<string> countryquiz = {"USA", "France", "Thailand"};
                for (int j=0; j<countryquiz.size(); j++){
                    cout<<countryquiz[j]<<" ";
                    string countryname;
                    bool isctyFound;
                    int ctyquiz=0;
                    cout<<"What country is from Asia?. Please write exactly like the country given."<<endl;
                    cin>> countryname;
                    if(countryquiz[2]==countryname){
                        cout<<"You are right"<< endl;
                        isctyFound=true;
                        ctyquiz+=1;
                    }

                    if(!isctyFound){
                        cout<<"Sorry. It's wrong answer."<<endl;
                    }

                    cout<<"What the country is from America?. Please write exactly like the country given."<<endl;
                    cin>> countryname;
                    if(countryquiz[0]==countryname){
                        cout<<"You are right"<< endl;
                        isctyFound=true;
                        ctyquiz+=1;
                    }

                    if(!isctyFound){
                        cout<<"Sorry. It's wrong answer."<<endl;
                    }

                    cout<<"What country is from Europe?. Please write exactly like the country given."<<endl;
                    cin>> countryname;
                    if(countryquiz[1]==countryname){
                        cout<<"You are right"<< endl;
                        isctyFound=true;
                        ctyquiz+=1;
                    }

                    if(!isctyFound){
                        cout<<"Sorry. It's wrong answer."<<endl;
                    }
                    if (ctyquiz>=2) {cout<<"You win. So you are allowed to go to a better room, which is call a BETTER  Room."<<endl;
                        cout<<"Therefore, we will give you 1 health to heal yourself."<<endl;
                        health+=1;
                        int betterchoice;
                        do{
                            cout << "\n(Please type the number only )\n";
                            cout << "1. Get a live potion\n";
                            cout << "2. Get a heart potion from princess after met\n";
                            cout << "Enter your choice: ";

                            cin>>betterchoice;

                            if(betterchoice==1) {
                                cout << "This sword is made from the teeth of a dragon, and you gain power of 20." << endl;
                                Item livepotion("Live Potion", 1, 10);
                                power+=10;
                                inventory.displayInventory();

                            }else if(betterchoice==2) {
                                cout << "You also get the powerful gun, which would gain power of 15 for you." << endl;
                                Item lovepotion("Love potion", 1, 25);
                                power+=25;
                                inventory.displayInventory();
                            }}
                        while (betterchoice!=1 && betterchoice!=2);

                    }
                    else {
                        cout<<"You only got the answer below 2, and you lose"<<endl;

                        cout<<"You can only choose to go to the worst room, and we call it HELL Room"<<endl;
                        cout<<"You have nothing to lose. Bet all your powers to boost.";
                        power-=2;
                        cout<<"You lose 2 power\n";
                        int lastchoice;
                        do{
                            cout << "\n(Please choose one way and type the number only )\n";
                            cout << "1. Go outdise of the castle.\n";
                            cout << "2. Face the monster NOW!!!\n";
                            cout << "Enter your choice: ";

                            cin>>lastchoice;

                            if(lastchoice==1) {

                                PowerBoost booster;
                                cout << power<< " is " << booster.boostpower(power) << endl;
                                cout << "Your power becomes boosts and face the monster Dragon." << endl;
                                power=20;
                            }else if(lastchoice==2) {
                                cout << "You lose all your power and die before you meet the monster." << endl;
                            }}
                        while (lastchoice!=1 && lastchoice!=2);
                    }


                }
            }

            } else if (choice1==2) {
                cout<<"You have entered the RED ROOM. Therefore, you have to be aware of"<<endl;
                cout<<"Everything here is RED and it signs danger. You have to  consider carefully to escape this room. "<<endl;

                int arr[10];
#(W3school, n.d.)
                cout<<"Combine all the numbers from this set: {";
                for (int j=0; j<11; j++) {
                    arr[j]=j;
                    cout<<arr[j]<<",";
                }
                cout<<"}"<<endl;
                int sumcal1=0;
                for (int z=0;z<11; z++) {
                    sumcal1+=arr[z];
                }
                int sumcal1ans;
                cin>>sumcal1ans;
                if (sumcal1ans==sumcal1) {
                    cout<<"Your answer is correct."<<endl;
                    cout<<"You can now ENTER the FEARLESS room, where everything is fine."<<endl;
                    power+=2;
                    cout<<"You gain 2 power\n";
                    cout<<"Let me give you a chance to roll a dice to determine your luck."<<endl;
                    string rollclick;
                    cout<<"Type something to roll your dice. \nYou only have one chance."<<endl;
                    cout<<"and you have to be over  4."<<endl;
                    cin>>rollclick;

                    srand(time(0));
                    int rollcust = rand() % 6 + 1;
                    cout << "You rolled a " << rollcust << endl;
                    if (rollcust<4) {
                        cout << "You are less than 4, and you lose." <<  endl;
                        cout << "You have to enter the RUINED room." <<  endl;
                        power-=1;
                        health-=1;
                        cout<<"You lose 1 power and 1 health\n";
                        int ruinchoice;
                        do{
                            cout << "Your current power is " <<power << endl;
                            cout << "You have ruined by the environment and you unfortunately face the monster" <<power << endl;
                            cout << "You are lucky enough to triple your power." << endl;
                            power=power*3;
                            cout << "\n(Please choose one way and type the number only )\n";
                            cout << "1. Use all the power to fight\n";
                            cout << "2. Escape from the monster.\n";
                            cout << "Enter your choice: ";

                            cin>>ruinchoice;

                            if(ruinchoice==1) {
                                cout << "You have won this game because you have finished the dragon and meet your princess." << endl;

                            }else if(ruinchoice==2) {
                                cout << "You have run as fast as you can, but you die unfortunately." << endl;

                            }}
                        while (ruinchoice!=1 && ruinchoice!=2);

                    }
                    else {
                        cout << "You are more than 4, and you win." <<  endl;
                        cout << "You have to enter the DESIRED room." <<  endl;
                        power+=2;
                        cout<<"You gain 2 power\n";
                        cout << "You are here to save the princess, so as you desire" <<  endl;
                        int desirechoice;
                        do{
                            cout << "Your current power is " <<power << endl;
                            cout << "\n(Please choose one way and type the number only )\n";
                            cout << "1. Save the princess directly.\n";
                            cout << "2.Beat the dragon first.\n";
                            cout << "Enter your choice: ";

                            cin>>desirechoice;

                            if(desirechoice==1) {
                                cout << "You have won this game because you have finished saving the princess." << endl;

                            }else if(desirechoice==2) {
                                cout << "We love your decision, so we will give extra 20 powers." << endl;
                                power+=20;
                            }}
                        while (desirechoice!=1 && desirechoice!=2);
                    }


                }else {
                    cout<<"Your answer is not correct."<<endl;
                    cout<<"So sad. You have to now ENTER the FEARLFUL room, where everything is not fine."<<endl;
                    power-=2;
                    cout<<"You lose 2 power\n";
                    cout<<"You need to answer 3 quizzes to save yourself."<<endl;

                    cout<<"What is the capital city of France?";
                    string realans1 = "Paris";
                    string userans1;
                    cin >> userans1;

                    int quiz1mark=0;
                    if (userans1 == realans1) {
                        cout << "Correct!\n";
                        quiz1mark+=1;
                    } else {
                        cout << "Wrong! The correct answer is " << realans1 << endl;
                    }

                    cout<<"What is the capital city of Thailand?";
                    string realans2 = "Bangkok";
                    string userans2;
                    cin >> userans2;
                    if (userans2 == realans2) {
                        cout << "Correct!\n";
                        quiz1mark+=1;
                    } else {
                        cout << "Wrong! The correct answer is " << realans1 << endl;
                    }

                    cout<<"What is the capital city of Singapore?";
                    string realans3 = "Singapore";
                    string userans3;
                    cin >> userans3;
                    if (userans3 == realans3) {
                        cout << "Correct!\n";
                        quiz1mark+=1;
                    } else {
                        cout << "Wrong! The correct answer is " << realans1 << endl;
                    }

                    if(quiz1mark>=2) {
                        cout<<"You are welcome from the LOVE room."<<endl;
                        cout<<"You are so in love and cannot stop missing the princess, There are 2 ways to heal this,"<<endl;
                        power+=2;
                        cout<<"You gain 2 powers\n";
                        int lovechoice;
                        do{
                            cout << "\n(Please type the number only )\n";
                            cout << "1. Get your heart out\n";
                            cout << "2. Escape the room.\n";
                            cout << "Enter your choice: ";

                            cin>>lovechoice;

                            if(lovechoice==1) {

                                cout << "Your heart is breaking and dying and the story reach the end." << endl;
                            }else if(lovechoice==2) {
                                cout << "You are so brilliant, but you had to use 1 health to heal your wound of love." << endl;
                                health-=1;
                            }}
                        while (lovechoice!=1 && lovechoice!=2);


                    }else {
                        cout<<"You are welcome from the CRUEL room."<<endl;
                        power-=1;
                        cout<<"You lose 1 power\n";
                        cout<<"But we are not cruel enough. You need to be good luck as we will give you another chance to boost your power to fight the monster at the end.\n";
                        cout<<"Just think wisefully before you choose.\n";

                        int lastchoice;
                        do{
                        cout << "\n(Please type the number only )\n";
                        cout << "1. Go outdise of the castle.\n";
                        cout << "2. Face the monster NOW!!!\n";
                        cout << "Enter your choice: ";

                        cin>>lastchoice;

                        if(lastchoice==2) {

                            PowerBoost boost;
                            cout << "We love your braveness, and we will give you a chance to boost your current power." << endl;
                            cout << "Your power is now" << boost.boostpower(power) << endl;
                            power=boost.boostpower(power);

                        }else if(lastchoice==1) {
                            cout << "You lose because you are selfish." << endl;
                        }}
                        while (lastchoice!=1 && lastchoice!=2);

                    }

                }
            }


    }while (choice1 != 1 && choice1 != 2);


#(TutorialsPoint, n.d.)
    ofstream myfile("Game.txt");

    if(myfile.is_open()) {
        cout<<"file opened successfully\n";
    }
    else {
        myfile<<"Error";
    }
    myfile<<"Health : "<< health <<"\nPower: "<<power;
    myfile.close();


    ifstream readsavefile;
    readsavefile.open("Game.txt");
    string line;
    while (getline(readsavefile, line)) {
        cout<<line;
    }
    readsavefile.close();

    return 0;
}

