#include <iostream>
#include <stdlib.h>

#include "Kindergarden.h"
#include "Employes.h"
#include "Information.h"
#include "Timetable.h"
#include <locale.h>

using namespace std;
int main() {
    setlocale(LC_ALL, ".UTF8");

    
    //Employes Personnel
    //Personnel Educators;
    //Educators.setNameEmp("Dahlia Larson");
    //Educators.setMailEmp("antoshakrasov@goldenguy.gq");
    //Educators.setNumEmp("+380 91 753 3371");

    Personnel Educators1;
    Educators1.setNameEmp("Oakley Brewer");
    Educators1.setMailEmp("odegard@roidirt.com");
    Educators1.setNumEmp("+380 50 992 8095");

    Personnel Educators2;
    Educators2.setNameEmp("Frances Thomson");
    Educators2.setMailEmp("mafiak1fry@scdhn.com");
    Educators2.setNumEmp("+380 50 359 2295");

    Personnel Educators3;
    Educators3.setNameEmp("India Barclay");
    Educators3.setMailEmp("thetubster@eiibps.com");
    Educators3.setNumEmp("+380 67 685 2744");



    Personnel Cooks;
    Cooks.setNameEmp("Samira John");
    Cooks.setMailEmp("brett407@tcoaee.com");
    Cooks.setNumEmp("+380 97 405 6956");

    Personnel Cooks1;
    Cooks1.setNameEmp("Rosalie Jarvis");
    Cooks1.setMailEmp("oksanasoloma15@lsadinl.com");
    Cooks1.setNumEmp("+380 98 515 2629");

    Personnel Cooks2;
    Cooks2.setNameEmp("Elliot Mueller");
    Cooks2.setMailEmp("grittv@freeallapp.com");
    Cooks2.setNumEmp("+380 67 472 2403");

    Personnel Cooks3;
    Cooks3.setNameEmp("Montana Macfarlane");
    Cooks3.setMailEmp("palhacito@hasevo.com");
    Cooks3.setNumEmp("+380 50 471 6867");




    Personnel Nurses;
    Nurses.setNameEmp("Hayley Spooner");
    Nurses.setMailEmp("mattywg@eluvit.com");
    Nurses.setNumEmp("+380 97 761 3768");

    Personnel Nurses1;
    Nurses1.setNameEmp("Raisa Dickerson");
    Nurses1.setMailEmp("valerishkurato@hasevo.com");
    Nurses1.setNumEmp("+380 67 110 1915");

    Personnel Nurses2;
    Nurses2.setNameEmp("Kerri Cordova");
    Nurses2.setMailEmp("nrhareiner@rheiop.com");
    Nurses2.setNumEmp("+380 50 695 5714");

    Personnel Nurses3;
    Nurses3.setNameEmp("Oliwia Li");
    Nurses3.setMailEmp("summerguys@emailfacil.ml");
    Nurses3.setNumEmp("+380 67 812 8351");

    //Managers
    Managers Director;
    Director.setNameEmp("Lillie-Mai Odonnell");
    Director.setMailEmp("samuelc1997@victorysvg.com");
    Director.setNumEmp("+380 68 660 7820");

    Managers Manager;
    Manager.setNameEmp("Lemar Summers");
    Manager.setMailEmp("inky2dinky@adaov.com");
    Manager.setNumEmp("+380 99 428 6246");

    Managers Manager1;
    Manager1.setNameEmp("Alfie Gould");
    Manager1.setMailEmp("agrojil@creamstrn.store");
    Manager1.setNumEmp("+380 96 047 3899");


    //Information Groups
    GroupsScore Small;
    Small.setmembersOfGroup("8");

    GroupsScore Middle;
    Middle.setmembersOfGroup("9");

    GroupsScore High;
    High.setmembersOfGroup("10");




    GroupsInfo Small1;
    Small1.setnameСhild("Clinton Leach");
    Small1.setageChild("11/01/2021");
    Small1.setgroupChild("The smallest Group 1-2 years");

    GroupsInfo Small2;
    Small2.setnameСhild("Arwel Deleon");
    Small2.setageChild("21/05/2021");
    Small2.setgroupChild("The smallest Group 1-2 years");


    GroupsInfo Small3;
    Small3.setnameСhild("Thierry Blundell");
    Small3.setageChild("26/05/2021");
    Small3.setgroupChild("The smallest Group 1-2 years");

    GroupsInfo Small4;
    Small4.setnameСhild("Randy Magana");
    Small4.setageChild("25/09/2021");
    Small4.setgroupChild("The smallest Group 1-2 years");

    GroupsInfo Small5;
    Small5.setnameСhild("Rae Avalos");
    Small5.setageChild("17/03/2020");
    Small5.setgroupChild("The smallest Group 1-2 years");

    GroupsInfo Small6;
    Small6.setnameСhild("Joann Dougherty");
    Small6.setageChild("17/01/2021");
    Small6.setgroupChild("The smallest Group 1-2 years");

    GroupsInfo Small7;
    Small7.setnameСhild("Callam Alvarado");
    Small7.setageChild("26/02/2021");
    Small7.setgroupChild("The smallest Group 1-2 years");

    GroupsInfo Small8;
    Small8.setnameСhild("Jazmyn Paul");
    Small8.setageChild("12/05/2021");
    Small8.setgroupChild("The smallest Group 1-2 years");


    GroupsInfo Middle1;
    Middle1.setnameСhild("Leonardo Boyce");
    Middle1.setageChild("22/09/2017");
    Middle1.setgroupChild("Middle Group 3-4 years");

    GroupsInfo Middle2;
    Middle2.setnameСhild("Kareena Novak");
    Middle2.setageChild("24/03/2018");
    Middle2.setgroupChild("Middle Group 3-4 years");

    GroupsInfo Middle3;
    Middle3.setnameСhild("Zoey Morales");
    Middle3.setageChild("06/05/2019");
    Middle3.setgroupChild("Middle Group 3-4 years");

    GroupsInfo Middle4;
    Middle4.setnameСhild("Alejandro Odom");
    Middle4.setageChild("05/07/2019");
    Middle4.setgroupChild("Middle Group 3-4 years");

    GroupsInfo Middle5;
    Middle5.setnameСhild("Joseph Haynes");
    Middle5.setageChild("12/07/2019");
    Middle5.setgroupChild("Middle Group 3-4 years");

    GroupsInfo Middle6;
    Middle6.setnameСhild("Delia O'Gallagher");
    Middle6.setageChild("20/07/2018");
    Middle6.setgroupChild("Middle Group 3-4 years");

    GroupsInfo Middle7;
    Middle7.setnameСhild("Aaliya Mcintosh");
    Middle7.setageChild("02/09/2017");
    Middle7.setgroupChild("Middle Group 3-4 years");

    GroupsInfo Middle8;
    Middle8.setnameСhild("Tayla Mclean");
    Middle8.setageChild("24/09/2018");
    Middle8.setgroupChild("Middle Group 3-4 years");

    GroupsInfo Middle9;
    Middle9.setnameСhild("Charlize Carlson");
    Middle9.setageChild("30/10/2019");
    Middle9.setgroupChild("Middle Group 3-4 years");



    GroupsInfo High1;
    High1.setnameСhild("Melvin Schwartz");
    High1.setageChild("28/07/2014");
    High1.setgroupChild("The oldest Group 5-7 years");

    GroupsInfo High2;
    High2.setnameСhild("Angelina Whitaker");
    High2.setageChild("26/08/2014");
    High2.setgroupChild("The oldest Group 5-7 years");

    GroupsInfo High3;
    High3.setnameСhild("Clarice Ridley");
    High3.setageChild("20/02/2015");
    High3.setgroupChild("The oldest Group 5-7 years");

    GroupsInfo High4;
    High4.setnameСhild("Vihaan Avalos");
    High4.setageChild("14/08/2015");
    High4.setgroupChild("The oldest Group 5-7 years");

    GroupsInfo High5;
    High5.setnameСhild("Nadia Barclay");
    High5.setageChild("14/11/2015");
    High5.setgroupChild("The oldest Group 5-7 years");

    GroupsInfo High6;
    High6.setnameСhild("Daniaal Driscoll");
    High6.setageChild("303/04/2016");
    High6.setgroupChild("The oldest Group 5-7 years");

    GroupsInfo High7;
    High7.setnameСhild("Samira Holder");
    High7.setageChild("30/03/2017");
    High7.setgroupChild("The oldest Group 5-7 years");

    GroupsInfo High8;
    High8.setnameСhild("Nathan Lang");
    High8.setageChild("16/08/2017");
    High8.setgroupChild("The oldest Group 5-7 years");

    GroupsInfo High9;
    High9.setnameСhild("Paddy Crosby");
    High9.setageChild("18/09/2017");
    High9.setgroupChild("The oldest Group 5-7 years");

    GroupsInfo High10;
    High10.setnameСhild("Stephan Costa");
    High10.setageChild("20/07/2016");
    High10.setgroupChild("The oldest Group 5-7 years");

    //
    Employment Education;
    Education.setEmplInfo("Basics of Ariphmetics");
    Employment Education1;
    Education1.setEmplInfo("Basics of Language");
    Employment Education2;
    Education2.setEmplInfo("Basics of Logic");

    /*Employment Games;
    Games.setEmplInfo("Cat and mouse");
    Employment Games1;
    Games1.setEmplInfo("Water pistols");
    Employment Games2;
    Games2.setEmplInfo("Centipedes");
    Employment Games3;
    Games3.setEmplInfo("Earth, water, wind");
    Employment Games4;
    Games4.setEmplInfo("Cold-hot");
    Employment Games5;
    Games5.setEmplInfo("Frisbee");
    Employment Games6;
    Games6.setEmplInfo("Catch");*/

    /*Employment Performances;
    Performances.setEmplInfo("New Year");
    Employment Performances1;
    Performances1.setEmplInfo("Saint Nicholas");
    Employment Performances2;
    Performances2.setEmplInfo("Cristmas");
    Employment Performances3;
    Performances3.setEmplInfo("Easter");
    Employment Performances4;
    Performances4.setEmplInfo("holy spring");*/


    Breakfast Smallgroup;
    Smallgroup.setfoodInfo("Milk vermicelli");
    Breakfast Smallgroup1;
    Smallgroup1.setfoodInfo("omelet with cheese");
    Breakfast Smallgroup2;
    Smallgroup2.setfoodInfo("Liver pate with potatoes");
    Breakfast Smallgroup3;
    Smallgroup3.setfoodInfo("Oatmeal");
    Breakfast Smallgroup4;
    Smallgroup4.setfoodInfo("Cheese sandwich");

    Breakfast Middlegroup;
    Middlegroup.setfoodInfo("Semolina porridge");
    Breakfast Middlegroup1;
    Middlegroup1.setfoodInfo("omelet with cheese");
    Breakfast Middlegroup2;
    Middlegroup2.setfoodInfo("omelet with cabbage");
    Breakfast Middlegroup3;
    Middlegroup3.setfoodInfo("Oatmeal");
    Breakfast Middlegroup4;
    Middlegroup4.setfoodInfo("Rice pudding");

    Breakfast Highgroup;
    Highgroup.setfoodInfo("Pear pudding");
    Breakfast Highgroup1;
    Highgroup1.setfoodInfo("Semolina porridge");
    Breakfast Highgroup2;
    Highgroup2.setfoodInfo("Liver pate with potatoes");
    Breakfast Highgroup3;
    Highgroup3.setfoodInfo("Banana pudding");
    Breakfast Highgroup4;
    Highgroup4.setfoodInfo("Cheese sandwich");



    Sleeptime Smallgr;
    Smallgr.setSleepInfo("From 11 to 15");

    Sleeptime Middlegr;
    Middlegr.setSleepInfo("From 11 to 14");

    Sleeptime Highgr;
    Highgr.setSleepInfo("From 12 to 14");


    //interface:

start:
    wcout << L"┌─────────────────────────┐" << endl;
    wcout << L"│         Menu            │" << endl;
    wcout << L"└─────────────────────────┘" << endl;

    wcout << L"┌───────────┬──────────────┐" << endl;
    wcout << L"│  Press 1  │  Employes    │" << endl;
    wcout << L"├───────────┼──────────────┤" << endl;
    wcout << L"│  Press 2  │ Information  │" << endl;
    wcout << L"├───────────┼──────────────┤" << endl;
    wcout << L"│  Press 3  │  Timetable   │" << endl;
    wcout << L"└───────────┴──────────────┘" << endl;

cstart:
    int press;
    cin >> press;

    if (press == 1) {
        system("clear");
        goto employes; //Content
    }
    else if (press == 2) {
        system("clear");
        goto information; // Employees
    }
    else if (press == 3) {
        system("clear");
        goto timetable;
    }
    else {
        wcout << L"┌──────────────────────────────┐" << endl;
        wcout << L"│   Enter the currect number   │" << endl;
        wcout << L"└──────────────────────────────┘" << endl;
        goto cstart;
    }

    // content;
employes:
    wcout << L"┌─────────────────────────┐" << endl;
    wcout << L"│        Employes         │" << endl;
    wcout << L"└─────────────────────────┘" << endl;
    wcout << L"┌───────────┬──────────────┐" << endl;
    wcout << L"│  Press 1  │  Personel    │" << endl;
    wcout << L"├───────────┼──────────────┤" << endl;
    wcout << L"│  Press 2  │  Managers    │" << endl;
    wcout << L"└───────────┴──────────────┘" << endl;
    wcout << L"┌──────────────────────────────┐" << endl;
    wcout << L"│Enter 0 to return to the menu │"<< endl;
    wcout << L"└──────────────────────────────┘" << endl;

restart:
    int pressCont;
    cin >> pressCont;

    if (pressCont == 0) {
        system("clear");
        goto start;
    }
    else if (pressCont == 1) {
        system("clear");
        wcout << L"┌─────────────────────────┐" << endl;
        wcout << L"│        Personel         │" << endl;
        wcout << L"└─────────────────────────┘" << endl;
        wcout << L"┌───────────┬──────────────┐" << endl;
        wcout << L"│  Press 1  │  Educators   │" << endl;
        wcout << L"├───────────┼──────────────┤" << endl;
        wcout << L"│  Press 2  │   Cookers    │" << endl;
        wcout << L"├───────────┼──────────────┤" << endl;
        wcout << L"│  Press 3  │    Nurse     │" << endl;
        wcout << L"└───────────┴──────────────┘" << endl;
        wcout << L"┌──────────────────────────────┐" << endl;
        wcout << L"│Enter 0 to return to the menu │" << endl;
        wcout << L"└──────────────────────────────┘" << endl;
        goto personel;
    }
    else if (pressCont == 2) {
        system("clear");
        wcout << L"┌─────────────────────────┐" << endl;
        wcout << L"│        Managers         │" << endl;
        wcout << L"└─────────────────────────┘" << endl;
        wcout << L"┌───────────┬──────────────┐" << endl;
        wcout << L"│  Press 1  │  Direktor    │" << endl;
        wcout << L"├───────────┼──────────────┤" << endl;
        wcout << L"│  Press 2  │  Manager     │" << endl;
        wcout << L"└───────────┴──────────────┘" << endl;
        wcout << L"┌──────────────────────────────┐" << endl;
        wcout << L"│Enter 0 to return to the menu │" << endl;
        wcout << L"└──────────────────────────────┘" << endl;
        goto managers;
    }
    else {
        wcout << L"┌──────────────────────────────┐" << endl;
        wcout << L"│   Enter the currect number   │" << endl;
        wcout << L"└──────────────────────────────┘" << endl;
        goto restart;
    }

personel:
    int pressP;
    cin >> pressP;

    if (pressP == 0) {
        system("clear");
        goto start;
    }
    else if (pressP == 1) {
        system("clear");
        wcout << L"┌─────────────────────────┐" << endl;
        wcout << L"│        Educators        │" << endl;
        wcout << L"└─────────────────────────┘" << endl;
        wcout << L"┌───────────┬─────────────────────┐" << endl;
        wcout << L"│  Press 1  │  Educator Dahlia    │" << endl;
        wcout << L"├───────────┼─────────────────────┤" << endl;
        wcout << L"│  Press 2  │  Educator Oakley    │" << endl;
        wcout << L"├───────────┼─────────────────────┤" << endl;
        wcout << L"│  Press 3  │  Educator Frances   │" << endl;
        wcout << L"├───────────┼─────────────────────┤" << endl;
        wcout << L"│  Press 4  │  Educator India     │" << endl;
        wcout << L"└───────────┴─────────────────────┘" << endl;
        wcout << L"┌──────────────────────────────┐" << endl;
        wcout << L"│Enter 0 to return to the menu │" << endl;
        wcout << L"└──────────────────────────────┘" << endl;
        goto educator;
    }
    else if (pressP == 2) {
        system("clear");
        wcout << L"┌─────────────────────────┐" << endl;
        wcout << L"│        Cookers          │" << endl;
        wcout << L"└─────────────────────────┘" << endl;
        wcout << L"┌───────────┬─────────────────────┐" << endl;
        wcout << L"│  Press 1  │  Cookers  Samira    │" << endl;
        wcout << L"├───────────┼─────────────────────┤" << endl;
        wcout << L"│  Press 2  │  Cookers Rosalie    │" << endl;
        wcout << L"├───────────┼─────────────────────┤" << endl;
        wcout << L"│  Press 3  │  Cookers Elliot     │" << endl;
        wcout << L"├───────────┼─────────────────────┤" << endl;
        wcout << L"│  Press 4  │  Cookers Montana    │" << endl;
        wcout << L"└───────────┴─────────────────────┘" << endl;
        wcout << L"┌──────────────────────────────┐" << endl;
        wcout << L"│Enter 0 to return to the menu │" << endl;
        wcout << L"└──────────────────────────────┘" << endl;
        goto cooks;
    }
    else if (pressP == 3) {
        system("clear");
        wcout << L"┌─────────────────────────┐" << endl;
        wcout << L"│        Nurses           │" << endl;
        wcout << L"└─────────────────────────┘" << endl;
        wcout << L"┌───────────┬──────────────────┐" << endl;
        wcout << L"│  Press 1  │  Nurse Hayley    │" << endl;
        wcout << L"├───────────┼──────────────────┤" << endl;
        wcout << L"│  Press 2  │  Nurse Raisa     │" << endl;
        wcout << L"├───────────┼──────────────────┤" << endl;
        wcout << L"│  Press 3  │  Nurse Kerri     │" << endl;
        wcout << L"├───────────┼──────────────────┤" << endl;
        wcout << L"│  Press 4  │  Nurse Olivia    │" << endl;
        wcout << L"└───────────┴──────────────────┘" << endl;
        wcout << L"┌──────────────────────────────┐" << endl;
        wcout << L"│Enter 0 to return to the menu │" << endl;
        wcout << L"└──────────────────────────────┘" << endl;
        goto nurse;
    }
    else {
        wcout << L"┌──────────────────────────────┐" << endl;
        wcout << L"│   Enter the currect number   │ " << endl;
        wcout << L"└──────────────────────────────┘" << endl;
        goto personel;
    }

educator:
    int pressJ;
    cin >> pressJ;
    if (pressJ == 0) {
        system("clear");
        goto start;
    }
    else if (pressJ == 1) {
        system("clear");
        wcout << L"┌────────────────────────────────────────────────────────────────────────────────────┐" << endl;
        wcout << L"│   Educator Dahlia was kicked from the Kindergarden because she had bad feedbacks   │ " << endl;
        wcout << L"└────────────────────────────────────────────────────────────────────────────────────┘" << endl;
        //cout << "Name: " << Educators.getNameEmp() << ";" << endl;
        //cout << "Email: " << Educators.getMailEmp() << ";" << endl;
        //cout << "Phone Number: " << Educators.getNumEmp() << ";" << endl;
        wcout << L"┌──────────────────────────────┐" << endl;
        wcout << L"│Enter 0 to return to the menu │" << endl;
        wcout << L"└──────────────────────────────┘" << endl;
        goto educator;
    }
    else if (pressJ == 2) {
        system("clear");

        wcout << L"┌─────────────────────────────────┐" << endl;
        wcout << L"│";
        cout << Educators1.getNameEmp() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│" ;
        cout << Educators1.getMailEmp() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << Educators1.getNumEmp() << endl;
        wcout << L"└─────────────────────────────────┘" << endl;
        wcout << L"┌──────────────────────────────┐" << endl;
        wcout << L"│Enter 0 to return to the menu │" << endl;
        wcout << L"└──────────────────────────────┘" << endl;
        goto educator;
    }
    else if (pressJ == 3) {
        system("clear");
        wcout << L"┌─────────────────────────────────┐" << endl;
        wcout << L"│";
        cout << Educators2.getNameEmp() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << Educators2.getMailEmp() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << Educators2.getNumEmp() << endl;
        wcout << L"└─────────────────────────────────┘" << endl;
        wcout << L"┌──────────────────────────────┐" << endl;
        wcout << L"│Enter 0 to return to the menu │" << endl;
        wcout << L"└──────────────────────────────┘" << endl;
        goto educator;
    }
    else if (pressJ == 4) {
        system("clear");
        wcout << L"┌─────────────────────────────────┐" << endl;
        wcout << L"│";
        cout << Educators2.getNameEmp() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << Educators2.getMailEmp() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << Educators2.getNumEmp() << endl;
        wcout << L"└─────────────────────────────────┘" << endl;
        wcout << L"┌──────────────────────────────┐" << endl;
        wcout << L"│Enter 0 to return to the menu │" << endl;
        wcout << L"└──────────────────────────────┘" << endl;
        goto educator;
    }
    else {
        wcout << L"┌──────────────────────────────┐" << endl;
        wcout << L"│   Enter the currect number   │ " << endl;
        wcout << L"└──────────────────────────────┘" << endl;
        goto educator;
    }

cooks:
    int pressa;
    cin >> pressa;
    if (pressa == 0) {
        system("clear");
        goto start;
    }
    else if (pressa == 1) {
        system("clear");
        wcout << L"┌─────────────────────────────────┐" << endl;
        wcout << L"│";
        cout << Cooks.getNameEmp() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << Cooks.getMailEmp() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << Cooks.getNumEmp() << endl;
        wcout << L"└─────────────────────────────────┘" << endl;
        wcout << L"┌──────────────────────────────┐" << endl;
        wcout << L"│Enter 0 to return to the menu │" << endl;
        wcout << L"└──────────────────────────────┘" << endl;
        goto cooks;
    }
    else if (pressa == 2) {
        system("clear");
        wcout << L"┌──────────────────────────────────────────────────────────────────────────────────────────────────────────────┐" << endl;
        wcout << L"│   Coker Rosalie has problem with her Health so she is taking a break, to help her u can write on her Email   │ " << endl;
        wcout << L"└──────────────────────────────────────────────────────────────────────────────────────────────────────────────┘" << endl;
        wcout << L"┌───────────────────────────┐" << endl;
        cout << Cooks1.getMailEmp() << endl;
        wcout << L"└───────────────────────────┘" << endl;
   /*     cout << "Coker Rosalie has problem with her Health so she is taking a break, to help her u can write on her Email " << Cooks1.getMailEmp() << endl;*/
        /*cout << "Name: " << Cooks1.getNameEmp() << ";" << endl;
        cout << "Email: " << Cooks1.getMailEmp() << ";" << endl;
        cout << "Phone Number: " << Cooks1.getNumEmp() << ";" << endl;*/
        wcout << L"┌──────────────────────────────┐" << endl;
        wcout << L"│Enter 0 to return to the menu │" << endl;
        wcout << L"└──────────────────────────────┘" << endl;
        goto cooks;
    }
    else if (pressa == 3) {
        system("clear");
        wcout << L"┌─────────────────────────────────┐" << endl;
        wcout << L"│";
        cout << Cooks2.getNameEmp() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << Cooks2.getMailEmp() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << Cooks2.getNumEmp() << endl;
        wcout << L"└─────────────────────────────────┘" << endl;
        wcout << L"┌──────────────────────────────┐" << endl;
        wcout << L"│Enter 0 to return to the menu │" << endl;
        wcout << L"└──────────────────────────────┘" << endl;
        goto cooks;
    }
    else if (pressa == 4) {
        system("clear");
        wcout << L"┌─────────────────────────────────┐" << endl;
        wcout << L"│";
        cout << Cooks3.getNameEmp() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << Cooks3.getMailEmp() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << Cooks3.getNumEmp() << endl;
        wcout << L"└─────────────────────────────────┘" << endl;
        wcout << L"┌──────────────────────────────┐" << endl;
        wcout << L"│Enter 0 to return to the menu │" << endl;
        wcout << L"└──────────────────────────────┘" << endl;
        goto cooks;
    }
    else {
        wcout << L"┌──────────────────────────────┐" << endl;
        wcout << L"│   Enter the currect number   │ " << endl;
        wcout << L"└──────────────────────────────┘" << endl;
        goto cooks;
    }

nurse:
    int pressb;
    cin >> pressb;
    if (pressb == 0) {
        system("clear");
        goto start;
    }
    else if (pressb == 1) {
        system("clear");
        wcout << L"┌─────────────────────────────────┐" << endl;
        wcout << L"│";
        cout << Nurses.getNameEmp() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << Nurses.getMailEmp() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << Nurses.getNumEmp() << endl;
        wcout << L"└─────────────────────────────────┘" << endl;
        wcout << L"┌──────────────────────────────┐" << endl;
        wcout << L"│Enter 0 to return to the menu │" << endl;
        wcout << L"└──────────────────────────────┘" << endl;
        goto nurse;
    }
    else if (pressb == 2) {
        system("clear");
        wcout << L"┌─────────────────────────────────┐" << endl;
        wcout << L"│";
        cout << Nurses1.getNameEmp() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << Nurses1.getMailEmp() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << Nurses1.getNumEmp() << endl;
        wcout << L"└─────────────────────────────────┘" << endl;
        wcout << L"┌──────────────────────────────┐" << endl;
        wcout << L"│Enter 0 to return to the menu │" << endl;
        wcout << L"└──────────────────────────────┘" << endl;
        goto nurse;
    }
    else if (pressb == 3) {
        system("clear");
        wcout << L"┌─────────────────────────────────────────────────────────────────────┐" << endl;
        wcout << L"│   Nurse Kerry is a volonteur, call to her if u can help with money  │ " << endl;
        wcout << L"└─────────────────────────────────────────────────────────────────────┘" << endl;
        wcout << L"┌───────────────────────────┐" << endl;
        cout << Cooks1.getNumEmp() << endl;
        wcout << L"└───────────────────────────┘" << endl;
        /*cout << "Name: " << Nurses2.getNameEmp() << ";" << endl;
        cout << "Email: " << Nurses2.getMailEmp() << ";" << endl;
        cout << "Phone Number: " << Nurses2.getNumEmp() << ";" << endl;*/
        wcout << L"┌──────────────────────────────┐" << endl;
        wcout << L"│Enter 0 to return to the menu │" << endl;
        wcout << L"└──────────────────────────────┘" << endl;
        goto nurse;
    }
    else if (pressb == 4) {
        system("clear");
        wcout << L"┌─────────────────────────────────┐" << endl;
        wcout << L"│";
        cout << Nurses3.getNameEmp() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << Nurses3.getMailEmp() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << Nurses3.getNumEmp() << endl;
        wcout << L"└─────────────────────────────────┘" << endl;
        wcout << L"┌──────────────────────────────┐" << endl;
        wcout << L"│Enter 0 to return to the menu │" << endl;
        wcout << L"└──────────────────────────────┘" << endl;
        goto nurse;
    }
    else {
        wcout << L"┌──────────────────────────────┐" << endl;
        wcout << L"│   Enter the currect number   │ " << endl;
        wcout << L"└──────────────────────────────┘" << endl;
        goto nurse;
    }

managers:
    int pressAd;
    cin >> pressAd;

    if (pressAd == 0) {
        system("clear");
        goto start;
    }
    else if (pressAd == 1) {
        system("clear");
        wcout << L"┌───────────┬─────────────────────┐" << endl;
        wcout << L"│ Direktor  │     Lillie-Mai      │" << endl;
        wcout << L"└───────────┴─────────────────────┘" << endl;
        goto director;
    }
    else if (pressAd == 2) {
        system("clear");
        wcout << L"┌─────────────┬──────────────┐" << endl;
        wcout << L"│  Manager 1  │    Lemar     │" << endl;
        wcout << L"├─────────────┼──────────────┤" << endl;
        wcout << L"│  Manager 2  │    Alfie     │" << endl;
        wcout << L"└─────────────┴──────────────┘" << endl;
        wcout << L"┌──────────────────────────────┐" << endl;
        wcout << L"│Enter 0 to return to the menu │" << endl;
        wcout << L"└──────────────────────────────┘" << endl;
        goto manager;
    }
    else {
        wcout << L"┌──────────────────────────────┐" << endl;
        wcout << L"│   Enter the currect number   │ " << endl;
        wcout << L"└──────────────────────────────┘" << endl;
        goto managers;
    }

director:
    int pressc;
    cin >> pressc;

    if (pressc == 0) {
        system("clear");
        goto start;
    }
    else if (pressc == 1) {
        system("clear");
        wcout << L"┌───────────────────────────┐" << endl;
        wcout << L"│        Director           │" << endl;
        wcout << L"└───────────────────────────┘" << endl;
        wcout << L"┌─────────────────────────────────┐" << endl;
        wcout << L"│";
        cout << Director.getNameEmp() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << Director.getMailEmp() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << Director.getNumEmp() << endl;
        wcout << L"└─────────────────────────────────┘" << endl;
        wcout << L"┌──────────────────────────────┐" << endl;
        wcout << L"│Enter 0 to return to the menu │" << endl;
        wcout << L"└──────────────────────────────┘" << endl;
        goto director;
    }
    else {
        wcout << L"┌──────────────────────────────┐" << endl;
        wcout << L"│   Enter the currect number   │ " << endl;
        wcout << L"└──────────────────────────────┘" << endl;
        goto director;
    }

manager:
    int pressd;
    cin >> pressd;

    if (pressd == 0) {
        system("clear");
        goto start;
    }
    else if (pressd == 1) {
        system("clear");
        wcout << L"┌───────────────────────────┐" << endl;
        wcout << L"│        Managers           │" << endl;
        wcout << L"└───────────────────────────┘" << endl;
        wcout << L"┌─────────────────────────────────┐" << endl;
        wcout << L"│";
        cout << Manager.getNameEmp() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << Manager.getMailEmp() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << Manager.getNumEmp() << endl;
        wcout << L"└─────────────────────────────────┘" << endl;
        wcout << L"┌──────────────────────────────┐" << endl;
        wcout << L"│Enter 0 to return to the menu │" << endl;
        wcout << L"└──────────────────────────────┘" << endl;
        goto manager;
    }
    else if (pressd == 2) {
        system("clear");
        wcout << L"┌───────────────────────────┐" << endl;
        wcout << L"│        Managers           │" << endl;
        wcout << L"└───────────────────────────┘" << endl;
        wcout << L"┌─────────────────────────────────┐" << endl;
        wcout << L"│";
        cout << Manager1.getNameEmp() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << Manager1.getMailEmp() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << Manager1.getNumEmp() << endl;
        wcout << L"└─────────────────────────────────┘" << endl;
        wcout << L"┌──────────────────────────────┐" << endl;
        wcout << L"│Enter 0 to return to the menu │" << endl;
        wcout << L"└──────────────────────────────┘" << endl;
        goto manager;
    }
    else {
        wcout << L"┌──────────────────────────────┐" << endl;
        wcout << L"│   Enter the currect number   │ " << endl;
        wcout << L"└──────────────────────────────┘" << endl;
        goto manager;
    }

information:
    wcout << L"┌─────────────────────────┐" << endl;
    wcout << L"│       Information       │" << endl;
    wcout << L"└─────────────────────────┘" << endl;
    wcout << L"┌───────────┬──────────────┐" << endl;
    wcout << L"│  Press 1  │  Groups      │" << endl;
    wcout << L"├───────────┼──────────────┤" << endl;
    wcout << L"│  Press 2  │  Employment  │" << endl;
    wcout << L"└───────────┴──────────────┘" << endl;
    wcout << L"┌──────────────────────────────┐" << endl;
    wcout << L"│Enter 0 to return to the menu │" << endl;
    wcout << L"└──────────────────────────────┘" << endl; 




restartInf:
    int pressIn;

    cin >> pressIn;

    if (pressIn == 0) {
        system("clear");
        goto start;
    }
    else if (pressIn == 1) {
        system("clear");
        wcout << L"┌─────────────────────────┐" << endl;
        wcout << L"│        Groups           │" << endl;
        wcout << L"└─────────────────────────┘" << endl;
        wcout << L"┌───────────┬───────────────────────────────┐" << endl;
        wcout << L"│  Press 1  │  Children full information    │" << endl;
        wcout << L"├───────────┼───────────────────────────────┤" << endl;
        wcout << L"│  Press 2  │  Score of children            │" << endl;
        wcout << L"└───────────┴───────────────────────────────┘" << endl;
        wcout << L"┌──────────────────────────────┐" << endl;
        wcout << L"│Enter 0 to return to the menu │" << endl;
        wcout << L"└──────────────────────────────┘" << endl;
        goto groups;
    }
    else if (pressIn == 2) {
        system("clear");
        wcout << L"┌─────────────────────────┐" << endl;
        wcout << L"│       Employment        │" << endl;
        wcout << L"└─────────────────────────┘" << endl;
        wcout << L"┌───────────┬──────────────────┐" << endl;
        wcout << L"│  Press 1  │  Games outside   │" << endl;
        wcout << L"├───────────┼──────────────────┤" << endl;
        wcout << L"│  Press 2  │  Education       │" << endl;
        wcout << L"├───────────┼──────────────────┤" << endl;
        wcout << L"│  Press 3  │  Concerts        │" << endl;
        wcout << L"└───────────┴──────────────────┘" << endl;
        wcout << L"┌──────────────────────────────┐" << endl;
        wcout << L"│Enter 0 to return to the menu │" << endl;
        wcout << L"└──────────────────────────────┘" << endl;
        goto employment;
    }

    else {
        wcout << L"┌──────────────────────────────┐" << endl;
        wcout << L"│   Enter the currect number   │ " << endl;
        wcout << L"└──────────────────────────────┘" << endl;
        goto restartInf;
    }


groups:
    int pressgr;
    cin >> pressgr;

    if (pressgr == 0) {
        system("clear");
        goto start;
    }
    else if (pressgr == 1) {
        system("clear");
        wcout << L"┌─────────────────────────────────┐" << endl;
        wcout << L"│       Children full info        │" << endl;
        wcout << L"└─────────────────────────────────┘" << endl;
        wcout << L"┌───────────┬─────────────────────┐" << endl;
        wcout << L"│  Press 1  │  Small group        │" << endl;
        wcout << L"├───────────┼─────────────────────┤" << endl;
        wcout << L"│  Press 2  │  Middle Group       │" << endl;
        wcout << L"├───────────┼─────────────────────┤" << endl;
        wcout << L"│  Press 3  │  High Group         │" << endl;
        wcout << L"└───────────┴─────────────────────┘" << endl;
        wcout << L"┌──────────────────────────────┐" << endl;
        wcout << L"│Enter 0 to return to the menu │" << endl;
        wcout << L"└──────────────────────────────┘" << endl;
        goto childrenifo;
    }
    else if (pressgr == 2) {
        system("clear");
        wcout << L"┌─────────────────────────────────┐" << endl;
        wcout << L"│       Children score info       │" << endl;
        wcout << L"└─────────────────────────────────┘" << endl;
        wcout << L"┌───────────┬─────────────────────┐" << endl;
        wcout << L"│  Press 1  │  Small group        │" << endl;
        wcout << L"├───────────┼─────────────────────┤" << endl;
        wcout << L"│  Press 2  │  Middle Group       │" << endl;
        wcout << L"├───────────┼─────────────────────┤" << endl;
        wcout << L"│  Press 3  │  High Group         │" << endl;
        wcout << L"└───────────┴─────────────────────┘" << endl;
        wcout << L"┌──────────────────────────────┐" << endl;
        wcout << L"│Enter 0 to return to the menu │" << endl;
        wcout << L"└──────────────────────────────┘" << endl;

        goto childrenscore;
    }
    else {
        wcout << L"┌──────────────────────────────┐" << endl;
        wcout << L"│   Enter the currect number   │ " << endl;
        wcout << L"└──────────────────────────────┘" << endl;
        goto groups;
    }



childrenifo:
    int presschinfo;
    cin >> presschinfo;
    if (presschinfo == 0) {
        system("clear");
        goto start;
    }
    else if (presschinfo == 1) {
        system("clear");
        wcout << L"┌─────────────────────────────────┐" << endl;
        wcout << L"│           Small Group           │" << endl;
        wcout << L"└─────────────────────────────────┘" << endl;
        wcout << L"┌─────────────────────────────────┐" << endl;
        wcout << L"│";
        cout << Small1.getnameСhild() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << Small1.getageChild() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << Small1.getgroupChild() << endl;
        wcout << L"│";
        cout << Small2.getnameСhild() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << Small2.getageChild() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << Small2.getgroupChild() << endl;
        wcout << L"│";
        cout << Small3.getnameСhild() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << Small3.getageChild() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << Small3.getgroupChild() << endl;
        wcout << L"│";
        cout << Small4.getnameСhild() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << Small4.getageChild() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << Small4.getgroupChild() << endl;
        wcout << L"│";
        cout << Small5.getnameСhild() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << Small5.getageChild() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << Small5.getgroupChild() << endl;
        wcout << L"│";
        cout << Small6.getnameСhild() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << Small6.getageChild() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << Small6.getgroupChild() << endl;
        wcout << L"│";
        cout << Small7.getnameСhild() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << Small7.getageChild() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << Small7.getgroupChild() << endl;
        wcout << L"│";
        cout << Small8.getnameСhild() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << Small8.getageChild() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << Small8.getgroupChild() << endl;
        wcout << L"└─────────────────────────────────┘" << endl;
        wcout << L"┌──────────────────────────────┐" << endl;
        wcout << L"│Enter 0 to return to the menu │" << endl;
        wcout << L"└──────────────────────────────┘" << endl;

        goto childrenifo;
    }
    else if (presschinfo == 2) {
        system("clear");
        wcout << L"┌─────────────────────────────────┐" << endl;
        wcout << L"│           Middle Group          │" << endl;
        wcout << L"└─────────────────────────────────┘" << endl;
        wcout << L"┌─────────────────────────────────┐" << endl;
        wcout << L"│";
        cout << Middle1.getnameСhild() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << Middle1.getageChild() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << Middle1.getgroupChild() << endl;
        wcout << L"│";
        cout << Middle2.getnameСhild() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << Middle2.getageChild() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << Middle2.getgroupChild() << endl;
        wcout << L"│";
        cout << Middle3.getnameСhild() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << Middle3.getageChild() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << Middle3.getgroupChild() << endl;
        wcout << L"│";
        cout << Middle4.getnameСhild() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << Middle4.getageChild() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << Middle4.getgroupChild() << endl;
        wcout << L"│";
        cout << Middle5.getnameСhild() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << Middle5.getageChild() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << Middle5.getgroupChild() << endl;
        wcout << L"│";
        cout << Middle6.getnameСhild() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << Middle6.getageChild() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << Middle6.getgroupChild() << endl;
        wcout << L"│";
        cout << Middle7.getnameСhild() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << Middle7.getageChild() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << Middle7.getgroupChild() << endl;
        wcout << L"│";
        cout << Middle8.getnameСhild() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << Middle8.getageChild() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << Middle8.getgroupChild() << endl;
        wcout << L"│";
        cout << Middle9.getnameСhild() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << Middle9.getageChild() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << Middle9.getgroupChild() << endl;
        wcout << L"└─────────────────────────────────┘" << endl;
        wcout << L"┌──────────────────────────────┐" << endl;
        wcout << L"│Enter 0 to return to the menu │" << endl;
        wcout << L"└──────────────────────────────┘" << endl;
        goto childrenifo;
    }
    else if (presschinfo == 3) {
        system("clear");
        wcout << L"┌─────────────────────────────────┐" << endl;
        wcout << L"│            High Group           │" << endl;
        wcout << L"└─────────────────────────────────┘" << endl;
        wcout << L"┌─────────────────────────────────┐" << endl;
        wcout << L"│";
        cout << High1.getnameСhild() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << High1.getageChild() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << High1.getgroupChild() << endl;
        wcout << L"│";
        cout << High2.getnameСhild() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << High2.getageChild() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << High2.getgroupChild() << endl;
        wcout << L"│";
        cout << High3.getnameСhild() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << High3.getageChild() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << High3.getgroupChild() << endl;
        wcout << L"│";
        cout << High4.getnameСhild() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << High4.getageChild() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << High4.getgroupChild() << endl;
        wcout << L"│";
        cout << High5.getnameСhild() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << High5.getageChild() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << High5.getgroupChild() << endl;
        wcout << L"│";
        cout << High6.getnameСhild() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << High6.getageChild() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << High6.getgroupChild() << endl;
        wcout << L"│";
        cout << High7.getnameСhild() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << High7.getageChild() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << High7.getgroupChild() << endl;
        wcout << L"│";
        cout << High8.getnameСhild() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << High8.getageChild() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << High8.getgroupChild() << endl;
        wcout << L"│";
        cout << High9.getnameСhild() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << High9.getageChild() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << High9.getgroupChild() << endl;
        wcout << L"│";
        cout << High10.getnameСhild() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << High10.getageChild() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << High10.getgroupChild() << endl;
        wcout << L"└─────────────────────────────────┘" << endl;
        wcout << L"┌──────────────────────────────┐" << endl;
        wcout << L"│Enter 0 to return to the menu │" << endl;
        wcout << L"└──────────────────────────────┘" << endl;
        goto childrenifo;
    }

    else {
    wcout << L"┌──────────────────────────────┐" << endl;
    wcout << L"│   Enter the currect number   │ " << endl;
    wcout << L"└──────────────────────────────┘" << endl;
        goto childrenifo;
    }
childrenscore:
    int pressChscore;
    cin >> pressChscore;
    if (pressChscore == 0) {
        system("clear");
        goto start;
    }
    else if (pressChscore == 1) {
        system("clear");
        wcout << L"┌─────────────────────────────────────────────────────────────────────┐" << endl;
        wcout << L"│                 Members in the Small Group    ";
        cout << Small.getmembersOfGroup();
        wcout << L"                     │" << endl;
        wcout << L"└─────────────────────────────────────────────────────────────────────┘" << endl;
        wcout << L"┌──────────────────────────────┐" << endl;
        wcout << L"│Enter 0 to return to the menu │" << endl;
        wcout << L"└──────────────────────────────┘" << endl;
        goto childrenscore;
    }
    else if (pressChscore == 2) {
        system("clear");
        wcout << L"┌─────────────────────────────────────────────────────────────────────┐" << endl;
        wcout << L"│                 Members in the Middle Group    ";
        cout << Middle.getmembersOfGroup();
        wcout << L"                    │" << endl;
        wcout << L"└─────────────────────────────────────────────────────────────────────┘" << endl;
        wcout << L"┌──────────────────────────────┐" << endl;
        wcout << L"│Enter 0 to return to the menu │" << endl;
        wcout << L"└──────────────────────────────┘" << endl;
        goto childrenscore;
    }
    else if (pressChscore == 3) {
        system("clear");
        wcout << L"┌─────────────────────────────────────────────────────────────────────┐" << endl;
        wcout << L"│                 Members in the High Group    ";
        cout << High.getmembersOfGroup();
        wcout << L"                     │" << endl;
        wcout << L"└─────────────────────────────────────────────────────────────────────┘" << endl;
        wcout << L"┌──────────────────────────────┐" << endl;
        wcout << L"│Enter 0 to return to the menu │" << endl;
        wcout << L"└──────────────────────────────┘" << endl;
        goto childrenscore;
    }

    else {
        wcout << L"┌──────────────────────────────┐" << endl;
        wcout << L"│   Enter the currect number   │ " << endl;
        wcout << L"└──────────────────────────────┘" << endl;
        goto childrenscore;

    }





employment:
    int presse;
    cin >> presse;

    if (presse == 0) {
        system("clear");
        goto start;
    }
    else if (presse == 1) {
        system("clear");
        wcout << L"┌─────────────────────────────────┐" << endl;
        wcout << L"│         Games outside           │" << endl;
        wcout << L"└─────────────────────────────────┘" << endl;
        wcout << L"┌──────────────────────────────────────────────────────────────────────────────────────────────────────────┐" << endl;
        wcout << L"│         This months the weather might be really bad so u can play only inside the Kindergarden           │" << endl;
        wcout << L"└──────────────────────────────────────────────────────────────────────────────────────────────────────────┘" << endl;
    /*    cout << "1 Game: " << Games.getEmplInfo() << ";" << endl;
        cout << "2 Game: " << Games1.getEmplInfo() << ";" << endl;
        cout << "3 Game: " << Games2.getEmplInfo() << ";" << endl;
        cout << "4 Game: " << Games3.getEmplInfo() << ";" << endl;
        cout << "5 Game: " << Games4.getEmplInfo() << ";" << endl;
        cout << "6 Game: " << Games5.getEmplInfo() << ";" << endl;
        cout << "7 Game: " << Games6.getEmplInfo() << ";" << endl;*/
        wcout << L"┌──────────────────────────────┐" << endl;
        wcout << L"│Enter 0 to return to the menu │" << endl;
        wcout << L"└──────────────────────────────┘" << endl;
        goto employment;
    }
    else if (presse == 2) {
        system("clear");
        wcout << L"┌─────────────────────────────────┐" << endl;
        wcout << L"│           Education             │" << endl;
        wcout << L"└─────────────────────────────────┘" << endl;
        wcout << L"┌─────────────────────────────────┐" << endl;
        wcout << L"│";
        cout << Education.getEmplInfo() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << Education1.getEmplInfo() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << Education2.getEmplInfo() << endl;
        wcout << L"└─────────────────────────────────┘" << endl;
        wcout << L"┌──────────────────────────────┐" << endl;
        wcout << L"│Enter 0 to return to the menu │" << endl;
        wcout << L"└──────────────────────────────┘" << endl;
        goto employment;
    }
    else if (presse == 3) {
        system("clear");
        wcout << L"┌─────────────────────────────────┐" << endl;
        wcout << L"│            Concerts             │" << endl;
        wcout << L"└─────────────────────────────────┘" << endl;
        wcout << L"┌──────────────────────────────────────────────────────────────────────────────────────────────────────────┐" << endl;
        wcout << L"│              Sorry but we try to avoid crowds so that there are no cases of omicron                      │" << endl;
        wcout << L"└──────────────────────────────────────────────────────────────────────────────────────────────────────────┘" << endl;
        
        /*cout << "1 Concert: " << Performances.getEmplInfo() << ";" << endl;
        cout << "2 Concert: " << Performances1.getEmplInfo() << ";" << endl;
        cout << "3 Concert: " << Performances2.getEmplInfo() << ";" << endl;
        cout << "4 Concert: " << Performances3.getEmplInfo() << ";" << endl;
        cout << "5 Concert: " << Performances4.getEmplInfo() << ";" << endl;*/
        wcout << L"┌──────────────────────────────┐" << endl;
        wcout << L"│Enter 0 to return to the menu │" << endl;
        wcout << L"└──────────────────────────────┘" << endl;
        goto employment;
    }
    else {
        wcout << L"┌──────────────────────────────┐" << endl;
        wcout << L"│   Enter the currect number   │ " << endl;
        wcout << L"└──────────────────────────────┘" << endl;
        goto employment;
    }



timetable:
    wcout << L"┌─────────────────────────┐" << endl;
    wcout << L"│        Timetable        │" << endl;
    wcout << L"└─────────────────────────┘" << endl;
    wcout << L"┌───────────┬──────────────┐" << endl;
    wcout << L"│  Press 1  │  Eating      │" << endl;
    wcout << L"├───────────┼──────────────┤" << endl;
    wcout << L"│  Press 2  │  Sleeping    │" << endl;
    wcout << L"└───────────┴──────────────┘" << endl;
    wcout << L"┌──────────────────────────────┐" << endl;
    wcout << L"│Enter 0 to return to the menu │" << endl;
    wcout << L"└──────────────────────────────┘" << endl;


restartU:
    int pressf;
    cin >> pressf;

    if (pressf == 0) {
        system("clear");
        goto start;
    }
    else if (pressf == 1) {
        system("clear");
        wcout << L"┌─────────────────────────────────┐" << endl;
        wcout << L"│             Eating              │" << endl;
        wcout << L"└─────────────────────────────────┘" << endl;
        wcout << L"┌───────────┬─────────────────────┐" << endl;
        wcout << L"│  Press 1  │  Small group        │" << endl;
        wcout << L"├───────────┼─────────────────────┤" << endl;
        wcout << L"│  Press 2  │  Middle Group       │" << endl;
        wcout << L"├───────────┼─────────────────────┤" << endl;
        wcout << L"│  Press 3  │  High Group         │" << endl;
        wcout << L"└───────────┴─────────────────────┘" << endl;
        wcout << L"┌──────────────────────────────┐" << endl;
        wcout << L"│Enter 0 to return to the menu │" << endl;
        wcout << L"└──────────────────────────────┘" << endl;

        goto eating;
    }
    else if (pressf == 2) {
        system("clear");
        wcout << L"┌─────────────────────────────────┐" << endl;
        wcout << L"│           Sleeping              │" << endl;
        wcout << L"└─────────────────────────────────┘" << endl;
        wcout << L"┌───────────┬─────────────────────┐" << endl;
        wcout << L"│  Press 1  │  Small group        │" << endl;
        wcout << L"├───────────┼─────────────────────┤" << endl;
        wcout << L"│  Press 2  │  Middle Group       │" << endl;
        wcout << L"├───────────┼─────────────────────┤" << endl;
        wcout << L"│  Press 3  │  High Group         │" << endl;
        wcout << L"└───────────┴─────────────────────┘" << endl;
        wcout << L"┌──────────────────────────────┐" << endl;
        wcout << L"│Enter 0 to return to the menu │" << endl;
        wcout << L"└──────────────────────────────┘" << endl;
        goto sleeping;
    }
    else {
        wcout << L"┌──────────────────────────────┐" << endl;
        wcout << L"│   Enter the currect number   │ " << endl;
        wcout << L"└──────────────────────────────┘" << endl;
        goto restartU;
    }




eating:
    int pressp;
    cin >> pressp;

    if (pressp == 0) {
        system("clear");
        goto start;
    }
    else if (pressp == 1) {
        system("clear");
        wcout << L"┌─────────────────────────────────┐" << endl;
        wcout << L"│           Small Group           │" << endl;
        wcout << L"└─────────────────────────────────┘" << endl;
        wcout << L"┌─────────────────────────────────┐" << endl;
        wcout << L"│";
        cout << Smallgroup.getfoodInfo() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << Smallgroup1.getfoodInfo() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << Smallgroup2.getfoodInfo() << endl;
        wcout << L"│";
        cout << Smallgroup3.getfoodInfo() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << Smallgroup4.getfoodInfo() << endl;
        wcout << L"└─────────────────────────────────┘" << endl;
        wcout << L"┌──────────────────────────────┐" << endl;
        wcout << L"│Enter 0 to return to the menu │" << endl;
        wcout << L"└──────────────────────────────┘" << endl;
        goto eating;
    }
    else if (pressp == 2) {
        system("clear");
        wcout << L"┌─────────────────────────────────┐" << endl;
        wcout << L"│          Middle Group           │" << endl;
        wcout << L"└─────────────────────────────────┘" << endl;
        wcout << L"┌─────────────────────────────────┐" << endl;
        wcout << L"│";
        cout << Middlegroup.getfoodInfo() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << Middlegroup1.getfoodInfo() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << Middlegroup2.getfoodInfo() << endl;
        wcout << L"│";
        cout << Middlegroup3.getfoodInfo() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << Middlegroup4.getfoodInfo() << endl;
        wcout << L"└─────────────────────────────────┘" << endl;
        wcout << L"┌──────────────────────────────┐" << endl;
        wcout << L"│Enter 0 to return to the menu │" << endl;
        wcout << L"└──────────────────────────────┘" << endl;
        goto eating;
    }
    else if (pressp == 3) {
        system("clear");
        wcout << L"┌─────────────────────────────────┐" << endl;
        wcout << L"│            High Group           │" << endl;
        wcout << L"└─────────────────────────────────┘" << endl;
        wcout << L"┌─────────────────────────────────┐" << endl;
        wcout << L"│";
        cout << Highgroup.getfoodInfo() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << Highgroup1.getfoodInfo() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << Highgroup2.getfoodInfo() << endl;
        wcout << L"│";
        cout << Highgroup3.getfoodInfo() << endl;
        wcout << L"                                  │" << endl;
        wcout << L"│";
        cout << Highgroup4.getfoodInfo() << endl;
        wcout << L"└─────────────────────────────────┘" << endl;
        wcout << L"┌──────────────────────────────┐" << endl;
        wcout << L"│Enter 0 to return to the menu │" << endl;
        wcout << L"└──────────────────────────────┘" << endl;
        goto eating;
    }
    else {
        wcout << L"┌──────────────────────────────┐" << endl;
        wcout << L"│   Enter the currect number   │ " << endl;
        wcout << L"└──────────────────────────────┘" << endl;
        goto eating;
    }


sleeping:
    int pressu;
    cin >> pressu;

    if (pressu == 0) {
        system("clear");
        goto start;
    }
    else if (pressu == 1) {
        system("clear");
        wcout << L"┌─────────────────────────────────────────────────────────────────────┐" << endl;
        wcout << L"│                 Sleeptime in the Small Group    ";
        cout << Smallgr.getSleepInfo();
        wcout << L"       │" << endl;
        wcout << L"└─────────────────────────────────────────────────────────────────────┘" << endl;
        wcout << L"┌──────────────────────────────┐" << endl;
        wcout << L"│Enter 0 to return to the menu │" << endl;
        wcout << L"└──────────────────────────────┘" << endl;
        goto sleeping;
    }
    else if (pressu == 2) {
        system("clear");
        wcout << L"┌─────────────────────────────────────────────────────────────────────┐" << endl;
        wcout << L"│                 Sleeptime in the Middle Group    ";
        cout << Middlegr.getSleepInfo();
        wcout << L"      │" << endl;
        wcout << L"└─────────────────────────────────────────────────────────────────────┘" << endl;
        wcout << L"┌──────────────────────────────┐" << endl;
        wcout << L"│Enter 0 to return to the menu │" << endl;
        wcout << L"└──────────────────────────────┘" << endl;
        goto sleeping;
    }
    else if (pressu == 3) {
        wcout << L"┌─────────────────────────────────────────────────────────────────────┐" << endl;
        wcout << L"│                 Sleeptime in the High Group    ";
        cout << Highgr.getSleepInfo();
        wcout << L"        │" << endl;
        wcout << L"└─────────────────────────────────────────────────────────────────────┘" << endl;
        wcout << L"┌──────────────────────────────┐" << endl;
        wcout << L"│Enter 0 to return to the menu │" << endl;
        wcout << L"└──────────────────────────────┘" << endl;
        goto sleeping;
    }
    else {
        wcout << L"┌──────────────────────────────┐" << endl;
        wcout << L"│   Enter the currect number   │ " << endl;
        wcout << L"└──────────────────────────────┘" << endl;
        goto sleeping;
    }

}
