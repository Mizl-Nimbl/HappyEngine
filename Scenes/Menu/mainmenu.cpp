#include "mainmenu.hpp"

void Mainmenu::drawText()
{
    //print title
    float title[2] = {-0.45, 0.5};
    std::string creaturetext = "creature";
    f.word(creaturetext, title, 0.2f);   

    //print flavour text
    float flavour[2] = {-0.95, -0.9};
    std::string flavourtext = "hud cxcrt polypcontrol";
    f.word(flavourtext, flavour, 0.05f);  

    //print buttontext
    float button1[2] = {-0.15, 0.25};
    std::string buttontext1 = "play";
    f.word(buttontext1, button1, 0.15f); 

    float button2[2] = {-0.15, 0};
    std::string buttontext2 = "menu";
    f.word(buttontext2, button2, 0.15f); 

    float button3[2] = {-0.15, -0.25};
    std::string buttontext3 = "exit";
    f.word(buttontext3, button3, 0.15f); 
}

void Mainmenu::drawEtc()
{

}

void Mainmenu::respond()
{
    //777x630
    //1116x718
    if(c.coords[0] < -0.15 && c.coords[0] > 0.15 && c.coords[1] > -0.30 && c.coords[1] < 0.25 && c.lmb == 1)
    {
        i.isRunning = false;
    }
}