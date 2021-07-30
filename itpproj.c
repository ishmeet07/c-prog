
// this program is made by amrit,ashpreet,himika,ikjyot,ishmeet
// this is a quiz with sounds which reward a donut at the completion of the quiz
#include<stdio.h>  
#include<stdlib.h> 
#include<conio.h>
#include<windows.h> 
#include "proj.h"
struct play {  
            char name[20];  
            int score;  
            int rat;       //star ratings  
}p;  
void music();
void music2();
int dec();
int enc();
void high_score();  
void start();  
void help();  
  
int main()  
{    system("CLS");
       int chc=0;  
        printf("\n .................... WINNER WINNER DONUT DINNER .........................\n");
  
    printf("\t\t\t\tPRESS 1 TO START THE GAME\n\t\t\t\tPRESS 2 TO SEE HIGH SCORES \n\t\t\t\tPRESS 3 TO SEEK HELP \n\t\t\t\tPRESS 0 TO QUIT :   ");  
    scanf("%d",&chc);  
  
    switch(chc)  
    {  
        case 1:  
        start();  
        break;  
  
        case 2:  
        high_score();  
        break;  
  
        case 3:  
        help();  
        break;  
  
          default:  
          exit(1);  
    }  
    return 0;
}  
  
void help()  
{  
     int ch;  
  
     printf("\n\n ************************* GAME HELP *************************");  
     printf("\n -------------------------------------------------------------------------");  
     printf("\n .................... WINNER WINNER DONUT DINNER .........................\n");  
       
     printf("\n --------------->> There will be a total of 20 questions");  
     printf("\n --------------->> You will be given 4 options and you have to press 1, 2 ,3 or 4 for the right option");  
     printf("\n --------------->> Each question will carry 5 points");  
     printf("\n --------------->> You will be asked questions continuously.");  
     printf("\n --------------->> There is no negative marking for wrong answer");  
  
    printf("\n\n ************************* BEST OF LUCK *************************\n\n");  
  
  
    printf("\nContinue playing ? (1/0) :  ");  
    scanf("%d",&ch);  
  
    if(ch==1)  
    {  
        start();  
    }  
    else  
    {  
        exit(1);  
    }  
  
}  
  
void start()  
{  
          int ans;  
          int count=0;  
          char rating[20];  
  
          FILE *fp; 
          dec();   
  
          if((fp=fopen("play2.txt","a"))==NULL)  
             {  
                 printf("error opening file\n");  
             }  
  

        printf("\n-------------------Please enter your name:---------------------------- \n");  
        scanf("%s",p.name);  
  
  
  
  
        printf("******************* WELCOME \" %s \" TO WINNER WINNER DONUT DINNER *************************** \n\n", p.name);  
  
  
        printf("Q(1).Grand Central Terminal, Park Avenue, New York is the world's \n 1.largest railway station \t\t2.highest railway station\n 3.longest railway station\t\t 4.None of the above\n\n");  
  
        printf("Your answer: ");  
        scanf("%d",&ans);  
  
        if(ans==1)  
        {    
            printf("Correct! +5 points\n\n");  
            ++count;  
            music();
  
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is 1.largest railway station\n\n");  
            music2();
        }  
  
        printf("Q(2) Entomology is the science that studies \n 1.Behavior of human beings\t\t2.Insects \n3.The origin and history of technical and scientific terms\n4.The formation of rocks\n\n");  
        printf("Your answer: ");  
        scanf("%d",&ans);  
  
        if(ans==2)  
        {      
        
            printf("Correct! +5 points\n\n");  
  
                ++count;  music(); 
  
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is 2.Insects\n\n");  music2(); 
        }  
  
        printf("Q(3) Eritrea, which became the 182nd member of the UN in 1993, is in the continent of \n1.Asia\t\t2.Africa\n3.Europe\t4.Australia\n\n");  
  
        printf("Your answer: ");  
        scanf("%d",&ans);  
  
        if(ans==2)  
        { 
            printf("Correct! +5 points\n\n");  
  
                ++count;   music();
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is 2.Africa\n\n");  music2();
        }  
  
  
        printf("Q(4).Garampani sanctuary is located at \n1.Junagarh, Gujarat\t2.Diphu, Assam\n3.Kohima, Nagaland\t4.Gangtok, Sikkim\n\n");  
        printf("Your answer: ");  
        scanf("%d",&ans);  
        if(ans==2)  
        {  music();
            printf("Correct! +5 points\n\n");  
  
                ++count;   music();
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is 2.Diphu, Assam\n\n");  music2();
        }  
  system("CLS");
        printf("Q(5).For which of the following disciplines is Nobel Prize awarded? \n1.Physics and Chemistry\t2.Physiology or Medicine\n3.Literature, Peace and Economics\t4.All of the above\n\n");  
        printf("Your answer: ");  
        scanf("%d",&ans);  
        if(ans==4)  
        {  
            printf("Correct! +5 points\n\n");  
  
                ++count;  
         music();}  
        else  
        {  
            printf("Wrong answer! Correct answer is 4.All of the above\n\n");  music2();
        }  
  
        printf("Q(6).Hitler party which came into power in 1933 is known as \n1.Labour Party\t2.Nazi Party\n3.Ku-Klux-Klan\t4.Democratic Party\n\n");  
        printf("Your answer: ");  
        scanf("%d",&ans);  
        if(ans==2)  
        {  
            printf("Correct! +5 points\n\n");  
  
                ++count;  
    music();     }  
        else  
        {  
            printf("Wrong answer! Correct answer is 2.Nazi Party\n\n");  music2();
        }  
  
        printf("Q(7). FFC stands for \n1.Foreign Finance Corporation\t2.Film Finance Corporation\n3.Federation of Football Council\t4.None of the above\n\n");  
        printf("Your answer: ");  
        scanf("%d",&ans);  
        if(ans==2)  
        {  
            printf("Correct! +5 points\n\n");  
  
                ++count;  
  music();       }  
        else  
        {  
            printf("Wrong answer! Correct answer is 2.Film Finance Corporation\n\n"); music2(); 
        }  
  
        printf("Q(8). Fastest shorthand writer was \n1.Dr. G. D. Bist\t2. J.R.D. Tata\n3. J.M. Tagore\t4. Khudada Khan\n\n");  
        printf("Your answer: ");  
        scanf("%d",&ans);  
        if(ans==1)  
        {  
            printf("Correct! +5 points\n\n");  
  
                ++count;  music(); 
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is 1.Dr. G. D. Bist\n\n");  music2();
        }  
  system("CLS");
        printf("Q(9). Epsom (England) is the place associated with \n1.Horse racing\t2.Polo\n3.Shooting\t4.Snooker\n\n");  
        printf("Your answer: ");  
        scanf("%d",&ans);  
        if(ans==1)  
        { 
            printf("Correct! +5 points\n\n");  
  
                ++count;   music();
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is 1.Horse racing\n\n");  music2();
        }  
  
        printf("Q(10). First human heart transplant operation conducted by Dr. Christian Bernard on Louis Washkansky, was conducted in \n1.1967\t2.1968\n3.1958\t4.1922\n\n");  
        printf("Your answer: ");  
        scanf("%d",&ans);  
        if(ans==1)  
        {  
            printf("Correct! +5 points\n\n");  
  
                ++count;  
         music();}  
        else  
        {  
            printf("Wrong answer! Correct answer is 1. 1967\n\n");  music2();
        }  
  
        printf("Q(11). Frames from one LAN can be transmitted to another LAN via the device \n1. Router\t2. Bridge\n3. Repeater\t4. Modem\n\n");  
        printf("Your answer: ");  
        scanf("%d",&ans);  
        if(ans==2)  
        {  
            printf("Correct! +5 points\n\n");  
  
                ++count; music();  
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is 2. Bridge\n\n");  music2();
        }  
  
        printf("Q(12). Which of the following condition is used to transmit two packets over a medium at the same time?\n1. Contention\t2.  Collision\n3.   Synchronous\tD. Asynchronous\n\n");  
        printf("Your answer: ");  
        scanf("%d",&ans);  
        if(ans==2)  
        { 
            printf("Correct! +5 points\n\n");  
  
                ++count;   music();
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is 2. Collision\n\n");  music2();
        }  
  system("CLS");
        printf("Q(13). What are the most commonly used transmission speeds in BPS used in data communication?\n1.   300\t2. 1200\n3.   2400\t4. 9600\n");  
        printf("Your answer: ");  
        scanf("%d",&ans);  
        if(ans==4)  
        {  
            printf("Correct! +5 points\n\n");  
  
                ++count;   music();
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is 4. 9600\n\n");  music2();
        }  
  
        printf("Q(14).  Which of the following is used for modulation and demodulation?\n1. modem\t2. protocols\n3. gateway\t4. multiplexer\n");  
        printf("Your answer: ");  
        scanf("%d",&ans);  
        if(ans==1)  
        {  
            printf("Correct! +5 points\n\n");  
  
                ++count;   music();
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is 1.modem\n\n");  
       music2(); }  
  
        printf("Q(15). Contention is \n1. One or more conductors that serve as a common connection for a related group of devices\n2.   a continuous frequency capable of being modulated or impressed with a second signal\n3.  the condition when two or more stations attempt to use the same channel at the same time\n4.   a collection of interconnected functional units that provides a data communications service among stations attached to the network\n");  
        printf("Your answer: ");  
        scanf("%d",&ans);  
        if(ans==3)  
        {  
            printf("Correct! +5 points\n\n");  
  
                ++count;   music();
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is  3. the condition when two or more stations attempt to use the same channel at the same time\n\n");  
        music2();}  
  
        printf("Q(16). When you ping the loopback address, a packet is sent where?\n1. On the network\n2. Down through the layers of the IP architecture and then up the layers again\n3. Across the wire\n4. through the loopback dongle\n");  
        printf("Your answer: ");  
        scanf("%d",&ans);  
        if(ans==2)  
        {  
            printf("Correct! +5 points\n\n");  
  
                ++count;   music();
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is  2. Down through the layers of the IP architecture and then up the layers again\n\n");  
        music2();}  
  system("CLS");
        printf("Q(17). Which of the following TCP/IP protocol is used for transferring electronic mail messages from one machine to another?\n1. FTP\t2.    SNMP\n3. SMTP\t4. RPC\n");  
        printf("Your answer: ");  
        scanf("%d",&ans);  
        if(ans==3)  
        {  
            printf("Correct! +5 points\n\n");  
  
                ++count;   music();
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is  3. SMTP\n\n");  music2();
        }  
  
        printf("Q(18). Which of the following device is used to connect two systems, especially if the systems use different protocols?\n1. hub\t2. bridge\n3. gateway\t4. repeater\n");  
        printf("Your answer: ");  
        scanf("%d",&ans);  
        if(ans==3)  
        {  
 
            printf("Correct! +5 points\n\n");  
  
                ++count;   music();
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is  3. gateway\n\n");  music2();
        }  
  
        printf("Q(19). The slowest transmission speeds are those of\n1. twisted-pair wire\t2. coaxial cable\n3. fiber-optic cable\t4.   microwaves\n");  
        printf("Your answer: ");  
        scanf("%d",&ans);  
        if(ans==1)  
        {    
            printf("Correct! +5 points\n\n");  
  
                ++count;   music();
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is  1. twisted-pair wire\n\n");  music2();
        }  
  
        printf("Q(20). What is the port number for NNTP?\n1. 119\t2. 80\n3. 79\t4. 70\n");  
        printf("Your answer: ");  
        scanf("%d",&ans);  
        if(ans==1)  
        {    
            printf("Correct! +5 points\n\n");  
  
                ++count;   music();
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is  1. 119 \n\n");  
         music2();}  
  
  system("CLS");
        //counting number of correct answers and, ratings  
        if(count > 0)  
        {  
                printf("---------->Thanks for playing, Your scored: %d points \t", count*5);  
  
                p.score=count*5;  
  
                if(p.score >= 80)  
                {  
                    printf("--------->Rating: * * * * *");  
                    p.rat=5;  
                }  
                else if(p.score >= 60 && p.score < 80)  
                {  
                    printf("--------->Rating: * * * *");  
                    p.rat=4;  
                }  
                else if(p.score >= 40 && p.score < 60)  
                {  
                    printf("--------->Rating: * * *");  
                  p.rat=3;  
                }  
                else if(p.score >= 20 && p.score < 40)  
                {  
                    printf("---------->Rating: * *");  
                    p.rat=2;  
                }  
                else if(p.score < 20)  
                {  
                    printf("---------->Rating: *");  
                     p.rat=1;  
                }  
  
            //writing to file  
  
                    fprintf(fp,"%s %d %d", p.name,p.score,p.rat);  
                    fclose(fp);  
                    enc();
        }  
        else  
        {  
            printf("Try again!");  
        }
        puts("\n\nCongratualitons on completing the quiz \n\n Heres a donut !!");
        sleep(5);
        
          music();
        donut();  
}  
  
void high_score()  
{  
  
    int ch;  
  dec();
    FILE *fp;  
    if((fp=fopen("play2.txt", "r"))==NULL)  
          {  
                //printf("error opening file\n");  
                printf("\nNo games played yet!\n");  
            }  
            else  
            {  
  
    printf("\n******************************* HIGH SCORES *******************************\n\n");  
    printf("NAME     POINTS     RATING\n");  
    while(fscanf(fp,"%s %d %d",p.name,&p.score, &p.rat) !=EOF)  
    {  
        printf("____________________________\n");  
        printf("%s     %d     %d star(s)\n\n",p.name,p.score,p.rat);  
    }  
  
    fclose(fp);  
  enc();
    }  
    printf("\nContinue playing ? (1 - Yes and 0 - No) :  ");  
    scanf("%d",&ch);  
  
    if(ch==1)  
    {  
        start();  
    }  
    else  
    {  
        exit(1);  
    }
}  
  void music()
 {Beep (330,100);Sleep(100);
 
 Beep (349,100);Sleep(125);
 Beep (466,100);Sleep(125);
 Beep (587,100);
 Beep (2000,675);
 system ("pause");
 
 }
void music2()
 {Beep (1046,675);
 Beep (1046,675);Beep (1046,675);Beep (1046,675);Beep (1046,675);
 Beep (1046,675);
 system ("pause");
 
 
 }
 int dec()
{
    char fname[20]="play2.txt", ch;
    FILE *fps, *fpt;
    
    fps = fopen("play2.txt", "w");
    if(fps == NULL)
        return 0;
    fpt = fopen("temp.txt", "r");
    if(fpt == NULL)
        return 0;
    ch = fgetc(fpt);
    while(ch != EOF)
    {
        ch = ch-100;
        fputc(ch, fps);
        ch = fgetc(fpt);
    }
    fclose(fps);
    fclose(fpt);
    printf("\nFile %s Decrypted Successfully!", fname);
    getch();
    return 0;}
int enc()
{
    char fname[20]="play2.txt", ch;
    FILE *fps, *fpt;
    
    fps = fopen("play2.txt", "r");
    if(fps == NULL)
        return 0;
    fpt = fopen("temp.txt", "w");
    if(fpt == NULL)
        return 0;
    ch = fgetc(fps);
    while(ch != EOF)
    {
        ch = ch+100;
        fputc(ch, fpt);
        ch = fgetc(fps);
    }
    fclose(fps);
    fclose(fpt);
    fps = fopen(fname, "w");
    if(fps == NULL)
        return 0;
    fpt = fopen("temp.txt", "r");
    if(fpt == NULL)
        return 0;
    ch = fgetc(fpt);
    while(ch != EOF)
    {
        ch = fputc(ch, fps);
        ch = fgetc(fpt);
    }
    fclose(fps);
    fclose(fpt);
    printf("\nFile %s Encrypted Successfully!", fname);
    getch();
    return 0;
}
