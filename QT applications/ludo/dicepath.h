#ifndef DICEPATH_H
#define DICEPATH_H 
#include <QPoint>
#include <QTimer>
using namespace std;

class dicePath
{
public:
    dicePath();
    vector<QPoint> path;
    vector<QPoint> epath;

private:
    int divisionsX;
    int divisionsY;
    int rdhx;
    int rdhy;
    int dhx;
    int dhy;
};

#endif // DICEPATH_H
