#include "atleta.h"

Atleta::Atleta()
{

}

QString subdi(double idade);

QString Atleta::getnome()
{
    return nome;
}

bool Atleta::setnome(QString value)
{
    if(value.size()>2){
        nome = value;
        return true;
    }else{
        return false;
    }
}

double Atleta::getidade()
{
    return idade;
}

bool Atleta::setidade(double value)
{
    if(value>4){
        idade = value;
        return  true;
    }else{
        return false;
    }
}



QString Atleta::getcategoria(){
    return subdivisao(idade);
}
QString Atleta::subdivisao(double idade){
    QString temp;
    if(idade>=35){
        temp="veterano";
    }
    if(idade<35 && idade>=18){
        temp="categoria livre";
    }
    if(idade>15 && idade<18){
        temp="Sub-17";
    }
    if(idade>13 && idade<=15){
        temp="Sub-15";
    }
    if(idade>10 && idade<=13){
        temp="Sub-13";
    }
    if(idade>8 && idade<=10){
        temp="Sub-10";
    }
    if(idade>6 && idade<=8){
        temp="Sub-8";
    }
    if(idade>4 && idade<=6){
        temp="Sub-6";
    }
    if(idade<6){
        temp="infantil";
    }
    return  temp;
}
