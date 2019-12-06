#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QFileDialog>
#include <QInputDialog>
#include <QMessageBox>
#include <QDebug>
#include <QString>
#include "atleta.h"
#include "equipe.h"
#include <QFile>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionCarregar_triggered();

    void on_actionSalvar_triggered();

    void on_btnIdade_clicked();

    void on_btnNome_clicked();

    void on_btnCadastrar_clicked();

    void on_Sortear_clicked();

    void on_actionLimpar_Tabela_triggered();

    void on_tabela_cellDoubleClicked(int row, int column);

private:
    Ui::MainWindow *ui;
    Equipe equipe;
    Atleta atleta;
    void atualizarEstatisticas();
    void inserirNaTabela(Atleta a, int linha);
};
#endif // MAINWINDOW_H
