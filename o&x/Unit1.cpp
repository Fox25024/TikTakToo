//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
int gracz=0,wk=0,wo=0;
String pole[9];
int r=115,g=215,b=70;



//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
Panel1->Color=RGB(r,g,b);
Panel2->Color=RGB(r,g,b);

}
//---------------------------------------------------------------------------

void __fastcall TForm1::aClick(TObject *Sender)
{
Panel2->Visible=true;
Timer2->Enabled=true;
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
if(gracz==0)
{
        Image14->Visible=true;
        Image15->Visible=false;
}
if(gracz==1)
{
        Image14->Visible=false;
        Image15->Visible=true;
}
}
//---------------------------------------------------------------------------




void __fastcall TForm1::b1Click(TObject *Sender)
{
if(gracz==0)
{
        b1->Visible=false;
        o1->Visible=true;
        pole[0]="o";
        gracz++;
}
else if(gracz==1)
{
        b1->Visible=false;
        k1->Visible=true;
        pole[0]="k";
        gracz--;
}


}
//---------------------------------------------------------------------------

void __fastcall TForm1::b2Click(TObject *Sender)
{
if(gracz==0)
{
        b2->Visible=false;
        o2->Visible=true;
        pole[1]="o";
        gracz++;
}
else if(gracz==1)
{
        b2->Visible=false;
        k2->Visible=true;
        pole[1]="k";
        gracz--;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::b3Click(TObject *Sender)
{
if(gracz==0)
{
        b3->Visible=false;
        o3->Visible=true;
        pole[2]="o";
        gracz++;
}
else if(gracz==1)
{
        b3->Visible=false;
        k3->Visible=true;
        pole[2]="k";
        gracz--;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::b4Click(TObject *Sender)
{
if(gracz==0)
{
        b4->Visible=false;
        o4->Visible=true;
        pole[3]="o";
        gracz++;
}
else if(gracz==1)
{
        b4->Visible=false;
        k4->Visible=true;
        pole[3]="k";
        gracz--;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::b5Click(TObject *Sender)
{
if(gracz==0)
{
        b5->Visible=false;
        o5->Visible=true;
        pole[4]="o";
        gracz++;
}
else if(gracz==1)
{
        b5->Visible=false;
        k5->Visible=true;
        pole[4]="k";
        gracz--;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::b6Click(TObject *Sender)
{
if(gracz==0)
{
        b6->Visible=false;
        o6->Visible=true;
        pole[5]="o";
        gracz++;
}
else if(gracz==1)
{
        b6->Visible=false;
        k6->Visible=true;
        pole[5]="k";
        gracz--;
}
}
//---------------------------------------------------------------------------


void __fastcall TForm1::b7Click(TObject *Sender)
{
if(gracz==0)
{
        b7->Visible=false;
        o7->Visible=true;
        pole[6]="o";
        gracz++;
}
else if(gracz==1)
{
        b7->Visible=false;
        k7->Visible=true;
        pole[6]="k";
        gracz--;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::b8Click(TObject *Sender)
{
if(gracz==0)
{
        b8->Visible=false;
        o8->Visible=true;
        pole[7]="o";
        gracz++;
}
else if(gracz==1)
{
        b8->Visible=false;
        k8->Visible=true;
        pole[7]="k";
        gracz--;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::b9Click(TObject *Sender)
{
if(gracz==0)
{
        b9->Visible=false;
        o9->Visible=true;
        pole[8]="o";
        gracz++;
}
else if(gracz==1)
{
        b9->Visible=false;
        k9->Visible=true;
        pole[8]="k";
        gracz--;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer2Timer(TObject *Sender)
{

if      (((pole[0]=="o")&&(pole[1]=="o")&&(pole[2]=="o"))||//poziom
        ((pole[3]=="o")&&(pole[4]=="o")&&(pole[5]=="o"))||
        ((pole[6]=="o")&&(pole[7]=="o")&&(pole[8]=="o"))||
        ((pole[0]=="o")&&(pole[3]=="o")&&(pole[6]=="o"))||  //pion
        ((pole[1]=="o")&&(pole[4]=="o")&&(pole[7]=="o"))||
        ((pole[2]=="o")&&(pole[5]=="o")&&(pole[8]=="o"))||
        ((pole[0]=="o")&&(pole[4]=="o")&&(pole[8]=="o"))|| //skos
        ((pole[2]=="o")&&(pole[4]=="o")&&(pole[6]=="o")))
{
                Timer2->Enabled=false;
                Image3->Enabled=true;
                b1->Enabled=false;
                b2->Enabled=false;
                b3->Enabled=false;
                b4->Enabled=false;
                b5->Enabled=false;
                b6->Enabled=false;
                b7->Enabled=false;
                b8->Enabled=false;
                b9->Enabled=false;

                if((pole[0]=="o")&&(pole[1]=="o")&&(pole[2]=="o"))  //gora
                {
                        up1->Visible=true;
                        ShowMessage("wygra³ gracz kó³ko") ;
                }
                else if((pole[3]=="o")&&(pole[4]=="o")&&(pole[5]=="o"))  //srodek
                {
                        srofeczek->Visible=true;
                        ShowMessage("wygra³ gracz kó³ko") ;
                }
                else if((pole[6]=="o")&&(pole[7]=="o")&&(pole[8]=="o"))  //do³
                {
                        down->Visible=true;
                        ShowMessage("wygra³ gracz kó³ko") ;
                }
                else if((pole[0]=="o")&&(pole[3]=="o")&&(pole[6]=="o"))  //lewo
                {
                        lewo->Visible=true;
                        ShowMessage("wygra³ gracz kó³ko") ;
                }
                else if((pole[1]=="o")&&(pole[4]=="o")&&(pole[7]=="o"))  //str
                {
                        srod->Visible=true;
                        ShowMessage("wygra³ gracz kó³ko") ;
                }
                else if((pole[2]=="o")&&(pole[5]=="o")&&(pole[8]=="o"))  //prawo
                {
                        prwao->Visible=true;
                        ShowMessage("wygra³ gracz kó³ko") ;
                }
                else if((pole[0]=="o")&&(pole[4]=="o")&&(pole[8]=="o"))  //lewy skos
                {
                        ls->Visible=true;
                        ShowMessage("wygra³ gracz kó³ko") ;
                }
                else if((pole[2]=="o")&&(pole[4]=="o")&&(pole[6]=="o"))  //lewy skos
                {
                        ps->Visible=true;
                        ShowMessage("wygra³ gracz kó³ko") ;
                }
                wo=1;
                punkty->Enabled=true;



}
else if  (((pole[0]=="k")&&(pole[1]=="k")&&(pole[2]=="k"))||//poziom
        ((pole[3]=="k")&&(pole[4]=="k")&&(pole[5]=="k"))||
        ((pole[6]=="k")&&(pole[7]=="k")&&(pole[8]=="k"))||
        ((pole[0]=="k")&&(pole[3]=="k")&&(pole[6]=="k"))||  //pion
        ((pole[1]=="k")&&(pole[4]=="k")&&(pole[7]=="k"))||
        ((pole[2]=="k")&&(pole[5]=="k")&&(pole[8]=="k"))||
        ((pole[0]=="k")&&(pole[4]=="k")&&(pole[8]=="k"))|| //skos
        ((pole[2]=="k")&&(pole[4]=="k")&&(pole[6]=="k")))
{
                Timer2->Enabled=false;
                b1->Enabled=false;
                b2->Enabled=false;
                b3->Enabled=false;
                b4->Enabled=false;
                b5->Enabled=false;
                b6->Enabled=false;
                b7->Enabled=false;
                b8->Enabled=false;
                b9->Enabled=false;
                if((pole[0]=="k")&&(pole[1]=="k")&&(pole[2]=="k"))  //gora
                {
                        up1->Visible=true;
                        ShowMessage("wygra³ gracz krzy¿yk") ;
                }
                else if((pole[3]=="k")&&(pole[4]=="k")&&(pole[5]=="k"))  //srodek
                {
                        srofeczek->Visible=true;
                        ShowMessage("wygra³ gracz krzy¿yk") ;
                }
                else if((pole[6]=="k")&&(pole[7]=="k")&&(pole[8]=="k"))  //do³
                {
                        down->Visible=true;
                        ShowMessage("wygra³ gracz krzy¿yk") ;
                }
                else if((pole[0]=="k")&&(pole[3]=="k")&&(pole[6]=="k"))  //lewo
                {
                        lewo->Visible=true;
                        ShowMessage("wygra³ gracz krzy¿yk") ;
                }
                else if((pole[1]=="k")&&(pole[4]=="k")&&(pole[7]=="k"))  //str
                {
                        srod->Visible=true;
                        ShowMessage("wygra³ gracz krzy¿yk") ;
                }
                else if((pole[2]=="k")&&(pole[5]=="k")&&(pole[8]=="k"))  //prawo
                {
                        prwao->Visible=true;
                        ShowMessage("wygra³ gracz krzy¿yk") ;
                }
                else if((pole[0]=="k")&&(pole[4]=="k")&&(pole[8]=="k"))  //lewy skos
                {
                        ls->Visible=true;
                        ShowMessage("wygra³ gracz krzy¿yk") ;
                }
                else if((pole[2]=="k")&&(pole[4]=="k")&&(pole[6]=="k"))  //lewy skos
                {
                        ps->Visible=true;
                        ShowMessage("wygra³ gracz krzyzyk") ;
                }
                wk=1;
                punkty->Enabled=true;

}
else if(((pole[0]=="k")||(pole[0]=="o"))&&((pole[1]=="k")||(pole[1]=="o"))&&
        ((pole[2]=="k")||(pole[2]=="o"))&&((pole[3]=="k")||(pole[3]=="o"))&&
        ((pole[4]=="k")||(pole[4]=="o"))&&((pole[5]=="k")||(pole[5]=="o"))&&
        ((pole[6]=="k")||(pole[6]=="o"))&&((pole[7]=="k")||(pole[7]=="o"))&&
        ((pole[8]=="k")||(pole[8]=="o")))
{
        Image3->Enabled=true;
        Timer2->Enabled=false;
        ShowMessage("Remis!") ;

}


}
//---------------------------------------------------------------------------





void __fastcall TForm1::punktyTimer(TObject *Sender)
{
if(wk==1)
{
        int pktk;
        pktk=StrToInt(Label5->Caption);
        pktk++;
        Label5->Caption=pktk;
        punkty->Enabled=false;
        wk=0;
}
else if(wo==1)
        {
        int pkto;
        pkto=StrToInt(Label6->Caption);
        pkto++;
        Label6->Caption=pkto;
        punkty->Enabled=false;
        wo=0;
        }
        Image3->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image2Click(TObject *Sender)
{
Panel1->Visible=false;
Panel2->Visible=false;
Panel3->Visible=true;
Panel3->Color=RGB(r,g,b);

}
//---------------------------------------------------------------------------

void __fastcall TForm1::kolorTimer(TObject *Sender)
{
int r2,g2,b2;
        r2= StrToInt(Edit1->Text);
        g2= StrToInt(Edit2->Text);
        b2= StrToInt(Edit3->Text);
        Panel3->Color=RGB(r2,g2,b2) ;

        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image5Click(TObject *Sender)
{


        r= StrToInt(Edit1->Text);
        g= StrToInt(Edit2->Text);
        b= StrToInt(Edit3->Text);
        Panel1->Color=RGB(r,g,b);
        Panel2->Color=RGB(r,g,b);
        Panel3->Color=RGB(r,g,b);
        Panel3->Visible=false;
        Panel1->Visible=true;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image1Click(TObject *Sender)
{
        Panel3->Visible=false;
        Panel1->Visible=true;

        Edit1->Text=r;
        Edit2->Text=g;
        Edit3->Text=b;



}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image3Click(TObject *Sender)
{
        b1->Enabled=true;
        b2->Enabled=true;
        b3->Enabled=true;
        b4->Enabled=true;
        b5->Enabled=true;
        b6->Enabled=true;
        b7->Enabled=true;
        b8->Enabled=true;
        b8->Enabled=true;
        b9->Enabled=true;

        b1->Visible=true;
        b2->Visible=true;
        b3->Visible=true;
        b4->Visible=true;
        b5->Visible=true;
        b6->Visible=true;
        b7->Visible=true;
        b8->Visible=true;
        b8->Visible=true;
        b9->Visible=true;

        o1->Visible=false;
        o2->Visible=false;
        o3->Visible=false;
        o4->Visible=false;
        o5->Visible=false;
        o6->Visible=false;
        o7->Visible=false;
        o8->Visible=false;
        o8->Visible=false;
        o9->Visible=false;

        k1->Visible=false;
        k2->Visible=false;
        k3->Visible=false;
        k4->Visible=false;
        k5->Visible=false;
        k6->Visible=false;
        k7->Visible=false;
        k8->Visible=false;
        k8->Visible=false;
        k9->Visible=false;

        down->Visible= false;
        lewo->Visible=false;
        ls ->Visible=false;
        prwao->Visible=false;
        ps->Visible=false;
        srod->Visible=false;
        srofeczek->Visible=false;
        up1->Visible=false;

        pole[0]="0";
        pole[1]="0";
        pole[2]="0";
        pole[3]="0";
        pole[4]="0";
        pole[5]="0";
        pole[6]="0";
        pole[7]="0";
        pole[8]="0";



        Timer2->Enabled=true;
        Image3->Enabled=false;


        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
Image3->Enabled=false;        
}
//---------------------------------------------------------------------------

