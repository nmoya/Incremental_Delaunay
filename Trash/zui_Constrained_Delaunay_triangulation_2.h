/********************************************************************************
** Form generated from reading UI file 'Constrained_Delaunay_triangulation_2.ui'
**
** Created: Sun Jun 9 17:49:37 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSTRAINED_DELAUNAY_TRIANGULATION_2_H
#define UI_CONSTRAINED_DELAUNAY_TRIANGULATION_2_H

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

class Ui_Constrained_Delaunay_triangulation_2
{
public:
    QAction *actionAbout;
    QAction *actionAboutCGAL;
    QAction *actionQuit;
    QAction *actionInsertRandomPoints;
    QAction *actionInsertPolyline;
    QAction *actionClear;
    QAction *actionShowVoronoi;
    QAction *actionShowDelaunay;
    QAction *actionLoadConstraints;
    QAction *actionSaveConstraints;
    QAction *actionCircumcenter;
    QAction *actionRecenter;
    QAction *actionMakeGabrielConform;
    QAction *actionMakeDelaunayConform;
    QAction *actionMakeDelaunayMesh;
    QAction *actionMakeLipschitzDelaunayMesh;
    QAction *actionShow_constrained_edges;
    QAction *actionShow_faces_in_domain;
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

    void setupUi(QMainWindow *Constrained_Delaunay_triangulation_2)
    {
        if (Constrained_Delaunay_triangulation_2->objectName().isEmpty())
            Constrained_Delaunay_triangulation_2->setObjectName(QString::fromUtf8("Constrained_Delaunay_triangulation_2"));
        Constrained_Delaunay_triangulation_2->resize(800, 600);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/cgal/logos/cgal_icon"), QSize(), QIcon::Normal, QIcon::Off);
        Constrained_Delaunay_triangulation_2->setWindowIcon(icon);
        actionAbout = new QAction(Constrained_Delaunay_triangulation_2);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionAboutCGAL = new QAction(Constrained_Delaunay_triangulation_2);
        actionAboutCGAL->setObjectName(QString::fromUtf8("actionAboutCGAL"));
        actionQuit = new QAction(Constrained_Delaunay_triangulation_2);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionInsertRandomPoints = new QAction(Constrained_Delaunay_triangulation_2);
        actionInsertRandomPoints->setObjectName(QString::fromUtf8("actionInsertRandomPoints"));
        actionInsertPolyline = new QAction(Constrained_Delaunay_triangulation_2);
        actionInsertPolyline->setObjectName(QString::fromUtf8("actionInsertPolyline"));
        actionInsertPolyline->setCheckable(true);
        actionInsertPolyline->setChecked(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/cgal/Input/inputPolyline.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionInsertPolyline->setIcon(icon1);
        actionClear = new QAction(Constrained_Delaunay_triangulation_2);
        actionClear->setObjectName(QString::fromUtf8("actionClear"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/cgal/fileToolbar/fileNew.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClear->setIcon(icon2);
        actionShowVoronoi = new QAction(Constrained_Delaunay_triangulation_2);
        actionShowVoronoi->setObjectName(QString::fromUtf8("actionShowVoronoi"));
        actionShowVoronoi->setCheckable(true);
        actionShowVoronoi->setChecked(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/cgal/Triangulation_2/Voronoi_diagram_2.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionShowVoronoi->setIcon(icon3);
        actionShowVoronoi->setVisible(false);
        actionShowDelaunay = new QAction(Constrained_Delaunay_triangulation_2);
        actionShowDelaunay->setObjectName(QString::fromUtf8("actionShowDelaunay"));
        actionShowDelaunay->setCheckable(true);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/cgal/Actions/icons/constrained_triangulation.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionShowDelaunay->setIcon(icon4);
        actionLoadConstraints = new QAction(Constrained_Delaunay_triangulation_2);
        actionLoadConstraints->setObjectName(QString::fromUtf8("actionLoadConstraints"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/cgal/fileToolbar/fileOpen.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLoadConstraints->setIcon(icon5);
        actionSaveConstraints = new QAction(Constrained_Delaunay_triangulation_2);
        actionSaveConstraints->setObjectName(QString::fromUtf8("actionSaveConstraints"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/cgal/fileToolbar/fileSave.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSaveConstraints->setIcon(icon6);
        actionCircumcenter = new QAction(Constrained_Delaunay_triangulation_2);
        actionCircumcenter->setObjectName(QString::fromUtf8("actionCircumcenter"));
        actionCircumcenter->setCheckable(true);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/cgal/Actions/icons/circumcenter.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCircumcenter->setIcon(icon7);
        actionRecenter = new QAction(Constrained_Delaunay_triangulation_2);
        actionRecenter->setObjectName(QString::fromUtf8("actionRecenter"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/cgal/Input/zoom-best-fit"), QSize(), QIcon::Normal, QIcon::Off);
        actionRecenter->setIcon(icon8);
        actionMakeGabrielConform = new QAction(Constrained_Delaunay_triangulation_2);
        actionMakeGabrielConform->setObjectName(QString::fromUtf8("actionMakeGabrielConform"));
        actionMakeDelaunayConform = new QAction(Constrained_Delaunay_triangulation_2);
        actionMakeDelaunayConform->setObjectName(QString::fromUtf8("actionMakeDelaunayConform"));
        actionMakeDelaunayMesh = new QAction(Constrained_Delaunay_triangulation_2);
        actionMakeDelaunayMesh->setObjectName(QString::fromUtf8("actionMakeDelaunayMesh"));
        actionMakeLipschitzDelaunayMesh = new QAction(Constrained_Delaunay_triangulation_2);
        actionMakeLipschitzDelaunayMesh->setObjectName(QString::fromUtf8("actionMakeLipschitzDelaunayMesh"));
        actionShow_constrained_edges = new QAction(Constrained_Delaunay_triangulation_2);
        actionShow_constrained_edges->setObjectName(QString::fromUtf8("actionShow_constrained_edges"));
        actionShow_constrained_edges->setCheckable(true);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/cgal/Actions/icons/constrained_triangulation_show_constraints.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionShow_constrained_edges->setIcon(icon9);
        actionShow_faces_in_domain = new QAction(Constrained_Delaunay_triangulation_2);
        actionShow_faces_in_domain->setObjectName(QString::fromUtf8("actionShow_faces_in_domain"));
        actionShow_faces_in_domain->setCheckable(true);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/cgal/Actions/icons/constrained_triangulation_show_in_domain.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionShow_faces_in_domain->setIcon(icon10);
        centralwidget = new QWidget(Constrained_Delaunay_triangulation_2);
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

        Constrained_Delaunay_triangulation_2->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Constrained_Delaunay_triangulation_2);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Constrained_Delaunay_triangulation_2->setStatusBar(statusbar);
        fileToolBar = new QToolBar(Constrained_Delaunay_triangulation_2);
        fileToolBar->setObjectName(QString::fromUtf8("fileToolBar"));
        Constrained_Delaunay_triangulation_2->addToolBar(Qt::TopToolBarArea, fileToolBar);
        toolBar = new QToolBar(Constrained_Delaunay_triangulation_2);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        Constrained_Delaunay_triangulation_2->addToolBar(Qt::TopToolBarArea, toolBar);
        menubar = new QMenuBar(Constrained_Delaunay_triangulation_2);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 19));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuTools = new QMenu(menubar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        Constrained_Delaunay_triangulation_2->setMenuBar(menubar);

        fileToolBar->addAction(actionClear);
        fileToolBar->addAction(actionLoadConstraints);
        fileToolBar->addAction(actionSaveConstraints);
        toolBar->addAction(actionInsertPolyline);
        toolBar->addSeparator();
        toolBar->addAction(actionShowDelaunay);
        toolBar->addAction(actionShow_constrained_edges);
        toolBar->addAction(actionShowVoronoi);
        toolBar->addAction(actionShow_faces_in_domain);
        toolBar->addAction(actionCircumcenter);
        toolBar->addSeparator();
        toolBar->addAction(actionRecenter);
        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuTools->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(actionClear);
        menuFile->addAction(actionLoadConstraints);
        menuFile->addAction(actionSaveConstraints);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);
        menuEdit->addAction(actionInsertRandomPoints);
        menuTools->addAction(actionInsertPolyline);
        menuTools->addSeparator();
        menuTools->addAction(actionShowDelaunay);
        menuTools->addAction(actionShowVoronoi);
        menuTools->addAction(actionShow_constrained_edges);
        menuTools->addAction(actionShow_faces_in_domain);
        menuTools->addAction(actionCircumcenter);
        menuTools->addSeparator();
        menuTools->addAction(actionRecenter);
        menuTools->addAction(actionMakeGabrielConform);
        menuTools->addAction(actionMakeDelaunayConform);
        menuTools->addAction(actionMakeDelaunayMesh);
        menuTools->addAction(actionMakeLipschitzDelaunayMesh);

        retranslateUi(Constrained_Delaunay_triangulation_2);

        QMetaObject::connectSlotsByName(Constrained_Delaunay_triangulation_2);
    } // setupUi

    void retranslateUi(QMainWindow *Constrained_Delaunay_triangulation_2)
    {
        Constrained_Delaunay_triangulation_2->setWindowTitle(QApplication::translate("Constrained_Delaunay_triangulation_2", "CGAL Constrained Delaunay Triangulation", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("Constrained_Delaunay_triangulation_2", "&About", 0, QApplication::UnicodeUTF8));
        actionAboutCGAL->setText(QApplication::translate("Constrained_Delaunay_triangulation_2", "About &CGAL", 0, QApplication::UnicodeUTF8));
        actionQuit->setText(QApplication::translate("Constrained_Delaunay_triangulation_2", "&Quit", 0, QApplication::UnicodeUTF8));
        actionQuit->setShortcut(QApplication::translate("Constrained_Delaunay_triangulation_2", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        actionInsertRandomPoints->setText(QApplication::translate("Constrained_Delaunay_triangulation_2", "&Insert random points", 0, QApplication::UnicodeUTF8));
        actionInsertRandomPoints->setShortcut(QApplication::translate("Constrained_Delaunay_triangulation_2", "Ctrl+I", 0, QApplication::UnicodeUTF8));
        actionInsertPolyline->setText(QApplication::translate("Constrained_Delaunay_triangulation_2", "&Insert Polyline", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionInsertPolyline->setToolTip(QApplication::translate("Constrained_Delaunay_triangulation_2", "Insert Point or Polyline", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionInsertPolyline->setStatusTip(QApplication::translate("Constrained_Delaunay_triangulation_2", "Left: Insert vtx | Right: Final vtx | Del: Delete vtx", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionClear->setText(QApplication::translate("Constrained_Delaunay_triangulation_2", "&Clear", 0, QApplication::UnicodeUTF8));
        actionClear->setShortcut(QApplication::translate("Constrained_Delaunay_triangulation_2", "Ctrl+C", 0, QApplication::UnicodeUTF8));
        actionShowVoronoi->setText(QApplication::translate("Constrained_Delaunay_triangulation_2", "Show &Voronoi Diagram", 0, QApplication::UnicodeUTF8));
        actionShowVoronoi->setShortcut(QApplication::translate("Constrained_Delaunay_triangulation_2", "Ctrl+V", 0, QApplication::UnicodeUTF8));
        actionShowDelaunay->setText(QApplication::translate("Constrained_Delaunay_triangulation_2", "Show &triangulation", 0, QApplication::UnicodeUTF8));
        actionShowDelaunay->setShortcut(QApplication::translate("Constrained_Delaunay_triangulation_2", "Ctrl+T", 0, QApplication::UnicodeUTF8));
        actionLoadConstraints->setText(QApplication::translate("Constrained_Delaunay_triangulation_2", "&Load...", 0, QApplication::UnicodeUTF8));
        actionLoadConstraints->setShortcut(QApplication::translate("Constrained_Delaunay_triangulation_2", "Ctrl+L", 0, QApplication::UnicodeUTF8));
        actionSaveConstraints->setText(QApplication::translate("Constrained_Delaunay_triangulation_2", "&Save...", 0, QApplication::UnicodeUTF8));
        actionSaveConstraints->setShortcut(QApplication::translate("Constrained_Delaunay_triangulation_2", "Ctrl+S", 0, QApplication::UnicodeUTF8));
        actionCircumcenter->setText(QApplication::translate("Constrained_Delaunay_triangulation_2", "&Circumcenter", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionCircumcenter->setToolTip(QApplication::translate("Constrained_Delaunay_triangulation_2", "Draw circumcenter", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionRecenter->setText(QApplication::translate("Constrained_Delaunay_triangulation_2", "Re&center the viewport", 0, QApplication::UnicodeUTF8));
        actionRecenter->setShortcut(QApplication::translate("Constrained_Delaunay_triangulation_2", "Ctrl+R", 0, QApplication::UnicodeUTF8));
        actionMakeGabrielConform->setText(QApplication::translate("Constrained_Delaunay_triangulation_2", "Make Gabriel conform", 0, QApplication::UnicodeUTF8));
        actionMakeDelaunayConform->setText(QApplication::translate("Constrained_Delaunay_triangulation_2", "Make Delaunay conform", 0, QApplication::UnicodeUTF8));
        actionMakeDelaunayMesh->setText(QApplication::translate("Constrained_Delaunay_triangulation_2", "Make Delaunay mesh", 0, QApplication::UnicodeUTF8));
        actionMakeLipschitzDelaunayMesh->setText(QApplication::translate("Constrained_Delaunay_triangulation_2", "Make Lipschitz Delaunay mesh", 0, QApplication::UnicodeUTF8));
        actionShow_constrained_edges->setText(QApplication::translate("Constrained_Delaunay_triangulation_2", "Show &constrained edges", 0, QApplication::UnicodeUTF8));
        actionShow_constrained_edges->setShortcut(QApplication::translate("Constrained_Delaunay_triangulation_2", "Ctrl+C", 0, QApplication::UnicodeUTF8));
        actionShow_faces_in_domain->setText(QApplication::translate("Constrained_Delaunay_triangulation_2", "Show &faces in domain", 0, QApplication::UnicodeUTF8));
        actionShow_faces_in_domain->setShortcut(QApplication::translate("Constrained_Delaunay_triangulation_2", "Ctrl+F", 0, QApplication::UnicodeUTF8));
        fileToolBar->setWindowTitle(QApplication::translate("Constrained_Delaunay_triangulation_2", "File Tools", 0, QApplication::UnicodeUTF8));
        toolBar->setWindowTitle(QApplication::translate("Constrained_Delaunay_triangulation_2", "Visualization Tools", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("Constrained_Delaunay_triangulation_2", "&File", 0, QApplication::UnicodeUTF8));
        menuEdit->setTitle(QApplication::translate("Constrained_Delaunay_triangulation_2", "&Edit", 0, QApplication::UnicodeUTF8));
        menuTools->setTitle(QApplication::translate("Constrained_Delaunay_triangulation_2", "&Tools", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Constrained_Delaunay_triangulation_2: public Ui_Constrained_Delaunay_triangulation_2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSTRAINED_DELAUNAY_TRIANGULATION_2_H
