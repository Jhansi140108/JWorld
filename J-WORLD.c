#include<stdio.h>
#include<string.h>
#include<unistd.h>
void typewrite(const char *aa){
    while(*aa){
        putchar(*aa++);
        fflush(stdout);
        usleep(100000);
    }
}
void typewrite1(const char *ab){
    while(*ab){
        putchar(*ab++);
        fflush(stdout);
        usleep(60000);
    }
}
void typewrite2(const char *ac){
    while(*ac){
        putchar(*ac++);
        fflush(stdout);
        usleep(60000);
    }
}
void typewrite3(const char *ad){
    while(*ad){
        putchar(*ad++);
        fflush(stdout);
        usleep(60000);
    }
}
void typewrite4(const char *ae){
    while(*ae){
        putchar(*ae++);
        fflush(stdout);
        usleep(60000);
    }
}
void typewrite5(const char *af){
    while(*af){
        putchar(*af++);
        fflush(stdout);
        usleep(60000);
    }
}
void typewrite6(const char *ag){
    while(*ag){
        putchar(*ag++);
        fflush(stdout);
        usleep(100000);
    }
}
void typewrite7(const char *ai){
    while(*ai){
        putchar(*ai++);
        fflush(stdout);
        usleep(60000);
    }
}
void placed1(const char *place1){
    while(*place1){
        putchar(*place1++);
        fflush(stdout);
        usleep(100000);
    }
}
void placed2(const char *place2){
    while(*place2){
        putchar(*place2++);
        fflush(stdout);
        usleep(60000);
    }
}
void placed3(const char *place3){
    while(*place3){
        putchar(*place3++);
        fflush(stdout);
        usleep(60000);
    }
}
void jhansi1(const char *q1){
    while(*q1){
        putchar(*q1++);
        fflush(stdout);
        usleep(60000);
    }
}
void jhansi2(const char *q2){
    while(*q2){
        putchar(*q2++);
        fflush(stdout);
        usleep(100000);
    }
}
void jhansi3(const char *q3){
    while(*q3){
        putchar(*q3++);
        fflush(stdout);
        usleep(100000);
    }
}
void jhansi4(const char *q4){
    while(*q4){
        putchar(*q4++);
        fflush(stdout);
        usleep(60000);
    }
}
void jhansi5(const char *q5){
    while(*q5){
        putchar(*q5++);
        fflush(stdout);
        usleep(100000);
    }
}
void jhansi6(const char *q6){
    while(*q6){
        putchar(*q6++);
        fflush(stdout);
        usleep(100000);
    }
}
void jhansi7(const char *q7){
    while(*q7){
        putchar(*q7++);
        fflush(stdout);
        usleep(60000);
    }
}
void quest11(const char *t1){
    while(*t1){
        putchar(*t1++);
        fflush(stdout);
        usleep(60000);
    }
}
void quest111(const char *t11){
    while(*t11){
        putchar(*t11++);
        fflush(stdout);
        usleep(60000);
    }
}
void quest112(const char *t12){
    while(*t12){
        putchar(*t12++);
        fflush(stdout);
        usleep(60000);
    }
}
void quest113(const char *t13){
    while(*t13){
        putchar(*t13++);
        fflush(stdout);
        usleep(60000);
    }
}
void quest1131(const char *t131){
    while(*t131){
        putchar(*t131++);
        fflush(stdout);
        usleep(60000);
    }
}
void quest1132(const char *t132){
    while(*t132){
        putchar(*t132++);
        fflush(stdout);
        usleep(60000);
    }
}
void quest11321(const char *t1321){
    while(*t1321){
        putchar(*t1321++);
        fflush(stdout);
        usleep(100000);
    }
}
void quest11322(const char *t1322){
    while(*t1322){
        putchar(*t1322++);
        fflush(stdout);
        usleep(60000);
    }
}
void quest11323(const char *t1323){
    while(*t1323){
        putchar(*t1323++);
        fflush(stdout);
        usleep(100000);
    }
}
int main(){
    const char *aa="welcome to the J-WORLD\nbe yourself and have fun.\n\n";
    typewrite(aa);
    char name[20];
    const char *ab="state your name adventurer.\n";
    typewrite1(ab);
    scanf("%s",&name);
    const char *ac="state your character gender.\n";
    typewrite2(ac);
    char gender[20];
    scanf("%s",&gender);
    const char *ad="select the weapon for your game play.\n1-sword\n2-magic wand\n3-knuckles\n4-revolver\n";
    typewrite3(ad);
    int weapon;
    scanf("%d",&weapon);
    const char *ae="nice selection,get your weapon from blacksmith after you go to the base. lets move forward to the instuctions.\n\ninstruction-1: you should buy food with the money you earn from going to dungeons or working or stealing etc...\ninstruction-2: strictly follow instruction-1\n";
    typewrite4(ae);
    const char *af="i hope you have a great time, let me teleport you to the base.\n\n";
    typewrite5(af);
    const char *ag="(teleported to main base)\n";
    typewrite6(ag);
    const char *ai="NPC: hi! it seems like you are new here. let me show you around.i can show you the nearest dungeon, blacksmith shop, restaurant, cafe.where you do you want to go?\n";
    typewrite7(ai);
    char place[20];
    scanf("%s",place);
    printf("NPC: ok let me take you to the %s,lets go\n",place);
    if(strcmp(place,"dungeon")==0){
        const char *place1="(it took 10 minutes to walk from the main base to the dungeon entrance.it seemed very dark and scary to go inside.NPC lighted a stick and gave it to me and wished me luck before going back.)\n";
        placed1(place1);
        const char *place2="do you still want to go into the dungeon without any weapon?\n";
        placed2(place2);
        char dungeon[10];
        scanf("%s",&dungeon);
        if(strcmp(dungeon,"yes")==0){
            
            
        }
        else if(strcmp(dungeon,"no")==0){
            const char *place3="great,then let/'s go to blacksmith to collect your sword. what do you say?\n(just say sure or no)\n";
            placed3(place3);
            char reply1[10];
            scanf("%s",&reply1);
            if (strcmp(reply1,"sure")==0){
                const char *q1="(it took 15 minutes to walk from the dungeon to blacksmith shop. it seemed cool,but in fact it did not look like a blacksmith shop that i imagined it to be. rather it looked like a MNC.)\n";
                jhansi1(q1);
                const char *q2="blacksmith: welcome, you are here for your weapon right.please tell me your name so i can bring your weapon to you.\n";
                jhansi2(q2);
                char name1[20];
                scanf("%s", &name1);
                if (strcmp(name,name1)==0){
                    printf("your weapon, beginner %s is ready. here, take it.", weapon);
                    const char *q3="(your weapon is added to the bag)";
                    jhansi3(q3);
                    const char *q4="blacksmith:you have to go to dungeon or find work by today evening and earn money.because tax collectors will come by 8.00pm";
                    jhansi4(q4);
                    const char *q5="(tax collectors are the monsters, who are created by the government of the J-world to collect taxes from citizens for allowing them to live in the J-world.)";
                    jhansi5(q5);
                    const char *q6="[QUEST 'Hero Of Citizens']\n[\nquest name: hero of citizens\ntime limit:none\nmission:kill all tax workers in the city\ncompletion reward:hero robe(increases defence by 10), 1000coins\npenalty for failure:hanged to death by government.\n]";
                    jhansi6(q6);
                    const char *q7="do you want to do the quest?";
                    jhansi7(q7);
                    char quest1[10];
                    scanf("%s", &quest1);
                    if (strcmp(quest1, "yes")==0){
                        const char *t1="great,ALL THE BEST dont die adventurer.\nwhat do you want to do now?\n1-go to the tax collectors\n2-ask blacksmith for more information\n3-go to the market\n";
                        quest11(t1);
                        int neethu;
                        scanf("%d", &neethu);
                        if (neethu==1){
                            const char *t11="(you have come out of the blacksmith shop and went to tax collectors. they looked at you)";
                            quest111(t11);
                            const char *t12="tax collector1: tax! tax! tax! pay your tax!.it seems like you are new here. pay your tax of 20 coins for letting you stay alive.";
                            quest112(t12);
                            const char *t13="select your reply;\n1-I don't have money\n2-i am not willing to pay you\n3-no reply\n";
                            quest113(t13);
                            int neethu1;
                            scanf("%d", &neethu1);
                            if (neethu1==1){
                                const char *t131="tax collector2: if you dont have enough money, you have to work for us until you have enough to pay.you have to do everything we say. our order is your life, got it. come with us.";
                                quest1131(t131);
                                const char *t132="select your reply;\n1-yes sir\n2-no,i will not come with you.\n3-no reply";
                                quest1132(t132);
                                int neethu11;
                                scanf("%d", &neethu11);
                                if (neethu11==1){
                                    const char *t1321="now come with us.i will put you to use.";
                                    quest11321(t1321);
                                    const char *t1322="(you go with them to their base.it is so dark that you cannot see anything until you light fire.you go in there and see lot of tax collectors eating food which looks like waste.around you there are lot of tax collectors who are not even able to walk because of lack of nutrition.)";
                                    quest11322(t1322);
                                    const char *t1323="select your reply;\n 1-what happened to them?\n2-why are you guys eating this kind of food?\n3-no reply";
                                    quest11323(t1323);
                                }
                            }
                        }
                        
                    }

                }
                
            }
            
        }
        
    }
}
