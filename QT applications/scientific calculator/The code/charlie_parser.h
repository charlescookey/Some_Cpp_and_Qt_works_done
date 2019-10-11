#ifndef CHARLIE_PARSER_H
#define CHARLIE_PARSER_H
#include <QString>
#include <QtMath>
#include <cmath>

class Charlie_parser
{
public:
    Charlie_parser();
    double solve_eq(QString,QString);
    double factorial(double);
    QString t_brclose(int , QString, int);
    QString err_thing(int,QString,int);

};

#endif // CHARLIE_PARSER_H
