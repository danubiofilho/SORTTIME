#ifndef ATLETA_H
#define ATLETA_H

#include <QString>
#include <QVector>
#include <algorithm>

class Atleta
{
private:
      QString nome;
      double idade;

public:
    Atleta();

    QString getnome();
    void setnome(QString &value);
    double getidade();
    void setidade(double value);
    QString getcategoria();
    QString subdivisao(double idade);

};

#endif // ATLETA_H
