/**
 * @file    Planeta.cpp
 * @brief   Archivo del proyecto: proyect
 * @author  Daniel Moya Leiva
 * @version 1.0
 * @date    15/12/16
 *
 *   Copyright © 2016 Daniel Moya. All rights reserved.
 */

#include <OpenGL/gl.h>
#include <OpenGL/glu.h>
#include <GLUT/glut.h>

#include <unistd.h> //Incluir <Windows.h> en Windows

#include <iostream>
#include "Planeta.h"
#include "igvTextura.h"


/****************************************************************************************/
/**                                                                                    **/
/**                    Implementación Planeta.cpp                                      **/
/**                                                                                    **/
/****************************************************************************************/


Planeta::Planeta(std::string nombre, tVector3 posicion)
:   nombre(nombre)
, posicion(posicion)
{
  
};

Planeta::Planeta(const Planeta &orig) {
  nombre = orig.nombre;
  posicion = orig.posicion;
};

Planeta::~Planeta() {};


GLfloat blanco[] = {0.2, 0.2, 0.2};                                                       //Color por si no cargaran las texturas
GLfloat angle = 0;

void Planeta::dibujar() {
  if(explotado) {
    return;
  } else {
    
    angle += 0.1;
    
    glPushMatrix();
      glMaterialfv(GL_FRONT, GL_EMISSION, blanco);
      
      glTranslatef(posicion.x, posicion.y, posicion.z);
      glRotatef(angle, 0, 1, 0);
      
      GLuint id;
      glGenTextures(1, &id);
      glBindTexture(GL_TEXTURE_2D, id);
      glEnable(GL_TEXTURE_2D);
    
      GLUquadric *qobj = gluNewQuadric();
      gluQuadricTexture(qobj, GL_TRUE);
      
      if(nombre == "sol")             {
        igvTextura textSol(       "/Users/dani/Desktop/texturas/sol.bmp");
        textSol.aplicar();
        gluSphere(qobj, 6,    50, 50);
      }else if(nombre == "mercurio")  {
        igvTextura textMerc(      "/Users/dani/Desktop/texturas/mercurio.bmp");
        textMerc.aplicar();
        gluSphere(qobj, 1,    50, 50);
      }else if(nombre == "venus")     {
        igvTextura textVenus(     "/Users/dani/Desktop/texturas/venus.bmp");
        textVenus.aplicar();
        gluSphere(qobj, 1.5,  50, 50);
      }else if(nombre == "tierra")    {
        igvTextura textTierra(    "/Users/dani/Desktop/texturas/tierra.bmp");
        textTierra.aplicar();
        gluSphere(qobj, 2,    50, 50);
      }else if(nombre == "marte")     {
        igvTextura textMarte(     "/Users/dani/Desktop/texturas/marte.bmp");
        textMarte.aplicar();
        gluSphere(qobj, 1.5,  50, 50);
      }else if(nombre == "jupiter")   {
        igvTextura textJupiter(   "/Users/dani/Desktop/texturas/jupiter.bmp");
        textJupiter.aplicar();
        gluSphere(qobj, 4.5,  50, 50);
      }else if(nombre == "saturno")   {
        igvTextura textSaturno(   "/Users/dani/Desktop/texturas/saturno.bmp");
        textSaturno.aplicar();
        gluSphere(qobj, 4,    50, 50);
      }else if(nombre == "urano")     {
        igvTextura textUrano(     "/Users/dani/Desktop/texturas/urano.bmp");
        textUrano.aplicar();
        gluSphere(qobj, 3.5,  50, 50);
      }else if(nombre == "neptuno")   {
        igvTextura textNeptuno(   "/Users/dani/Desktop/texturas/neptuno.bmp");
        textNeptuno.aplicar();
        gluSphere(qobj, 3,    50, 50);
      }else if(nombre == "pluton")    {
        igvTextura textPluton(    "/Users/dani/Desktop/texturas/pluton.bmp");
        textPluton.aplicar();
        gluSphere(qobj, 0.5,  50, 50);
      }
    
      gluDeleteQuadric(qobj);
      glDisable(GL_TEXTURE_2D);
    glPopMatrix();
  }
}

void Planeta::explotar() {
  glMaterialfv(GL_FRONT, GL_EMISSION, blanco);
  glPushMatrix();
    glTranslatef(posicion.x, posicion.y, posicion.z);
    if(nombre == "sol") {
      //TODO - Implementar explosión
    }else if(nombre == "mercurio")  {
      //TODO - Implementar explosión
    }else if(nombre == "venus")     {
      //TODO - Implementar explosión
    }else if(nombre == "tierra")    {
      //TODO - Implementar explosión
    }else if(nombre == "marte")     {
      //TODO - Implementar explosión
    }else if(nombre == "jupiter")   {
      //TODO - Implementar explosión
    }else if(nombre == "saturno")   {
      //TODO - Implementar explosión
    }else if(nombre == "urano")     {
      //TODO - Implementar explosión
    }else if(nombre == "neptuno")   {
      //TODO - Implementar explosión
    }else if(nombre == "pluton")    {
      //TODO - Implementar explosión
    }
  glPopMatrix();
}








