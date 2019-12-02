/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionCarregar;
    QAction *actionSalvar;
    QAction *actionLimpar_Tabela;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_3;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *nome_label;
    QLineEdit *inputNome;
    QHBoxLayout *horizontalLayout;
    QLabel *idade;
    QLineEdit *inputIdade;
    QPushButton *btnCadastrar;
    QTableWidget *tabela;
    QPushButton *btnIdade;
    QPushButton *btnNome;
    QPushButton *Sortear;
    QWidget *tab_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *Ordena_Maioridade;
    QLabel *outMaiorIdade;
    QGroupBox *ordenar_Menoridade;
    QLabel *outMenorIdade;
    QGroupBox *media;
    QLabel *outMediaIdade;
    QMenuBar *menubar;
    QMenu *menuArquivo;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(359, 495);
        actionCarregar = new QAction(MainWindow);
        actionCarregar->setObjectName(QString::fromUtf8("actionCarregar"));
        actionSalvar = new QAction(MainWindow);
        actionSalvar->setObjectName(QString::fromUtf8("actionSalvar"));
        actionLimpar_Tabela = new QAction(MainWindow);
        actionLimpar_Tabela->setObjectName(QString::fromUtf8("actionLimpar_Tabela"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_3 = new QHBoxLayout(centralwidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout = new QVBoxLayout(tab);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        nome_label = new QLabel(tab);
        nome_label->setObjectName(QString::fromUtf8("nome_label"));

        horizontalLayout_2->addWidget(nome_label);

        inputNome = new QLineEdit(tab);
        inputNome->setObjectName(QString::fromUtf8("inputNome"));

        horizontalLayout_2->addWidget(inputNome);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        idade = new QLabel(tab);
        idade->setObjectName(QString::fromUtf8("idade"));

        horizontalLayout->addWidget(idade);

        inputIdade = new QLineEdit(tab);
        inputIdade->setObjectName(QString::fromUtf8("inputIdade"));

        horizontalLayout->addWidget(inputIdade);


        verticalLayout->addLayout(horizontalLayout);

        btnCadastrar = new QPushButton(tab);
        btnCadastrar->setObjectName(QString::fromUtf8("btnCadastrar"));

        verticalLayout->addWidget(btnCadastrar);

        tabela = new QTableWidget(tab);
        if (tabela->columnCount() < 3)
            tabela->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tabela->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tabela->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tabela->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tabela->setObjectName(QString::fromUtf8("tabela"));

        verticalLayout->addWidget(tabela);

        btnIdade = new QPushButton(tab);
        btnIdade->setObjectName(QString::fromUtf8("btnIdade"));

        verticalLayout->addWidget(btnIdade);

        btnNome = new QPushButton(tab);
        btnNome->setObjectName(QString::fromUtf8("btnNome"));

        verticalLayout->addWidget(btnNome);

        Sortear = new QPushButton(tab);
        Sortear->setObjectName(QString::fromUtf8("Sortear"));

        verticalLayout->addWidget(Sortear);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        layoutWidget = new QWidget(tab_2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 10, 511, 281));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        Ordena_Maioridade = new QGroupBox(layoutWidget);
        Ordena_Maioridade->setObjectName(QString::fromUtf8("Ordena_Maioridade"));
        outMaiorIdade = new QLabel(Ordena_Maioridade);
        outMaiorIdade->setObjectName(QString::fromUtf8("outMaiorIdade"));
        outMaiorIdade->setGeometry(QRect(190, 30, 121, 41));

        verticalLayout_2->addWidget(Ordena_Maioridade);

        ordenar_Menoridade = new QGroupBox(layoutWidget);
        ordenar_Menoridade->setObjectName(QString::fromUtf8("ordenar_Menoridade"));
        outMenorIdade = new QLabel(ordenar_Menoridade);
        outMenorIdade->setObjectName(QString::fromUtf8("outMenorIdade"));
        outMenorIdade->setGeometry(QRect(210, 40, 101, 31));

        verticalLayout_2->addWidget(ordenar_Menoridade);

        media = new QGroupBox(layoutWidget);
        media->setObjectName(QString::fromUtf8("media"));
        outMediaIdade = new QLabel(media);
        outMediaIdade->setObjectName(QString::fromUtf8("outMediaIdade"));
        outMediaIdade->setGeometry(QRect(200, 30, 111, 31));

        verticalLayout_2->addWidget(media);

        tabWidget->addTab(tab_2, QString());

        verticalLayout_3->addWidget(tabWidget);


        horizontalLayout_3->addLayout(verticalLayout_3);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 359, 21));
        menuArquivo = new QMenu(menubar);
        menuArquivo->setObjectName(QString::fromUtf8("menuArquivo"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuArquivo->menuAction());
        menuArquivo->addAction(actionCarregar);
        menuArquivo->addAction(actionSalvar);
        menuArquivo->addSeparator();
        menuArquivo->addAction(actionLimpar_Tabela);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionCarregar->setText(QApplication::translate("MainWindow", "Carregar", nullptr));
#ifndef QT_NO_SHORTCUT
        actionCarregar->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_NO_SHORTCUT
        actionSalvar->setText(QApplication::translate("MainWindow", "Salvar", nullptr));
#ifndef QT_NO_SHORTCUT
        actionSalvar->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_NO_SHORTCUT
        actionLimpar_Tabela->setText(QApplication::translate("MainWindow", "Limpar Tabela", nullptr));
        nome_label->setText(QApplication::translate("MainWindow", "Nome", nullptr));
        idade->setText(QApplication::translate("MainWindow", "Idade", nullptr));
        btnCadastrar->setText(QApplication::translate("MainWindow", "Cadastrar", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tabela->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Nome", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tabela->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Idade", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tabela->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Categoria", nullptr));
        btnIdade->setText(QApplication::translate("MainWindow", "Ordenar por idade", nullptr));
        btnNome->setText(QApplication::translate("MainWindow", "Ordenar por nome", nullptr));
        Sortear->setText(QApplication::translate("MainWindow", "Sortear", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Cadastro", nullptr));
        Ordena_Maioridade->setTitle(QApplication::translate("MainWindow", "Maior Idade", nullptr));
        outMaiorIdade->setText(QString());
        ordenar_Menoridade->setTitle(QApplication::translate("MainWindow", "Menor Idade", nullptr));
        outMenorIdade->setText(QString());
        media->setTitle(QApplication::translate("MainWindow", "Media das Idades", nullptr));
        outMediaIdade->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Estatisticas", nullptr));
        menuArquivo->setTitle(QApplication::translate("MainWindow", "Arquivo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
