#include "dicepath.h"

dicePath::dicePath()
{
        divisionsX = 601/15;
        divisionsY = 601/15;
        rdhx = divisionsX*0.1;
        rdhy = divisionsY*0.1;


        dhx=rdhx;
        dhy=rdhy;

           for(int i= 0;i < 6 ; i++){
               path.push_back(QPoint(dhx , (divisionsY*6)+dhy));
               dhx+=divisionsX;
           }dhx=rdhx;dhy =rdhy;
           for(int i= 0;i < 6 ; i++){
               path.push_back(QPoint((divisionsX*6)+dhx,(divisionsY*5)+dhy));
               dhy-=divisionsY;
           }dhx=rdhx;dhy =rdhy;
           path.push_back(QPoint((divisionsX*7)+dhx , dhy ));
           for(int i= 0;i < 6 ; i++){
               path.push_back(QPoint((divisionsX*8)+dhx,dhy));
               dhy+=divisionsY;
           }dhx=rdhx;dhy =rdhy;
           for(int i= 0;i < 6 ; i++){
               path.push_back(QPoint((divisionsX*9)+dhx,divisionsY*6+dhy));
               dhx+=divisionsX;
           }dhx=rdhx;dhy =rdhy;
           path.push_back(QPoint((divisionsX*14)+dhx ,(divisionsY*7)+ dhy ));
           for(int i= 0;i < 6 ; i++){
               path.push_back(QPoint((divisionsX*14)+dhx,(divisionsY*8)+dhy));
               dhx-=divisionsX;
           }dhx=rdhx;dhy =rdhy;
           for(int i= 0;i < 6 ; i++){
               path.push_back(QPoint((divisionsX*8)+dhx,(divisionsY*9)+dhy));
               dhy+=divisionsY;
           }dhx=rdhx;dhy =rdhy;
           path.push_back(QPoint((divisionsX*7)+dhx ,(divisionsY*14)+ dhy ));
           for(int i= 0;i < 6 ; i++){
               path.push_back(QPoint((divisionsX*6)+dhx,(divisionsY*14)+dhy));
               dhy-=divisionsY;
           }dhx=rdhx;dhy =rdhy;
           for(int i= 0;i < 6 ; i++){
               path.push_back(QPoint((divisionsX*5)+dhx , (divisionsY*8)+dhy));
               dhx-=divisionsX;
           }dhx=rdhx;dhy =rdhy;
           path.push_back(QPoint(dhx ,(divisionsY*7)+ dhy ));

           dhx=rdhx;
           dhy=rdhy;
               for(int i= 0;i < 6 ; i++){
                   epath.push_back(QPoint(dhx + divisionsX , (divisionsY*7)+dhy));
                   dhx+=divisionsX;
               }dhx=rdhx;dhy =rdhy;
               for(int i= 0;i < 6 ; i++){
                   epath.push_back(QPoint((divisionsX*7)+dhx , dhy + divisionsY));
                   dhy+=divisionsY;
               }dhx=rdhx;dhy =rdhy;
               for(int i= 0;i < 6 ; i++){
                   epath.push_back(QPoint((divisionsX*13)+dhx , (divisionsY*7)+dhy));
                   dhx-=divisionsX;
               }dhx=rdhx;dhy =rdhy;
               for(int i= 0;i < 6 ; i++){
                   epath.push_back(QPoint((divisionsX*7)+dhx , (divisionsY*13)+dhy));
                   dhy-=divisionsY;
               }


}

