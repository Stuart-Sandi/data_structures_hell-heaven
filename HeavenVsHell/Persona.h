#ifndef PERSONA_H
#define PERSONA_H

#include <QString>
#include <QList>
#include <Angel.h>

class Persona
{
public:

    //ENTEROS
    long int id;
    long int totalPecados; 
    long int totalBuenasAcciones;
    long int restaAccionesPecados;

    //STRINGS
    QString nombre;
    QString apellido;
    QString pais;
    QString creencia;
    QString profesion;
    QString correo;
    QString fechaHoraNacimiento;
    QString continente;
    QString demonio;

    //LISTAS
    int pecados[7] = {0,0,0,0,0,0,0};
    int buenasAcciones[7] = {0,0,0,0,0,0,0};
    int restaPecados[7] = {0,0,0,0,0,0,0};
    int restaBuenasAcciones[7] = {0,0,0,0,0,0,0};
    QList <Persona*> listaHijos;

    //BOOLEANOS
    bool isPadre;
    bool isHijo;
    bool inWorld;
    bool inHeaven;
    bool inHell;

    //PERSONA
    Persona * padre;
    Persona * next;
    Persona * before;
    Angel * angel;



    Persona(){
        //ENTEROS
        this->id = 0;
        this->totalPecados = 0;
        this->totalBuenasAcciones = 0;
        this->restaAccionesPecados = 0;

        //STRINGS
        this->nombre = "";
        this->apellido = "";
        this->pais = "";
        this->creencia = "";
        this->profesion = "";
        this->correo = "";
        this->fechaHoraNacimiento = "";
        this->continente = "";
        this->demonio = "";

        //BOOLEANOS
        this->isPadre = false;
        this->isHijo = false;
        this->inWorld = true;
        this->inHeaven = false;
        this->inHell = false;

        //PERSONA
        this->padre = NULL;
        this->next = NULL;
        this->before = NULL;
        this->angel = NULL;
    };

    Persona(long int pId, QString pNombre, QString pApellido, QString pPais, QString pCreencia, QString pProfesion, QString pCorreo, QString pFechaNacimiento, QString pContinente){

        //ENTEROS
        this->id = pId;
        this->totalPecados = 0;
        this->totalBuenasAcciones = 0;
        this->restaAccionesPecados = 0;

        //STRINGS
        this->nombre = pNombre;
        this->apellido = pApellido;
        this->pais = pPais;
        this->creencia = pCreencia;
        this->profesion = pProfesion;
        this->correo = pCorreo;
        this->fechaHoraNacimiento = pFechaNacimiento;
        this->continente = pContinente;
        this->demonio = "";

        //BOOLEANOS
        this->isPadre = false;
        this->isHijo = false;
        this->inWorld = true;
        this->inHeaven = false;
        this->inHell = false;

        //PERSONA
        this->padre = NULL;
        this->next = NULL;
        this->before = NULL;
        this->angel = NULL;
    }

};

#endif // PERSONA_H
