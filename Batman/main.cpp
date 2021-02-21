#include<windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
void myDisplay()
{
glClear (GL_COLOR_BUFFER_BIT);



for(int x=160; x<500;x+=20){

    for (int y=40;y<60; y+=20){
        glBegin(GL_QUADS);
        glColor3f(.25,0,0);
            glVertex2i(x,y);
            glVertex2i(x+20,y);
            glVertex2i(x+20,y+20);
            glVertex2i(x,y+20);
glEnd();
    }

}

for(int x=140; x<520;x+=20){

    for (int y=60;y<80; y+=20){
        glBegin(GL_QUADS);
        if(x==140 || x==500){
             glColor3f(.25,0,0);
        }
        else{
            glColor3f(1,1,0);
        }
            glVertex2i(x,y);
            glVertex2i(x+20,y);
            glVertex2i(x+20,y+20);
            glVertex2i(x,y+20);
glEnd();
    }

}

for(int x=120; x<540;x+=20){

    for (int y=80;y<100; y+=20){
        glBegin(GL_QUADS);
        if(x==120 || x==200 || x==440|| x==520 || x==320){
             glColor3f(.25,0,0);
        }
        else{
            glColor3f(1,1,0);
        }
            glVertex2i(x,y);
            glVertex2i(x+20,y);
            glVertex2i(x+20,y+20);
            glVertex2i(x,y+20);
glEnd();
    }

}

for(int x=100; x<560;x+=20){

    for (int y=100;y<120; y+=20){
        glBegin(GL_QUADS);
        if(x==100 || x==160 || x==180|| x==200 || x==320||x==300|| x==340|| x==480||x==460|| x==440|| x==540){
             glColor3f(.25,0,0);
        }
        else{
            glColor3f(1,1,0);
        }
            glVertex2i(x,y);
            glVertex2i(x+20,y);
            glVertex2i(x+20,y+20);
            glVertex2i(x,y+20);
glEnd();
    }

}

for(int x=80; x<580;x+=20){

    for (int y=120;y<140; y+=20){
        glBegin(GL_QUADS);
        if(x==80|| x>=140 & x<=220 ||x==320||x==300|| x==340|| x>=420 & x<=500 || x==560){
             glColor3f(.25,0,0);
        }
        else{
            glColor3f(1,1,0);
        }
            glVertex2i(x,y);
            glVertex2i(x+20,y);
            glVertex2i(x+20,y+20);
            glVertex2i(x,y+20);
glEnd();
    }

}

for(int x=60; x<600;x+=20){

    for (int y=140;y<160; y+=20){
        glBegin(GL_QUADS);
        if(x==80|| x==100 || x==260 ||x==380||x==540|| x==560){

                 glColor3f(1,1,0);
        }
        else{
             glColor3f(.25,0,0);
        }
            glVertex2i(x,y);
            glVertex2i(x+20,y);
            glVertex2i(x+20,y+20);
            glVertex2i(x,y+20);
glEnd();
    }

}

for(int x=40; x<620;x+=20){

    for (int y=160;y<180; y+=20){
        glBegin(GL_QUADS);
        if(x==80|| x==60 || x==560||x==580){

                 glColor3f(1,1,0);
        }
        else{
             glColor3f(.25,0,0);
        }
            glVertex2i(x,y);
            glVertex2i(x+20,y);
            glVertex2i(x+20,y+20);
            glVertex2i(x,y+20);
glEnd();
    }

}



for(int x=40; x<620;x+=20){

    for (int y=180;y<200; y+=20){
        glBegin(GL_QUADS);
        if(x==60|| x==580){

                 glColor3f(1,1,0);
        }
        else{
             glColor3f(.25,0,0);
        }
            glVertex2i(x,y);
            glVertex2i(x+20,y);
            glVertex2i(x+20,y+20);
            glVertex2i(x,y+20);
glEnd();
    }

}

for(int x=40; x<620;x+=20){

    for (int y=200;y<220; y+=20){
        glBegin(GL_QUADS);
        if(x==60|| x==580){

                 glColor3f(1,1,0);
        }
        else{
             glColor3f(.25,0,0);
        }
            glVertex2i(x,y);
            glVertex2i(x+20,y);
            glVertex2i(x+20,y+20);
            glVertex2i(x,y+20);
glEnd();
    }

}

for(int x=40; x<620;x+=20){

    for (int y=220;y<240; y+=20){
        glBegin(GL_QUADS);
        if(x==60|| x==580){

                 glColor3f(1,1,0);
        }
        else{
             glColor3f(.25,0,0);
        }
            glVertex2i(x,y);
            glVertex2i(x+20,y);
            glVertex2i(x+20,y+20);
            glVertex2i(x,y+20);
glEnd();
    }

}
for(int x=40; x<620;x+=20){

    for (int y=240;y<260; y+=20){
        glBegin(GL_QUADS);
        if(x==60|| x==580){

                 glColor3f(1,1,0);
        }
        else{
             glColor3f(.25,0,0);
        }
            glVertex2i(x,y);
            glVertex2i(x+20,y);
            glVertex2i(x+20,y+20);
            glVertex2i(x,y+20);
glEnd();
    }

}
for(int x=40; x<620;x+=20){

    for (int y=260;y<280; y+=20){
        glBegin(GL_QUADS);
        if(x==60|| x==580){

                 glColor3f(1,1,0);
        }
        else{
             glColor3f(.25,0,0);
        }
            glVertex2i(x,y);
            glVertex2i(x+20,y);
            glVertex2i(x+20,y+20);
            glVertex2i(x,y+20);
glEnd();
    }

}

for(int x=40; x<620;x+=20){

    for (int y=280;y<300; y+=20){
        glBegin(GL_QUADS);
        if(x==60|| x==580|| x==80|| x==560|| x==220|| x==240|| x==400|| x==420){

                 glColor3f(1,1,0);
        }
        else{
             glColor3f(.25,0,0);
        }
            glVertex2i(x,y);
            glVertex2i(x+20,y);
            glVertex2i(x+20,y+20);
            glVertex2i(x,y+20);
glEnd();
    }

}

for(int x=60; x<600;x+=20){

    for (int y=300;y<320; y+=20){
        glBegin(GL_QUADS);
        if(x==80|| x==540|| x==100|| x==560|| x==200|| x==240|| x==260|| x==220|| x==380|| x==400|| x==420|| x==440){

                 glColor3f(1,1,0);
        }
        else{
             glColor3f(.25,0,0);
        }
            glVertex2i(x,y);
            glVertex2i(x+20,y);
            glVertex2i(x+20,y+20);
            glVertex2i(x,y+20);
glEnd();
    }

}


for(int x=80; x<580;x+=20){

    for (int y=320;y<340; y+=20){
        glBegin(GL_QUADS);
        if(x==120|| x==540|| x==100|| x==520|| x==200|| x==240|| x==260|| x==220|| x==380|| x==400|| x==420|| x==440){

                 glColor3f(1,1,0);
        }
        else{
             glColor3f(.25,0,0);
        }
            glVertex2i(x,y);
            glVertex2i(x+20,y);
            glVertex2i(x+20,y+20);
            glVertex2i(x,y+20);
glEnd();
    }

}

for(int x=100; x<560;x+=20){

    for (int y=340;y<360; y+=20){
        glBegin(GL_QUADS);
        if(x==120|| x==500|| x==140|| x==520|| x==200|| x==240|| x==260|| x==220|| x==380|| x==400|| x==420|| x==440){

                 glColor3f(1,1,0);
        }
        else{
             glColor3f(.25,0,0);
        }
            glVertex2i(x,y);
            glVertex2i(x+20,y);
            glVertex2i(x+20,y+20);
            glVertex2i(x,y+20);
glEnd();
    }

}

for(int x=120; x<540;x+=20){

    for (int y=360;y<380; y+=20){
        glBegin(GL_QUADS);
        if(x==140|| x==500|| x==160|| x==480|| x==240|| x==260|| x==220|| x==400|| x==420|| x==440|| x==380){

                 glColor3f(1,1,0);
        }
        else{
             glColor3f(.25,0,0);
        }
            glVertex2i(x,y);
            glVertex2i(x+20,y);
            glVertex2i(x+20,y+20);
            glVertex2i(x,y+20);
glEnd();
    }

}


for(int x=140; x<520;x+=20){

    for (int y=380;y<400; y+=20){
        glBegin(GL_QUADS);
        if(x==140|| x==280|| x==360|| x==500){


                 glColor3f(.25,0,0);
        }
        else{
               glColor3f(1,1,0);
        }
            glVertex2i(x,y);
            glVertex2i(x+20,y);
            glVertex2i(x+20,y+20);
            glVertex2i(x,y+20);
glEnd();
    }

}

for(int x=160; x<500;x+=20){

    for (int y=400;y<420; y+=20){
        glBegin(GL_QUADS);
        if(x==160|| x==480){


                 glColor3f(.25,0,0);
        }
        else{
               glColor3f(1,1,0);
        }
            glVertex2i(x,y);
            glVertex2i(x+20,y);
            glVertex2i(x+20,y+20);
            glVertex2i(x,y+20);
glEnd();
    }

}

for(int x=180; x<480;x+=20){

    for (int y=420;y<440; y+=20){
        glBegin(GL_QUADS);
        glColor3f(.25,0,0);
            glVertex2i(x,y);
            glVertex2i(x+20,y);
            glVertex2i(x+20,y+20);
            glVertex2i(x,y+20);
glEnd();
    }

}


glFlush ();
}









void myInit ()
{
glClearColor(1,1,1,1);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
gluOrtho2D(0.0, 700.0, 0.0,500.0);
}

main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (620, 480);
glutInitWindowPosition (100, 100);
glutCreateWindow ("BatMan");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}
