// Graphics

#include<graphics.h>
#include<stdio.h>
#include<conio.h>
int main(){
    int gd = DETECT ,gm;
    /*requests auto detection
    DETECT is a macro defined in graphics.h header file
    gm= graphics mode*/

    initgraph( &gd,&gm,"");
    /*initializes the graphic system*/

    //Draw a line
    line(100,100,200,200);
    /*Draws line from (100,100) to (200,200)*/

    // Draw a circle
    circle(2,3,5);
    /* (2,3) is center of circle and 5 is the radius*/

    // Draw a rectangle and square
    rectangle(100,100,300,300);
    /* rectangle(left,top,right,bottom);
    if left=top and right=bottom it draws a square*/

    // Draw an ellipse
    ellipse(200,200,0,360,80,100);
    /*ellipse(x,y,start_angle,end_angle,x_radius,y_radius); */

    //Draw a traingle
    line(100,100,200,200);
    line(100,100,300,200);
    line(300,200,200,200);

    //Prints text on the screen
    outtextxy(x,y,"Hello World");
    /* (x,y) represents the position */

    getch();

    closegraph();
    /*closes the graphics mode and deallocates the memory*/
    return 0;
}
