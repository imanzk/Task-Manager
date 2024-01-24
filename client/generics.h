#ifndef GENERICS_H
#define GENERICS_H

#include <QObject>
#include <QWidget>
#include <QJsonObject>
#include <Windows.h>
#include <QDialog>
#include <QRect>
#include <QLineEdit>
#include <QPushButton>

namespace space {
enum type_exception{
    faild_open_file,
    fill_out_blanks,
    user_exist,
    user_not_exist
};
}
using space::type_exception;

class program_exception{
    QString err;
public:
    program_exception(type_exception t);
    program_exception(QString t){err = t;}
    QString what();
};

class User{
public:
    QString username;
    QString password;
    QString name;
    QString email;
    QString id;

};
class Organization{
public:
    QString name;
    QString role;
};

#endif // GENERICS_H
