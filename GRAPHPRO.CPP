
#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
/* by the cod3r*/

void cloud(){
//............middle cloud...........//

		ellipse(200,30,60,240,10,15);
		ellipse(225,20,345,165,20,15);
		ellipse(262,27,340,160,20,15);
		ellipse(268,42,230,50,20,10);
		ellipse(226,46,163,340,31,15);
		ellipse(300,21,20,182,21,19);
		ellipse(325,31,290,100,21,15);
		ellipse(299,45,228,20,33,11);


	//...........left cloud..........//
		ellipse(40,30,60,240,10,15);
		ellipse(65,20,345,165,20,15);
		ellipse(105,27,340,160,20,15);
		ellipse(109,42,230,50,20,10);
		ellipse(66,46,163,340,31,17);

	//.............right cloud..........//
		ellipse(450,30,60,240,10,15);
		ellipse(475,20,345,165,20,15);
		ellipse(512,27,340,160,20,15);
		ellipse(518,42,230,50,20,10);
		ellipse(476,46,163,340,31,15);

}
void tree1()
{

 setcolor(WHITE);
       setfillstyle(SOLID_FILL,GREEN);
       line(240,420,275,420);
       line(240,420,245,405);
       line(275,420,270,405);
       line(245,405,240,405);
       line(270,405,275,405);
       line(240,405,245,390);
       line(275,405,270,390);
       line(245,390,240,390);
       line(270,390,275,390);
       line(240,390,258,370);
       line(275,390,257,370);
       floodfill(259,375,WHITE);
      //tree 1 trunk//
	setcolor(WHITE);
	setfillstyle(SOLID_FILL,BROWN);
	line(250,460,250,420);
	line(265,460,265,420);
	line(250,460,265,460);
	line(250,420,265,420);
	floodfill(255,441,WHITE);
}
void tree2()
{
int c=200,d=-190;

 setcolor(WHITE);
       setfillstyle(SOLID_FILL,GREEN);
       line(240+c,420+d,275+c,420+d);
       line(240+c,420+d,245+c,405+d);
       line(275+c,420+d,270+c,405+d);
       line(245+c,405+d,240+c,405+d);
       line(270+c,405+d,275+c,405+d);
       line(240+c,405+d,245+c,390+d);
       line(275+c,405+d,270+c,390+d);
       line(245+c,390+d,240+c,390+d);
       line(270+c,390+d,275+c,390+d);
       line(240+c,390+d,258+c,370+d);
       line(275+c,390+d,257+c,370+d);
       floodfill(259+c,375+d,WHITE);

      //tree 2 trunk//
      setcolor(WHITE);
	setfillstyle(SOLID_FILL,BROWN);
	line(250+c,460+d,250+c,420+d);
	line(265+c,460+d,265+c,420+d);
	line(250+c,460+d,265+c,460+d);
	line(250+c,420+d,265+c,420+d);
	floodfill(255+c,441+d,WHITE);
}
void tree3()
{
int m=0.5,n=0.5;
 setcolor(WHITE);
       setfillstyle(SOLID_FILL,GREEN);
       line(240*m,420*n,275*m,420*n);
       line(240*m,420*n,245*m,405*n);
       line(275*m,420*n,270*m,405*n);
       line(245*m,405*n,240*m,405*n);
       line(270*m,405*n,275*m,405*n);
       line(240*m,405*n,245*m,390*n);
       line(275*m,405*n,270*m,390*n);
       line(245*m,390*n,240*m,390*n);
       line(270*m,390*n,275*m,390*n);
       line(240*m,390*n,258*m,370*n);
       line(275*m,390*n,257*m,370*n);
       floodfill(259*m,375*n,WHITE);

      //tree 3 trunk//
      setcolor(WHITE);
      setfillstyle(SOLID_FILL,BROWN);
	line(250*m,460*n,250*m,420*n);
	line(265*m,460*n,265*m,420*n);
	line(250*m,460*n,265*m,460*n);
	line(250*m,420*n,265*m,420*n);
	floodfill(255*m,441*n,WHITE);

}
void house1()
{ setcolor(WHITE);
       setfillstyle(SOLID_FILL,BROWN);
       line(88,400,163,400);
       line(100,370,88,400);
       line(100,370,112,400);
       line(100,370,150,370);
       line(150,370,163,400);
       floodfill(100,375,WHITE);

       setcolor(WHITE);
       setfillstyle(SOLID_FILL,BROWN);
       line(88,400,163,400);
       line(100,370,112,400);
       line(100,370,150,370);
       line(150,370,163,400);
       floodfill(105,375,WHITE);

       setcolor(WHITE);
       setfillstyle(SOLID_FILL,5);
       line(112,400,112,440);
       line(88,440,112,440);
       line(88,400,88,440);
       line(112,440,163,440);
       floodfill(90,402,WHITE);

       setcolor(WHITE);
       setfillstyle(SOLID_FILL,5);
       line(163,400,163,440);
       line(112,440,163,440);
       line(112,400,112,440);
       line(88,400,163,400);
       floodfill(115,405,WHITE);

       //1st house door//
       setcolor(WHITE);
       setfillstyle(SOLID_FILL,RED);
       line(94,440,94,420);
       line(106,440,106,420);
       line(94,420,106,420);
       floodfill(97,435,WHITE);
}

void house2()
{
		//a,b,c,d are used for translation
	int a=200,b=-190;
   //	int c=200,d=-190;

	//x,y,m,n are used for scaling
 //	float x=0.5,y=0.5;
 //	float m=0.5,n=0.5;


	setcolor(WHITE);
	setfillstyle(SOLID_FILL,BROWN);
	line(88+a,400+b,163+a,400+b);
	line(100+a,370+b,88+a,400+b);
	line(100+a,370+b,112+a,400+b);
	line(100+a,370+b,150+a,370+b);
	line(150+a,370+b,163+a,400+b);
	floodfill(100+a,375+b,WHITE);

	setcolor(WHITE);
	setfillstyle(SOLID_FILL,BROWN);
	line(88+a,400+b,163+a,400+b);
	line(100+a,370+b,112+a,400+b);
	line(100+a,370+b,150+a,370+b);
	line(150+a,370+b,163+a,400+b);
	floodfill(105+a,375+b,WHITE);

	setcolor(WHITE);
	setfillstyle(SOLID_FILL,5);
	line(112+a,400+b,112+a,440+b);
	line(88+a,440+b,112+a,440+b);
	line(88+a,400+b,88+a,440+b);
	line(112+a,440+b,163+a,440+b);
	floodfill(90+a,402+b,WHITE);

	setcolor(WHITE);
	setfillstyle(SOLID_FILL,5);
	line(163+a,400+b,163+a,440+b);
	line(112+a,440+b,163+a,440+b);
	line(112+a,400+b,112+a,440+b);
	line(88+a,400+b,163+a,400+b);
	floodfill(115+a,405+b,WHITE);
	//2nd house door//

	setcolor(WHITE);
	setfillstyle(SOLID_FILL,RED);
	line(94+a,440+b,94+a,420+b);
	line(106+a,440+b,106+a,420+b);
	line(94+a,420+b,106+a,420+b);
	floodfill(97+a,435+b,WHITE);
}
void house3()
{
		//a,b,c,d are used for translation
      //	int a=200,b=-190;
      //	int c=200,d=-190;

	//x,y,m,n are used for scaling
	float x=0.5,y=0.5;
     //	float m=0.5,n=0.5;


	setcolor(WHITE);
	setfillstyle(SOLID_FILL,BROWN);
	line(88*x,400*y,163*x,400*y);
	line(100*x,370*y,88*x,400*y);
	line(100*x,370*y,112*x,400*y);
	line(100*x,370*y,150*x,370*y);
	line(150*x,370*y,163*x,400*y);
	floodfill(100*x,375*y,WHITE);

	setcolor(WHITE);
	setfillstyle(SOLID_FILL,BROWN);
	line(88*x,400*y,163*x,400*y);
	line(100*x,370*y,112*x,400*y);
	line(100*x,370*y,150*x,370*y);
	line(150*x,370*y,163*x,400*y);
	floodfill(105*x,375*y,WHITE);

	setcolor(WHITE);
	setfillstyle(SOLID_FILL,5);
	line(112*x,400*y,112*x,440*y);
	line(88*x,440*y,112*x,440*y);
	line(88*x,400*y,88*x,440*y);
	line(112*x,440*y,163*x,440*y);
	floodfill(90*x,402*y,WHITE);

	setcolor(WHITE);
	setfillstyle(SOLID_FILL,5);
	line(163*x,400*y,163*x,440*y);
	line(112*x,440*y,163*x,440*y);
	line(112*x,400*y,112*x,440*y);
	line(88*x,400*y,163*x,400*y);
	floodfill(115*x,405*y,WHITE);
	//3rd house door//

	setcolor(WHITE);
	setfillstyle(SOLID_FILL,RED);
	line(94*x,440*y,94*x,420*y);
	line(106*x,440*y,106*x,420*y);
	line(94*x,420*y,106*x,420*y);
	floodfill(97*x,435*y,WHITE);
	}

void main()
{
	int gd,gm,i;
	float left, right,top,bottom;
	detectgraph(&gd,&gm);
	initgraph(&gd,&gm,"..\\BGI");

	int midx = getmaxx()/2;
	int midy = getmaxy()/2;

	//top
	 /* setting the color of the top */
	 setcolor(LIGHTBLUE);
	 setlinestyle(SOLID_LINE, 1, 1);
	 setfillstyle(SOLID_FILL, LIGHTBLUE);

	/* draw the top */
	 rectangle(0,0, getmaxx(), getmaxy());
	 floodfill(getmaxx() - 10, getmaxy() - 10, LIGHTBLUE);


	//middle
	 /* setting the color of the middle*/
	 setcolor(GREEN);
	 setlinestyle(SOLID_LINE, 1, 1);
	 setfillstyle(SOLID_FILL, GREEN);

	/* draw the river/middle....neg yaxis goes up */
	 rectangle(0,midy - 90, getmaxx(), getmaxy());
	 floodfill(getmaxx() - 10, getmaxy() - 10, GREEN);

	//bottom
	 /* setting the color of the bottom */
	 setcolor(DARKGRAY);
	 setlinestyle(SOLID_LINE, 1, 1);
	 setfillstyle(SOLID_FILL, DARKGRAY);

	/* draw the bottom */
	 rectangle(0,midy + 85, getmaxx(), getmaxy());
	 floodfill(getmaxx() - 10, getmaxy() - 10, DARKGRAY);



	//a,b,c,d are used for translation
	//int a=200,b=-190;
	//int c=200,d=-190;

	//x,y,m,n are used for scaling
	//float x=0.5,y=0.5;
      //	float m=0.5,n=0.5;



	//............3 clouds..........//
	 cloud();
       //.................3 trees..............//

       //...............tree 1...................//
       //tree 1 crown//
	 tree1();
	  //...............tree 2...................//
       //tree 2 crown//
	 tree2();
	  //...............tree 3...................//
       //tree 3 crown//
	  tree3();
       //..........3 house.............//
       //........1st house...........//
       //triangle of house//
	  house1();

		//.......2nd house............//
	/*this house is a translation(transformation)of 1st house.*/
		//triangle of 2nd house//
	  house2();
	//.......3rd house............//
		/*this house is a translation(transformation)of 1st house.*/
		//triangle of 3rd house//
	  house3();

	//1st triangle......//
	setcolor(WHITE);         //boundary color mountain
	setfillstyle(SOLID_FILL,LIGHTGRAY);     //ACTUAL COLOR OF MOUNTAIN
	line(0,150,100,75);
	line(100,75,200,150);

	//2nd triangle
	setcolor(WHITE);
	setfillstyle(SOLID_FILL,DARKGRAY);
	line(175,131,275,75);
	line(275,75,375,150);

	//3rd triangle
	setcolor(WHITE);
	setfillstyle(SOLID_FILL,GREEN);
	line(350,131,450,75);
	line(450,75,550,150);

	//4th triangle
	setcolor(WHITE);
	setfillstyle(SOLID_FILL,LIGHTGREEN);
	line(525,131,600,75);
	line(600,75,750,180);

	line(0,150,750,150);//bottom line of mountain
	floodfill(100,136,WHITE);  //take any 2 coordinates of 1 triangle
	floodfill(275,136,WHITE);  //2 triangle
	floodfill(450,136,WHITE);  //3 triangle
	floodfill(600,136,WHITE);  //4 trinagle

	setcolor(WHITE);
	setfillstyle(SOLID_FILL,YELLOW);
	arc(178,112,0,180,30);
	floodfill(171,109,WHITE);



	//prev. code of sky

	for(int s=20;s<=500;s+=2)//......final speed is 500.....
	{

	//..................................new car...........................................
	int car1 [16];
	car1[0] = midx-320+s;//1st vertex
	car1[1] = midy+60;//.........top left

	car1[2] = midx-310+s;
	car1[3] = midy+60; //15.....20 // b_left

	car1[4] = midx-290+s;
	car1[5] = midy+40; //15.....20 // t_left

	car1[6] = midx-240+s;
	car1[7] = midy+40; //15.....20 // t_right

	car1[8] = midx-220+s;
	car1[9] = midy+60; //15.....20 // b_right

	car1[10] = midx-200+s;
	car1[11] = midy+60; //15.....20 //26

	car1[12] = midx-200+s; // 3rd
	car1[13] = midy+76; //33.....38 //44
	// 4th vertex.closes the polygon.
	car1[14] = midx-320+s;
	car1[15] = midy+76;

	/* set fill pattern */
	   setfillstyle(SOLID_FILL, BROWN);
	   /* draw a filled polygon */
	   fillpoly(8, car1);



	//to cover behind the car
	setcolor(GREEN);
	//line(midx-312+s,midy+60,midx-289+s,midy+39);
	int cover1[16];
	cover1[0] = midx-330+s;//t_left
	cover1[1] = midy+40;

	cover1[2] = midx-290+s;
	cover1[3] = midy+40; //..... // t_car

	cover1[4] = midx-310+s;
	cover1[5] = midy+60; //..... // b_window

	cover1[6] = midx-320+s;
	cover1[7] = midy+60; //..... // b_t_car

	cover1[8] = midx-320+s;
	cover1[9] = midy+76; //..... // b_b_car

	cover1[10] = midx-200+s;
	cover1[11] = midy+76; //..... //wheel_t

	cover1[12] = midx-200+s; // 3rd
	cover1[13] = midy+82; //..... //wheel_b
	// 4th vertex.closes the polygon.
	cover1[14] = midx-330+s;//.............close
	cover1[15] = midy+82;

	/* set fill pattern */
	   setfillstyle(SOLID_FILL, GREEN);//....color of the cover
	   /* draw a filled polygon */
	   fillpoly(8, cover1);

	//smoke

	if(s%4==0)
{
		setcolor(GREEN);
		setfillstyle(SOLID_FILL, GREEN);
		fillellipse(midx-325+s, midy+76, 2,2);

}
	else
{
		setcolor(BLACK);
		setfillstyle(SOLID_FILL, BLACK);
		fillellipse(midx-325+s, midy+76, 2,2);

//smoke cover
	setcolor(GREEN);
	setfillstyle(SOLID_FILL, GREEN);
	fillellipse(midx-400+s, midy+76, 2,2);
}



	//road

	setcolor(WHITE);
	line(0,322,700,322);

	//wheels

	setcolor(DARKGRAY);
	setfillstyle(SOLID_FILL, DARKGRAY);
	fillellipse(midx-290+s, midy+76, 6,6);
	fillellipse(midx-240+s, midy+76, 6,6);


	//back window
	int win1 [8];
	win1[0] = midx-285+s;//1st vertex
	win1[1] = midy+45;//.........top left

	win1[2] = midx-270+s;
	win1[3] = midy+45; //15.....20 // top_right

	win1[4] = midx-270+s;
	win1[5] = midy+60; //15.....20 // b_right

	win1[6] = midx-300+s;
	win1[7] = midy+60; //15.....20 // b_left

	/* set fill pattern */
	   setfillstyle(SOLID_FILL, BLACK);
	   /* draw a filled polygon */
	   fillpoly(4, win1);

	//front window
	int win2 [8];
	win2[0] = midx-260+s;//1st vertex
	win2[1] = midy+45;//.........top left

	win2[2] = midx-245+s;
	win2[3] = midy+45; //15.....20 // top_right

	win2[4] = midx-230+s;
	win2[5] = midy+60; //15.....20 // b_right

	win2[6] = midx-260+s;
	win2[7] = midy+60; //15.....20 // b_left

	/* set fill pattern */
	   setfillstyle(SOLID_FILL, BLACK);
	   /* draw a filled polygon */
	   fillpoly(4, win2);
	delay(80);
	//cleardevice();........do not use clear device it blanks the screen


	}//end of for loop


   /*	//MAN
	//for head
	ellipse(320,95,360,0,25,20);
	line(298,85,341,85);
	circle(310,90,2);
	circle(330,90,2);
	arc(320,100,200,-20,10);

	//for neck
	line(313,115,313,125);
	line(328,115,328,125);

	//for centre part
       //	setcolor(WHITE);
      //	setfillstyle(SOLID_FILL,YELLOW);
	arc(320,225,72,107,100);
	line(290,129,290,200);
	line(350,129,350,200);
	line(290,193,350,193);
	line(290,200,350,200);
     //	floodfill(310,201,WHITE);

	//for legs
	line(290,200,285,280);
	line(320,225,305,280);
	line(322,225,335,280);
	line(350,200,355,280);

	//for right hand
	line(290,129,255,165);
	line(255,165,290,200);
	line(290,149,275,165);
	line(275,165,290,182);

	//for left hand
	line(350,129,385,165);
	line(385,165,350,200);
	line(350,149,365,165);
	line(365,165,350,182);

	//for shoes
	line(285,280,275,287);
	line(275,287,305,287);
	line(305,280,305,287);

	line(335,280,335,287);
	line(335,287,365,287);
	line(355,280,365,287);


	//for name
	settextstyle(2,HORIZ_DIR,4);
	outtextxy(293,150,"The Crazy");
	outtextxy(292,160,"Programmer");    */



	getch();
	closegraph();

	}