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
    QString organization;
    QString role;
    QString team;
    QString project;
public:
    User(QString _username){
        username = _username;
    }
    User()=default;

};
class Organization{
public:
    QString name;
    QString role;
    QString description;
    QString type;
    Organization(QString _name , QString _role){
        name = _name; role = _role;
    }
    Organization(QString _name){
        name = _name;
    }
    Organization() = default;
    bool operator==(const Organization other){
        return name == other.name;
    }
};
class Group{
public:
    QString name;
    QString role;
    QString description;
    QString kind; // team or project
    QString department;
    Group(QString _name , QString _kind){
        name = _name; kind = _kind;
    }
    Group() = default;
};
class Team{
public:
    QString name;
    QString role;
    QString description;
    QString department;
    Team(QString _name , QString _role){
        name = _name; role = _role;
    }
    Team(QString _name){
        name = _name;
    }
    Team() = default;
};
class Project{
public:
    QString name;
    QString role;
    QString description;
    QString goal;
    Project(QString _name , QString _role){
        name = _name; role = _role;
    }
    Project(QString _name){
        name = _name;
    }
    Project() = default;
};

#endif // GENERICS_H
