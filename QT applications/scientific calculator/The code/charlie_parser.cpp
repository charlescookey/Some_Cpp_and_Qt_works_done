#include "charlie_parser.h"

Charlie_parser::Charlie_parser()
{

}
double Charlie_parser::solve_eq(QString rrr,QString sanswer)
{
    //so currently the sin cos and tan aare all operating in radians not degrees
    for(int i = 0; i < rrr.size();i++){//ANS
        if(rrr[i] == 'A' && rrr[i+1] == 'N' && rrr[i+2] == 'S'){
            rrr.replace(i,3,sanswer);
        };
    };
    for(int i = 0; i < rrr.size();i++){//sin
        if(rrr[i] == 's' && rrr[i+1] == 'i' && rrr[i+2] == 'n' && rrr[i+3] == '(' ){
            rrr = t_brclose(1 , rrr , i+4 );
        };
    };
    for(int i = 0; i < rrr.size();i++){//cos
        if(rrr[i] == 'c' && rrr[i+1] == 'o' && rrr[i+2] == 's' && rrr[i+3] == '(' ){
            rrr = t_brclose(2 , rrr , i+4 );
        };
    };
    for(int i = 0; i < rrr.size();i++){//tan
        if(rrr[i] == 't' && rrr[i+1] == 'a' && rrr[i+2] == 'n' && rrr[i+3] == '(' ){
            rrr = t_brclose(3 , rrr , i+4 );
        };
    };
    for(int i = 0; i < rrr.size();i++){//sqrt
        if(rrr[i] == 's' && rrr[i+1] == 'q' && rrr[i+2] == 'r' && rrr[i+3] == 't'&& rrr[i+4] == '(' ){
            rrr = t_brclose(4 , rrr , i+5 );
        };
    };
    for(int i = 0; i < rrr.size();i++){//ln
        if(rrr[i] == 'l' && rrr[i+1] == 'n' && rrr[i+2] == '('  ){
            rrr = t_brclose(5 , rrr , i+3 );
        };
    };
    for(int i = 0; i < rrr.size();i++){//asin
        if(rrr[i] == 's' && rrr[i+1] == 'i' && rrr[i+2] == 'n' && rrr[i+3] == '-'&& rrr[i+4] == '1' && rrr[i+5] == '(' ){
            rrr = t_brclose(6 , rrr , i+6 );
        };
    };
    for(int i = 0; i < rrr.size();i++){//acos
        if(rrr[i] == 'c' && rrr[i+1] == 'o' && rrr[i+2] == 's' && rrr[i+3] == '-'&& rrr[i+4] == '1' && rrr[i+5] == '(' ){
            rrr = t_brclose(7 , rrr , i+6 );
        };
    };
    for(int i = 0; i < rrr.size();i++){//atan
        if(rrr[i] == 't' && rrr[i+1] == 'a' && rrr[i+2] == 'n' && rrr[i+3] == '-'&& rrr[i+4] == '1' && rrr[i+5] == '(' ){
            rrr = t_brclose(8 , rrr , i+6 );
        };
    };
    for(int i = 0; i < rrr.size();i++){//exp
        if(rrr[i] == 'e' && rrr[i+1] == 'x' && rrr[i+2] == 'p' && rrr[i+3] == '(' ){
            rrr = t_brclose(9 , rrr , i+4 );
        };
    };
    for(int i = 0; i < rrr.size();i++){//log
        if(rrr[i] == 'l' && rrr[i+1] == 'o' && rrr[i+2] == 'g' && rrr[i+3] == '(' ){
            rrr = t_brclose(10 , rrr , i+4 );
        };
    };
    for(int i = 0; i < rrr.size();i++){//cube root
        if(rrr[i] == 'c' && rrr[i+1] == 'u' && rrr[i+2] == 'b' && rrr[i+3] == 'r'&& rrr[i+4] == 't' && rrr[i+5] == '(' ){
            rrr = t_brclose(11 , rrr , i+6 );
        };
    };
    for(int i = 0; i < rrr.size();i++){//pow
        if(rrr[i] == '^'){
            rrr = err_thing(5,rrr,i);
        };
    };
    for(int i = 0; i < rrr.size();i++){//root
        if(rrr[i] == "√"){
            rrr = err_thing(6,rrr,i);
        };
    };
    for(int i = 0; i < rrr.size();i++){// !factorial
        if(rrr[i] == '!'){
            rrr = err_thing(7,rrr,i);
        };
    };for(int i = 0; i < rrr.size();i++){//permutation
        if(rrr[i] == 'P'){
            rrr = err_thing(8,rrr,i);
        };
    };for(int i = 0; i < rrr.size();i++){//combination
        if(rrr[i] == 'C'){
            rrr = err_thing(9,rrr,i);
        };
    };
    for(int i = 0; i < rrr.size();i++){//division
        if(rrr[i] == '/'){
            rrr = err_thing(1,rrr,i);
        };
    };
    for(int i = 0; i < rrr.size();i++){//multiplication
        if(rrr[i] == '*'){
            rrr = err_thing(2,rrr,i);
        };
    };
    for(int i = 0; i < rrr.size();i++){//addition
        if(rrr[i] == '+'){
            rrr = err_thing(3,rrr,i);
        };
    };
    for(int i = 0; i < rrr.size();i++){//subtraction
        if(rrr[i] == '-'){
            rrr = err_thing(4,rrr,i);
        };
    };
    bool ok;
    return rrr.toDouble(&ok);
}

double Charlie_parser::factorial(double aaa)
{
    if(aaa == 0.0)return 1.0;
    return aaa * factorial(aaa-1);
}

QString Charlie_parser::t_brclose(int jjj, QString kkk, int lll)
{
    double nnn =0;
    QString temp;
    bool ok;
    int i;
    for(i = lll ; i<kkk.size();i++){
        if(kkk[i] == ')'){
            temp = kkk.mid(lll,i-lll);
            break;
        };
    };
    if(jjj==1){nnn = qSin(temp.toDouble(&ok));lll-=4;}
    if(jjj==2){nnn = qCos(temp.toDouble(&ok));lll-=4;}
    if(jjj==3){nnn = qTan(temp.toDouble(&ok));lll-=4;}
    if(jjj==4){nnn = qSqrt(temp.toDouble(&ok));lll-=5;}
    if(jjj==5){nnn = qLn(temp.toDouble(&ok));lll-=3;}
    if(jjj==6){nnn = qAsin(temp.toDouble(&ok));lll-=6;}
    if(jjj==7){nnn = qAcos(temp.toDouble(&ok));lll-=6;}
    if(jjj==8){nnn = qAtan(temp.toDouble(&ok));lll-=6;}
    if(jjj==9){nnn = qExp(temp.toDouble(&ok));lll-=4;}
    if(jjj==10){nnn = log(temp.toDouble(&ok));lll-=4;}
    if(jjj==11){nnn = cbrt(temp.toDouble(&ok));lll-=6;}

    kkk.replace(lll, i-lll+1,temp.setNum(nnn, 'g',6));
    return kkk;
}

QString Charlie_parser::err_thing(int fff ,QString eee, int ddd)
{
    double op_before = 0;
    double op_after = 0;
    int ggg = ddd+1;
    int hhh = ddd-1;
    QString temp;
    bool ok;
    int st=0;
    int ed=0;
    int ncheck=0;

    for(int i = 0 ; i < eee.size() ; i++ ){
        if((hhh-i) > -1 && (eee[hhh - i].isDigit()  || eee[hhh-i] == '.')){
            temp = eee.mid(hhh-i , i+1);
            op_before = temp.toDouble(&ok);
            if(hhh-i == 1 && eee[hhh - (i+1)] == '-' ){//this case is for if the first digit is negative
                op_before*=-1;ddd-=1;
            }
        }else{
            st = ddd - i;
            break;
        };
    };
    if(eee[ggg]=='-'){ggg+=1;ncheck=1;}//the first part to solve if the the operation is being done on a negative number
    for(int i = 0 ; i < eee.size() ; i++ ){
        if(eee[ggg + i].isDigit() || eee[ggg+i] == '.'){
            temp = eee.mid(ggg , i+1);
            op_after = temp.toDouble(&ok);//here if it is "16+" it'd recognize it as 16+0;maddd
            if(ncheck ==1)op_after*=-1;//using the ncheck to finish the case where the opearion is done on a negative number
        }else{
            ed = ggg + i;
            break;
        };
    };
    if(fff==1)temp.setNum(op_before / op_after , 'g' , 6);
    if(fff==2)temp.setNum(op_before * op_after , 'g' , 6);
    if(fff==3)temp.setNum(op_before + op_after , 'g' , 6);
    if(fff==4)temp.setNum(op_before - op_after , 'g' , 6);
    if(fff==5)temp.setNum(pow(op_before , op_after) , 'g' , 6);
    if(fff==6)temp.setNum(pow(op_after , (1.0/op_before)) , 'g' , 6);
    if(fff==7)temp.setNum(factorial(op_before) , 'g' , 6);
    if(fff==8)temp.setNum(factorial(op_before)/ factorial(op_before-op_after) , 'g' , 6);
    if(fff==9)temp.setNum(factorial(op_before)/(factorial(op_before-op_after)*factorial(op_after)) , 'g' , 6);


    eee.replace(st,ed-st,temp);//yooo this function is epic even if uoure replacing it with sth longer it works fine
    return eee;
}
