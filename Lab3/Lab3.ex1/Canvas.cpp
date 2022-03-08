#include "Canvas.h"
#include <stdlib.h>  
#include <iostream>
using namespace std;


 Canvas::Canvas(int w, int h)
{
     this->height = h;
     this->width = w;
     matrix = (char**)(malloc(height * sizeof(char*)));
     for (int i = 0; i < height; i++)
         matrix[i] = (char*)(malloc(width * sizeof(char)));
     for (int i = 0; i < this->height; i++)
         for (int j = 0; j < this->width; j++)
             matrix[i][j] = ' ';
}

 void Canvas::DrawCircle(int x, int y, int ray, char ch)
 {
     int i, j;
     for(i=0;i<this->height;i++)
         for (j = 0; j < this->width; j++)
         {
             if (((i - x) * (i - x) + (j - y) * (j - y)) >= (ray*(ray - 1)) && ((i - x) * (i - x) + (j - y) * (j - y)) <= (ray*(ray + 1)))
                 matrix[i][j] = ch;
         }
 }

 void Canvas::FillCircle(int x, int y, int ray, char ch)
 {
     int i, j;
     for (i = 0; i < this->height; i++)
         for (j = 0; j < this->width; j++)
         {
             if ((((i - x) * (i - x) + (j - y) * (j - y)) <= (ray * ray)))
                 matrix[i][j] = ch;
         }
 }

 void Canvas::FillRect(int left, int top, int right, int bottom, char ch)
 {
     int i, j;
    
     for (i = 0; i < this->height; i++)
         for (j = 0; j < this->width; j++)
         {
             if ((i >= top && i <= bottom)&&(j>=left&&j<=right))
             {
                 matrix[i][j] = ch;
                 matrix[i][j] = ch;
             }
                 
         } 
 }

 void Canvas::DrawRect(int left, int top, int right, int bottom, char ch)
 {
     int i, j;
     for (i = 0; i < this->height; i++)
         for (j = 0; j < this->width; j++)
         {
           
             if ((i == top || i == bottom)&& (j >= left && j <= right))
             {
                     matrix[i][j] = ch;
             }
             if ((j == left || j == right)&&(i >= top && i <= bottom))
             {
                     matrix[i][j] = ch;
             }

         }
 }

 void Canvas::SetPoint(int x, int y, char ch)
 {
     int i, j;
     matrix[x][y] = ch;
 }


 void Canvas::DrawLine(int x1, int y1, int x2, int y2, char ch)
 {
     int dx, dy, d, y;
     dx = x2 - x1;
     dy = y2 - y1;
     d = 2 * dy - dx;
     y = y1;
     for (int i = x1; i < x2; i++)
     {
         matrix[i][y] = ch;
         if (d > 0)
         {
             y = y + 1;
             d = d - 2 * dx;
         }
         d = d + 2 * dy;
     }

 }

 void Canvas::Print()
 {
     int i, j;
     for (i = 0; i < this->height; i++)
     {
         {for (j = 0; j < this->width; j++)
             cout << matrix[i][j] << " "; }
         cout << endl;
     }
 }

 void Canvas::Clear()
 {
     for (int i = 0; i < this->height; i++)
        for (int j = 0; j < this->width; j++)
             matrix[i][j] = ' ';
 }