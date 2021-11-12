

#include <iostream>
#include <math.h>
#include <sstream>
#include <string>
#include <unistd.h>
#include <chrono>
#include <thread>
#include <map>
#include <fstream>
using namespace std;
int endGame(int y){
  if(y==0){
  cout << " _____                         ____                 \n"
        " / ____|                       / __ \\                \n"
        "| |  __  __ _ _ __ ___   ___  | |  | |_   _____ _ __ \n"
        "| | |_ |/ _` | '_ ` _ \\ / _ \\ | |  | \\ \\ / / _ \\ '__|\n"
        "| |__| | (_| | | | | | |  __/ | |__| |\\ V /  __/ |   \n"
        " \\_____|\\__,_|_| |_| |_|\\___|  \\____/  \\_/ \\___|_| " << endl;
    return 0;
  }
}
int newLines(){
  for(int p = 0; p < 10; p++){
    cout << endl;
  }
}
int main() {
  int lives = 2;
 cout << " / ____|         | |                  |  ____|                         \n"
         "| |    _   _  ___| | ___  _ __   ___  | |__   ___  ___ __ _ _ __   ___ \n"
         "| |   | | | |/ __| |/ _ \\| '_ \\ / _ \\ |  __| / __|/ __/ _` | '_ \\ / _ \\\n"
         "| |___| |_| | (__| | (_) | |_) |  __/ | |____\\__ \\ (_| (_| | |_) |  __/\n"
         " \\_____\\__, |\\___|_|\\___/| .__/ \\___| |______|___/\\___\\__,_| .__/ \\___|\n"
         "        __/ |            | |                               | |         \n"
         "       |___/             |_|                               |_|         " << endl;
cout << "Type your name to continue" << endl;
string name;
cin >> name;
  newLines();
cout << "         _......._\n"
        "        .-'.'.'.'.'.'.`-.\n"
        "      .'.'.'.'.'.'.'.'.'.`.\n"
        "     /.'.'               '.\\\n"
        "     |.'    _.--...--._     |\n"
        "     \\    `._.-.....-._.'   /\n"
        "     |     _..- .-. -.._   |\n"
        "  .-.'    `.   ((@))  .'   '.-.\n"
        " ( ^ \\      `--.   .-'     / ^ )\n"
        "  \\  /         .   .       \\  /\n"
        "  /          .'     '.  .-    \\\n"
        " ( _.\\    \\ (_`-._.-'_)    /._\\)\n"
        "  `-' \\   ' .--.          / `-'\n"
        "      |  / /|_| `-._.'\\   |\n"
        "      |   |       |_| |   /-.._\n"
        "  _..-\\   `.--.______.'  |\n"
        "       \\       .....     |\n"
        "        `.  .'      `.  /\n"
        "          \\           .'\n"
        "           `-..___..-`" << endl;
  cout << "you are now ready for your adventure, " << name << endl;
  cout << "type 'ok'  to proceed" << endl;
  string var;
  cin >> var;
  newLines();
  cout << "You are stuck inside the Cyclope's cave! Oh no! You have a few options of what to do:" << endl;
  cout << "1. Are you a chicken? Fight that ugly troll!" << endl;
  cout << "2. Play it smart, find a way to sneak out. You are a a wise Odysseus, remember!" << endl;
  cout << "3. Make a bargain with the creature." << endl;
  cout << "4. Hitchhike on a sheep" << endl;
  cout << "input the index of your choice!" << endl;
  int num1;
  cin >> num1;

  if(num1 == 1){
    newLines();
    cout << "Pick your weapon" << endl;
    cout << "     °. AXE - A mighty power used for ages. Type AXE to claim." << endl;
    cout << "    /'-./\\_\n"
            "   :    ||,>\n"
            "    \\.-'||\n"
            "        ||\n"
            "        ||\n"
            "        ||" << endl;
            cout << endl;
    cout << "     °. SWORD - A mighty power used for ages. Type SWORD to claim." << endl;
    cout << "[]++++||=======>" << endl << endl;
    cout << "     °. PEN We all know the pen is almighty stronger than the sword. Type PEN to claim" << endl;
    cout << "\n"
            "                                 \n"
            "         .=======================ooooooo\n"
            " ___   ,'    \\_________________________________________\n"
            "/   /-/   dP  /                           ////////////  ''--..._\n"
            "\\___\\-\\  dP   \\                           \\\\\\\\\\\\\\\\\\\\\\\\  __..--'\n"
            "       `---------------------------------''''''''''''''\n"
            "\n"
            "..." << endl;
    string val12;
    cin >> val12;
    if(val12 == "AXE"){
      newLines();
      cout << "Are you some lumberjack? Axes are for trees not Cyclopes. You got eaten." << endl;
      endGame(0);
      return 0;
    }
    if(val12 == "PEN"){
      newLines();
      cout << "Just because Dimitri is writing this for an english class doesn't mean you must pick a pen. You are the noble Greek! The pen was not strong enough." << endl;
      endGame(0);
      return 0;
    }
    if(val12 == "SWORD"){
      newLines();
      cout << "Nice, you picked the right one, now lets get you off this island." << endl;
      cout << "            /|~~~   \n"
              "           ///|      \n"
              "         /////|      \n"
              "       ///////|      \n"
              "     /////////|      \n"
              "   \\==========|===/  \n"
              "~~~~~~~~~~~~~~~~~~~~~" << endl;
      cout << "Type OK to proceed" << endl;
      cout << "You are so elated, you drop your sword and are running towards the ship when you see him again! That monster may be injured, but he sure does want revenge. Quick, you have to make a split second decision to survive." << endl;
      cout << "     °. Fight like you did last time, you got this. Plus, he is already injured from your blow last time you fought. Type FIGHT to pick" << endl;
      cout << "     °. Don't let your ego get in the way of your life. Try to hop on the ship quickly and sail off. Type FLIGHT to pick." << endl;
      string var55;
      cin >> var55;
      newLines();
      if(var55 == "FIGHT"){
        cout << "You were on the verge of greatness, but then you realised that you had dropped your sword while running here. Oh no! You have finally met your match. You struggle and die." << endl;
        endGame(0);
        return 0;
      }
      if(var55 == "FLIGHT"){
        cout << "You were not fast enough, you hopped on your ship only to be destroyed by the mighty animal. You die" << endl;
        endGame(0);
        return 0;
      }

    }
  } if(num1 == 2){
    newLines();
    lives --;
    cout << "This isn't math class, you cant be smart here. You lose" << endl;
    endGame(0);
    return 0;
    }
  if(num1 == 3){
    newLines();
    cout << "What bargain do you make?" << endl;
    cout << "    °. Offer him a cookie? Type COOKIE to pick." <<endl;
    cout << "    °. Bargain some of your men and he MAY spare you. Type MEN to pick." << endl;
    string var112;
    cin >> var112;
    if(var112 == "COOKIE"){
      cout << "He eats the cookie and loves it. You use this as a chance to sneak out." << endl;
      cout << "  ,-.\n"
              " _(*_*)_\n"
              "(_  o  _)\n"
              "  / o \\\n"
              " (_/ \\_)" << endl;

      cout << "You have little energy left, you must find food soon. This is new land and you are alone. You men got separated from you, and you must act fast!" << endl;
      cout << "     °.Eat a random leaf you see. It could be food. Type EAT to pick" << endl;
      cout << "     °.Try to find an animal that you can butcher quickly. You only have so much time. Type SEARCH to pick" << endl;
      string ol;
      cin >> ol;
      if(ol == "EAT"){
        cout << "The leaf was poisonous, you die." << endl;
        cout << "   . |`|/| .         \n"
                "   |\\|\\|'|/|         \n"
                ".--'-\\`|/-''--.      \n"
                " \\`-._\\|./.-'/       \n"
                "  >`-._|/.-'<         \n"
                " '~|/~~|~~\\|~'       \n"
                "       |" << endl;
        endGame(0);
        return 0;
      }
      if(ol == "SEARCH"){
        cout << "Tik tok, you searched for over an hour and found nothing. You died of starvation." << endl;
        endGame(0);
        return 0;
      }
    }
    if(var112 == "MEN"){
      cout << "Your men are mad that you turned on them. They kill you on the spot. You die." << endl;
      endGame(0);
      return 0;
    }
  }
  if(num1 == 4){
    newLines();
    cout <<  "           __  _\n"
             "       .-.'  `; `-._  __  _\n"
             "      (_,         .-:'  `; `-._\n"
             "    ,'o\"(        (_,           )\n"
             "   (__,-'      ,'o\"(            )>\n"
             "      (       (__,-'            )\n"
             "       `-'._.--._(             )\n"
             "          |||  |||`-'._.--._.-'\n"
             "                     |||  |||" << endl;
    cout << "You hitchhiked a sheep, nice job. You exited the tunnel and found a way to escape. You are walking to your boat and want to leave." << endl;
    cout << "            /|~~~   \n"
            "           ///|      \n"
            "         /////|      \n"
            "       ///////|      \n"
            "     /////////|      \n"
            "   \\==========|===/  \n"
            "~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "You are so elated, you drop your sword and are running towards the ship when you see him again! That monster may be injured, but he sure does want revenge. Quick, you have to make a split second decision to survive." << endl;
    cout << "     °.Fight like you did last time, you got this. . Type FIGHT to pick" << endl;
    cout << "     °.Don't let your ego get in the way of your life. Try to hop on the ship quickly and sail off. Type FLIGHT to pick." << endl;
    string var55;
    cin >> var55;
    newLines();
    if(var55 == "FIGHT"){
      cout << "To your advantage, you see a flaming stick, use that, and blind the beast!" << endl;
      cout << "You blinded him, tell him you are Nobody, and sail off. You have one more decision to make." << endl;
      cout << "     °. Sail away normally and proceed with life. Type LIFE to claim." << endl;
      cout << "     °. Shout your name in victory! Type SHOUT to claim." << endl;
      string ba;
      cin >> ba;
      newLines();
      if(ba == "LIFE"){
        newLines();
        cout << "Didn't you read the book? You must yell your name, as the ego man that you are. You drown." << endl;
        endGame(0);
        return 0;
      }
      if(ba == "SHOUT"){
        newLines();
        cout << "Nice Job, YOU WIN. YOU SUCCEEDED THE MISSION." << endl;
        cout << "                       /\\\n"
                "        _/\\           /  \\\n"
                "    _  /   \\         /    \\/\\\n"
                "   / \\/   _ \\     /\\/\\  _  _/\\\n"
                "  /   \\_ / \\/\\_/\\/_/  \\/ \\/   \\\n"
                " /\\/\\   \\_   /   \\/            \\\n"
                "/    \\___/\\ /     \\             \\\n"
                "           \\       \\             \\\n"
                "           .-\"---.  \\             \\\n"
                "__..---.. /       \\  \\             \\\n"
                "         /\\___.-'./\\''--..____..--''\n"
                "`-.      \\/ O) (O \\/ ''--.._\n"
                "    __    |  (_)  |         _.-'-._\n"
                "   / /  __/\\\\___//\\__ ..--''-._\n"
                "   | (_/\\ \\/`---'\\/ /\\         `-._\n"
                "_.-\\ \\/  \\  \\   /  /  \\.-'-._\n"
                "   /\\|   /  -| |-  \\   \\     `-._\n"
                "  | ||  /\\  -| |-  /\\   \\        `-.\n"
                "   \\/|_/ |  -|_\\-  |/   /\n"
                "   \\ \\   /  /B_B\\  \\\\  /\n"
                "   / (   \\_/  _  \\_/ \\/\n"
                ".__\\ \\   /    |    \\_/\n"
                "   ) /''-| __ | __ |\n"
                "   |(    \\    |    /---...___\n"
                "   /|    /____|____\\         '-._\n"
                "   ||     |   ||   |\n"
                "   \\\\     ///\\\\//\\\\\\\n"
                "jro \\|   oOO(_)(_)OOo" << endl;
      }
    }
    if(var55 == "FLIGHT"){
      newLines();
      cout << "You were not fast enough, you hopped on your ship only to be destroyed by the mighty animal. You die" << endl;
      endGame(0);
    }
  }

}


