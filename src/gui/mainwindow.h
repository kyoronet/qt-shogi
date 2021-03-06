#ifndef GUI_MAINWINDOW_H
#define GUI_MAINWINDOW_H

#include <QMainWindow>

#include <objs/shogicomponent.h>
#include <objs/human.h>

#include "information.h"
#include "recordwidget.h"
#include "gamestartdialog.h"
#include "boardview.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void setup();

private:
    ShogiComponent *shogi_component;
    Human *player[Shogi::PLAYER_MAX];
    BoardView *board_view;
    Information *info;
    RecordWidget *record;
    GameStartDialog *gamestartdialog;
    QMenu *file_menu;
    QMenu *play_menu;
    QAction *load_action;
    QAction *save_action;
    QAction *exit_action;
    QAction *start_action;
};

#endif // GUI_MAINWINDOW_H
