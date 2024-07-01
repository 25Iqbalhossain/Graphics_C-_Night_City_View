#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include <dos.h>


int main()
{
    int gd= DETECT, gm;
    initgraph(&gd,&gm,(char*)"");

    setcolor(DARKGRAY);
    line(1,300,900,300); //roadsline1
    line(1,400,900,400);  //roadsline2
    line(1,305,900,305); //roadsline1...
        line(1,405,900,405); //roadsline1..

        //zebra crossing
         rectangle(272,305,305,310);
         rectangle(274,315,307,320);
         rectangle(276,325,309,330);
         rectangle(278,335,311,340);
         rectangle(280,345,313,350);
         rectangle(282,355,315,360);
         rectangle(284,365,317,370);
         rectangle(286,375,319,380);
         rectangle(288,385,321,390);
         rectangle(290,395,323,400);
         floodfill(1,400, DARKGRAY);

            //setcolor(BLUE);
            line(1,150,50,150); //building1...
            line(1,150,1,300); //building1
                line(50,150,50,300); //building1
                line(50,150,70,155); //building1
                line(70,155,70,300); //building1 complete

               rectangle(5,155,45,165); //window
               rectangle(5,175,45,185); //window
                rectangle(5,195,45,205); //window
                rectangle(5,215,45,225); //window
                rectangle(5,235,45,245);
                rectangle(5,255,45,265);
               rectangle(5,275,45,285);
                //setfillstyle(SOLID_FILL,BLUE);
                //floodfill(5, 150, BLUE);

                //setcolor(GREEN);
                //setfillstyle(11,GREEN);

                line(60,100,110,100); //building2
                line(60,100,60,152); //building2
                line(110,100,115,105); //building2
                line(110,100,110,300); //building2
                line(115,105,115,300); //building2
                //building 2 window
                setcolor(DARKGRAY);
                rectangle(65,110,105,125);
                line(83,110,83,125); line(85,110,85,125);
                 rectangle(65,135,105,150); line(83,135,83,150); line(85,135,85,150);
                  rectangle(70,160,105,175); line(83,160,83,175); line(85,160,85,175);
                   rectangle(70,185,105,200); line(83,185,83,200); line(85,185,85,200);
                    rectangle(70,210,105,225); line(83,210,83,225); line(85,210,85,225);
                    rectangle(70,235,105,250); line(83,235,83,250); line(85,235,85,250);
                    rectangle(70,260,105,275); line(83,260,83,275); line(85,260,85,275);
                      setfillstyle(SOLID_FILL, GREEN);
                //floodfill(66,92,15);

                setcolor(DARKGRAY);
                //line(115,160,140,160); //shortbuilding3
                //line(115,160,115,300); //shortbuilding3
                //line(140,160,140,190); //shortbuilding3
                setfillstyle(SOLID_FILL,DARKGRAY);

                rectangle(118,190,190,300); //shortbuilding4
                //line(190,190,118,190); //shortbuilding4
                //line(190,190,190,300); //shortbuilding4
                rectangle(123,200,185,300);//GREEN
                rectangle(128,210,180,300);
                rectangle(133,220,175,300);

                //setcolor(9,BROWN);
                rectangle(115,115,200,300);//pichoner building 5
                setfillstyle(11,YELLOW);
                rectangle(120,125,195,145); line(125,125,125,145); line(130,125,130,145); line(135,125,135,145); line(140,125,140,145); line(145,125,145,145); line(150,125,150,145); line(155,125,155,145); line(160,125,160,145); line(165,125,165,145); line(170,125,170,145); line(175,125,175,145); line(180,125,180,145); line(185,125,185,145); line(190,125,190,145);
                rectangle(120,155,195,175);line(125,155,125,175); line(130,155,130,175); line(135,155,135,175); line(140,155,140,175); line(145,155,145,175); line(150,155,150,175); line(155,155,155,175); line(160,155,160,175); line(165,155,165,175); line(170,155,170,175); line(175,155,175,175); line(180,155,180,175); line(185,155,185,175); line(190,155,190,175);
                //floodfill(120,125,15);

                //setfillstyle(SOLID_FILL, BROWN);
                //floodfill(115, 115, BROWN);

                rectangle(200,98,270,300); //building6
                // building 6 windows
                rectangle(210,108,260,128);
                rectangle(210,138,260,158);
                rectangle(210,168,260,188);
                rectangle(210,198,260,218);
                rectangle(210,228,260,248);
                rectangle(210,258,260,278);
                rectangle(230,288,250,300);




//building 7 windows
                rectangle(305,160,330,180); //1
                rectangle(340,160,365,180);// 2
                rectangle(305,190,330,210);//1
                rectangle(340,190,365,210);//2
                rectangle(305,220,330,240);//1
                rectangle(340,220,365,240);//2
                rectangle(305,250,330,270);//1
                rectangle(340,250,365,270);//2
                rectangle(320,280,350,300);//gate

                rectangle(300,150,370,300); //building7
                line(280,170,300,150); //build7side
                line(280,170,280,300); //build7side
                //rectangle(280,170,300,300); //building7sidepart

                //building 8 windows
                rectangle(405,110,440,150); line(405,140,440,140); line(405,142,440,142); line(405,144,440,144); line(405,146,440,146); line(405,148,440,148);
                rectangle(450,110,485,150); line(450,140,485,140); line(450,142,485,142); line(450,144,485,144); line(450,146,485,146); line(450,148,485,148);
                rectangle(405,160,440,200); line(405,190,440,190); line(405,192,440,192); line(405,194,440,194); line(405,196,440,196); line(405,198,440,198);
                rectangle(450,160,485,200); line(450,190,485,190); line(450,192,485,192); line(450,194,485,194); line(450,196,485,196); line(450,198,485,198);
                rectangle(405,210,440,250); line(405,240,440,240); line(405,242,440,242); line(405,244,440,244); line(405,246,440,246); line(405,248,440,248);
                rectangle(450,210,485,250); line(450,240,485,240); line(450,242,485,242); line(450,244,485,244); line(450,246,485,246); line(450,248,485,248);
                rectangle(410,260,480,300);
                rectangle(400,100,490,300); //building8
                line(365,150,365,145); //build8side
                line(400,100,365,145); //build8side
                //rectangle(365,150,400,300); //building8sidepart


                setfillstyle(6,7);
                rectangle(490,95,550,300); //build9
                //windows
                rectangle(495,105,515,145);
                rectangle(525,105,545,145);
                rectangle(495,155,515,195);
                rectangle(525,155,545,195);
                rectangle(495,205,515,245);
                 rectangle(525,205,545,245);
                 rectangle(495,255,515,295);
                  rectangle(525,255,545,295);




                rectangle(550,130,610,300); //build10


                line(610,130,640,150); //build10side
                rectangle(560,140,575,160);
                rectangle(585,140,600,160);
                rectangle(560,170,575,190);
                rectangle(585,170,600,190);
                rectangle(560,200,575,220);
                rectangle(585,200,600,220);
                rectangle(560,230,575,250);
                rectangle(585,230,600,250);
                rectangle(560,260,600,300); line(580,260,580,300);


                //moon
                setcolor(WHITE);
                circle(200, 5, 50);
                setfillstyle(SOLID_FILL, WHITE);
                floodfill(200, 5, WHITE);


                //circle(200,5,20); //moon
//star's
putpixel(100,70,WHITE);
putpixel(210,60,WHITE);putpixel(120,50,WHITE);putpixel(830,40,WHITE);
putpixel(300,70,WHITE);putpixel(420,50,WHITE);putpixel(530,40,WHITE);
putpixel(10,60,WHITE);putpixel(120,10,WHITE);putpixel(880,20,WHITE);
putpixel(350,20,WHITE);putpixel(380,10,WHITE);putpixel(690,30,WHITE);
putpixel(750,70,WHITE);putpixel(280,40,WHITE);putpixel(600,30,WHITE);




                setcolor(DARKGRAY);
                line(90,400,90,280); //lamppost
                line(90,280,95,276); //lamppost
                line(90,280,85,304); //lamppost
                circle(95,278,2); //lamplight1
                putpixel(95,278,YELLOW);
                 putpixel(95,280,YELLOW);
                circle(85,306,2); //lamplight2
                 putpixel(85,306,YELLOW);
                 putpixel(85,308,YELLOW);
                setfillstyle(SOLID_FILL, DARKGRAY);


                setcolor(DARKGRAY);
                line(270,400,270,280); //lamppost2
                line(270,280,275,276); //lamppost2
                line(270,280,265,304); //lamppost2
                circle(275,278,2); //lamplight1-2
                putpixel(275,278,YELLOW);
                putpixel(275,280,YELLOW);
                circle(265,306,2); //lamplight2-2
                putpixel(265,306,YELLOW);
                putpixel(265,308,YELLOW);
                setfillstyle(SOLID_FILL, DARKGRAY);

                 setcolor(DARKGRAY);
                line(450,400,450,280); //lamppost3
                line(450,280,455,276); //lamppost3
                line(450,280,445,304); //lamppost3
                circle(455,278,2); //lamplight1-3
                putpixel(455,278,YELLOW);
                putpixel(455,280,YELLOW);
                circle(445,306,2); //lamplight2-3
                putpixel(445,306,YELLOW);
                putpixel(445,308,YELLOW);
                setfillstyle(SOLID_FILL, DARKGRAY);

                 setcolor(DARKGRAY);
                line(630,400,630,280); //lamppost4
                line(630,280,635,276); //lamppost4
                line(630,280,625,304); //lamppost4
                circle(635,278,2); //lamplight1-4
                putpixel(635,278,YELLOW);
                putpixel(635,280,YELLOW);
                circle(625,306,2); //lamplight2-4
                putpixel(625,306,YELLOW);
                putpixel(625,308,YELLOW);
                setfillstyle(SOLID_FILL, DARKGRAY);


//road
rectangle(00,345,30,350);
rectangle(50,345,80,350);
rectangle(100,345,130,350);
rectangle(150,345,180,350);
rectangle(200,345,230,350);
rectangle(250,345,275,350);
rectangle(320,345,350,350);
rectangle(370,345,400,350);
rectangle(420,345,445,350);
rectangle(470,345,500,350);
rectangle(520,345,550,350);
rectangle(570,345,600,350);
rectangle(620,345,650,350);

//road down
rectangle(00,445,30,450);
rectangle(50,445,80,450);
rectangle(100,445,130,450);
rectangle(150,445,180,450);
rectangle(200,445,230,450);
rectangle(250,445,280,450);
rectangle(320,445,350,450);
rectangle(370,445,400,450);
rectangle(420,445,445,450);
rectangle(470,445,500,450);
rectangle(520,445,550,450);
rectangle(570,445,600,450);
rectangle(620,445,650,450);


//car1 left to right
rectangle(120,360,140,370);
line(140,370,160,370);
line(120,360,115,360);
line(120,370,105,370);
line(105,370,115,360);
line(105,370,100,370);
line(140,360,160,370);
line(160,370,170,370);
line(170,370,170,380);
line(100,370,100,380);
line(100,380,110,380);
line(170,380,155,380);
line(145,380,120,380);
arc(115,380,0,180,5);
arc(150,380,0,180,5);

setcolor(WHITE);
        setfillstyle(SOLID_FILL, DARKGRAY);
circle(150,  380, 5);
circle(115 ,  380, 5);
circle(150,  380, 2);
circle(115 ,  380, 2);

       floodfill(150, 380, WHITE);
        floodfill(115, 380, WHITE);



        //car 2 right to left
    rectangle(520,310,540,320);
line(540,320,530,320);
line(540,310,545,310);
line(545,310,550,320);
line(540,320,550,320);
line(520,320,500,320);
line(520,310,500,320);
line(500,320,490,320);
line(490,320,490,330);
line(550,320,555,320);
line(555,320,555,330);
line(490,330,500,330);
line(555,330,550,330);
line(510,330,540,330);


setcolor(WHITE);
      setfillstyle(SOLID_FILL, DARKGRAY);
circle(545,  330, 5);
circle(505 ,  330, 5);
circle(545,  330, 2);
circle(505 ,  330, 2);

      floodfill(545, 330, WHITE);
      floodfill(505, 330, WHITE);


//colore
//bulid 7
setcolor(YELLOW);
rectangle(339,189,364,209);//2
rectangle(304,249,329,269);//1
rectangle(304,159,329,179); //1
setfillstyle(SOLID_FILL ,YELLOW);
floodfill(340,190,YELLOW);
floodfill(305,250,YELLOW);
floodfill(305,160,YELLOW);

//build 10
rectangle(559,169,574,189);
rectangle(585,230,600,250);
floodfill(560,170,YELLOW);
floodfill(586,231,YELLOW);

 getch();
    closegraph();
    return 0;
}
