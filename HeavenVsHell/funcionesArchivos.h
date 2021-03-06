#ifndef FUNCIONESARCHIVOS_H
#define FUNCIONESARCHIVOS_H

#include <QList>
#include <Persona.h>
#include "ListaDoble_Personas.h"
#include <QMessageBox>

class funcionesArchivos
{
public:
    funcionesArchivos(){}

    int random(int, int);
    void sumarAcciones(ListaDoble_Personas *, bool);
    void obtenerTotalAcciones(ListaDoble_Personas *, bool);
    void obtenerResta(ListaDoble_Personas*);
    QString obtenerFechaHoraActual();
    QString obtenerFechaActual();
    QList<Persona*> listaOrdenada(QList<Persona*>);

};

#endif // FUNCIONESARCHIVOS_H
