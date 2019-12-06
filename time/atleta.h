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
    bool setnome(QString value);

    double getidade();
    bool setidade(double value);

    QString getcategoria();
    QString subdivisao(double idade);

};

#endif // ATLETA_H
