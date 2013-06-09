/********************************************************************************
** Form generated from reading UI file 'Regular_triangulation_2.ui'
**
** Created: Sun Jun 9 17:50:46 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGULAR_TRIANGULATION_2_H
#define UI_REGULAR_TRIANGULATION_2_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGraphicsView>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Regular_triangulation_2
{
public:
    QAction *actionAbout;
    QAction *actionAboutCGAL;
    QAction *actionQuit;
    QAction *actionInsertRandomPoints;
    QAction *actionInsertPoint;
    QAction *actionClear;
    QAction *actionShowPowerdiagram;
    QAction *actionShowRegular;
    QAction *actionLoadPoints;
    QAction *actionSavePoints;
    QAction *actionRecenter;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QGraphicsView *graphicsView;
    QStatusBar *statusbar;
    QToolBar *fileToolBar;
    QToolBar *toolBar;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuTools;

    void setupUi(QMainWindow *Regular_triangulation_2)
    {
        if (Regular_triangulation_2->objectName().isEmpty())
            Regular_triangulation_2->setObjectName(QString::fromUtf8("Regular_triangulation_2"));
        Regular_triangulation_2->resize(400, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/cgal/logos/cgal_icon"), QSize(), QIcon::Normal, QIcon::Off);
        Regular_triangulation_2->setWindowIcon(icon);
        actionAbout = new QAction(Regular_triangulation_2);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionAboutCGAL = new QAction(Regular_triangulation_2);
        actionAboutCGAL->setObjectName(QString::fromUtf8("actionAboutCGAL"));
        actionQuit = new QAction(Regular_triangulation_2);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionInsertRandomPoints = new QAction(Regular_triangulation_2);
        actionInsertRandomPoints->setObjectName(QString::fromUtf8("actionInsertRandomPoints"));
        actionInsertPoint = new QAction(Regular_triangulation_2);
        actionInsertPoint->setObjectName(QString::fromUtf8("actionInsertPoint"));
        actionInsertPoint->setCheckable(true);
        actionInsertPoint->setChecked(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/cgal/Input/inputPoint.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionInsertPoint->setIcon(icon1);
        actionClear = new QAction(Regular_triangulation_2);
        actionClear->setObjectName(QString::fromUtf8("actionClear"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/cgal/fileToolbar/fileNew.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClear->setIcon(icon2);
        actionShowPowerdiagram = new QAction(Regular_triangulation_2);
        actionShowPowerdiagram->setObjectName(QString::fromUtf8("actionShowPowerdiagram"));
        actionShowPowerdiagram->setCheckable(true);
        actionShowPowerdiagram->setChecked(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/cgal/Triangulation_2/Voronoi_diagram_2.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionShowPowerdiagram->setIcon(icon3);
        actionShowRegular = new QAction(Regular_triangulation_2);
        actionShowRegular->setObjectName(QString::fromUtf8("actionShowRegular"));
        actionShowRegular->setCheckable(true);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/cgal/Triangulation_2/Delaunay_triangulation_2.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionShowRegular->setIcon(icon4);
        actionLoadPoints = new QAction(Regular_triangulation_2);
        actionLoadPoints->setObjectName(QString::fromUtf8("actionLoadPoints"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/cgal/fileToolbar/fileOpen.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLoadPoints->setIcon(icon5);
        actionSavePoints = new QAction(Regular_triangulation_2);
        actionSavePoints->setObjectName(QString::fromUtf8("actionSavePoints"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/cgal/fileToolbar/fileSave.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSavePoints->setIcon(icon6);
        actionRecenter = new QAction(Regular_triangulation_2);
        actionRecenter->setObjectName(QString::fromUtf8("actionRecenter"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/cgal/Input/zoom-best-fit"), QSize(), QIcon::Normal, QIcon::Off);
        actionRecenter->setIcon(icon7);
        centralwidget = new QWidget(Regular_triangulation_2);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setFocusPolicy(Qt::StrongFocus);
        graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        graphicsView->setTransformationAnchor(QGraphicsView::NoAnchor);

        gridLayout->addWidget(graphicsView, 0, 0, 1, 1);

        Regular_triangulation_2->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Regular_triangulation_2);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Regular_triangulation_2->setStatusBar(statusbar);
        fileToolBar = new QToolBar(Regular_triangulation_2);
        fileToolBar->setObjectName(QString::fromUtf8("fileToolBar"));
        Regular_triangulation_2->addToolBar(Qt::TopToolBarArea, fileToolBar);
        toolBar = new QToolBar(Regular_triangulation_2);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        Regular_triangulation_2->addToolBar(Qt::TopToolBarArea, toolBar);
        menubar = new QMenuBar(Regular_triangulation_2);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 400, 29));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuTools = new QMenu(menubar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        Regular_triangulation_2->setMenuBar(menubar);

        fileToolBar->addAction(actionClear);
        fileToolBar->addAction(actionLoadPoints);
        fileToolBar->addAction(actionSavePoints);
        toolBar->addAction(actionInsertPoint);
        toolBar->addAction(actionShowRegular);
        toolBar->addAction(actionShowPowerdiagram);
        toolBar->addAction(actionRecenter);
        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuTools->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(actionClear);
        menuFile->addAction(actionLoadPoints);
        menuFile->addAction(actionSavePoints);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);
        menuEdit->addAction(actionInsertRandomPoints);
        menuTools->addAction(actionInsertPoint);
        menuTools->addAction(actionShowRegular);
        menuTools->addAction(actionShowPowerdiagram);
        menuTools->addSeparator();
        menuTools->addAction(actionRecenter);

        retranslateUi(Regular_triangulation_2);

        QMetaObject::connectSlotsByName(Regular_triangulation_2);
    } // setupUi

    void retranslateUi(QMainWindow *Regular_triangulation_2)
    {
        Regular_triangulation_2->setWindowTitle(QApplication::translate("Regular_triangulation_2", "CGAL Regular Triangulation", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("Regular_triangulation_2", "&About", 0, QApplication::UnicodeUTF8));
        actionAboutCGAL->setText(QApplication::translate("Regular_triangulation_2", "About &CGAL", 0, QApplication::UnicodeUTF8));
        actionQuit->setText(QApplication::translate("Regular_triangulation_2", "&Quit", 0, QApplication::UnicodeUTF8));
        actionQuit->setShortcut(QApplication::translate("Regular_triangulation_2", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        actionInsertRandomPoints->setText(QApplication::translate("Regular_triangulation_2", "&Insert random points", 0, QApplication::UnicodeUTF8));
        actionInsertRandomPoints->setShortcut(QApplication::translate("Regular_triangulation_2", "Ctrl+I", 0, QApplication::UnicodeUTF8));
        actionInsertPoint->setText(QApplication::translate("Regular_triangulation_2", "&Insert weighted point", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionInsertPoint->setToolTip(QApplication::translate("Regular_triangulation_2", "Insert weighted point", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionInsertPoint->setStatusTip(QApplication::translate("Regular_triangulation_2", "Left: Insert vtx", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionClear->setText(QApplication::translate("Regular_triangulation_2", "&Clear", 0, QApplication::UnicodeUTF8));
        actionClear->setShortcut(QApplication::translate("Regular_triangulation_2", "Ctrl+C", 0, QApplication::UnicodeUTF8));
        actionShowPowerdiagram->setText(QApplication::translate("Regular_triangulation_2", "Show &Voronoi Diagram", 0, QApplication::UnicodeUTF8));
        actionShowPowerdiagram->setShortcut(QApplication::translate("Regular_triangulation_2", "Ctrl+V", 0, QApplication::UnicodeUTF8));
        actionShowRegular->setText(QApplication::translate("Regular_triangulation_2", "Show &Regular Triangulation", 0, QApplication::UnicodeUTF8));
        actionShowRegular->setShortcut(QApplication::translate("Regular_triangulation_2", "Ctrl+D", 0, QApplication::UnicodeUTF8));
        actionLoadPoints->setText(QApplication::translate("Regular_triangulation_2", "&Load Points...", 0, QApplication::UnicodeUTF8));
        actionLoadPoints->setShortcut(QApplication::translate("Regular_triangulation_2", "Ctrl+L", 0, QApplication::UnicodeUTF8));
        actionSavePoints->setText(QApplication::translate("Regular_triangulation_2", "&Save Points...", 0, QApplication::UnicodeUTF8));
        actionSavePoints->setShortcut(QApplication::translate("Regular_triangulation_2", "Ctrl+S", 0, QApplication::UnicodeUTF8));
        actionRecenter->setText(QApplication::translate("Regular_triangulation_2", "Re&center the viewport", 0, QApplication::UnicodeUTF8));
        actionRecenter->setShortcut(QApplication::translate("Regular_triangulation_2", "Ctrl+R", 0, QApplication::UnicodeUTF8));
        fileToolBar->setWindowTitle(QApplication::translate("Regular_triangulation_2", "File Tools", 0, QApplication::UnicodeUTF8));
        toolBar->setWindowTitle(QApplication::translate("Regular_triangulation_2", "Visualization Tools", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("Regular_triangulation_2", "&File", 0, QApplication::UnicodeUTF8));
        menuEdit->setTitle(QApplication::translate("Regular_triangulation_2", "&Edit", 0, QApplication::UnicodeUTF8));
        menuTools->setTitle(QApplication::translate("Regular_triangulation_2", "&Tools", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Regular_triangulation_2: public Ui_Regular_triangulation_2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGULAR_TRIANGULATION_2_H
