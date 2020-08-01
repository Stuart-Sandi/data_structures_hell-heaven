#ifndef VENTANA_SUMARACCIONES_H
#define VENTANA_SUMARACCIONES_H

#include <QMainWindow>
#include "funcionesArchivos.h"
#include "Data.h"
#include <QMessageBox>

namespace Ui {
class Ventana_SumarAcciones;
}

class Ventana_SumarAcciones : public QMainWindow
{
    Q_OBJECT

public:
    Data * datos;
    funcionesArchivos * fa = new funcionesArchivos();
    explicit Ventana_SumarAcciones(QWidget *parent = nullptr, Data* pData = NULL);
    ~Ventana_SumarAcciones();

private slots:
    void on_btn_BuenasAcciones_clicked();

    void on_btn_Pecados_clicked();

    void on_btn_GoBack_clicked();

private:
    Ui::Ventana_SumarAcciones *ui;
};

#endif // VENTANA_SUMARACCIONES_H
