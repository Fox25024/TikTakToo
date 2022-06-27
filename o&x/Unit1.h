//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
#include <Graphics.hpp>
#include <ComCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TPanel *Panel1;
        TImage *a;
        TPanel *Panel2;
        TImage *Image4;
        TImage *o1;
        TImage *o2;
        TImage *o3;
        TImage *o4;
        TImage *o5;
        TImage *o6;
        TImage *o7;
        TImage *o8;
        TImage *o9;
        TLabel *Label1;
        TImage *Image14;
        TImage *Image15;
        TTimer *Timer1;
        TImage *k1;
        TImage *k2;
        TImage *k3;
        TImage *k4;
        TImage *k5;
        TImage *k6;
        TImage *k7;
        TImage *k8;
        TImage *k9;
        TImage *b1;
        TImage *b2;
        TImage *b3;
        TImage *b4;
        TImage *b5;
        TImage *b6;
        TImage *b7;
        TImage *b8;
        TImage *b9;
        TTimer *Timer2;
        TImage *up1;
        TImage *down;
        TImage *srofeczek;
        TImage *lewo;
        TImage *srod;
        TImage *prwao;
        TImage *ls;
        TImage *ps;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label4;
        TLabel *Label5;
        TLabel *Label6;
        TTimer *punkty;
        TImage *Image2;
        TPanel *Panel3;
        TLabel *Label7;
        TLabel *Label8;
        TLabel *Label9;
        TEdit *Edit1;
        TEdit *Edit2;
        TEdit *Edit3;
        TTimer *kolor;
        TUpDown *UpDown1;
        TUpDown *UpDown2;
        TUpDown *UpDown3;
        TImage *Image5;
        TImage *Image1;
        TImage *Image3;
        void __fastcall aClick(TObject *Sender);
        void __fastcall Timer1Timer(TObject *Sender);
        void __fastcall b1Click(TObject *Sender);
        void __fastcall b2Click(TObject *Sender);
        void __fastcall b3Click(TObject *Sender);
        void __fastcall b4Click(TObject *Sender);
        void __fastcall b5Click(TObject *Sender);
        void __fastcall b6Click(TObject *Sender);
        void __fastcall b7Click(TObject *Sender);
        void __fastcall b8Click(TObject *Sender);
        void __fastcall b9Click(TObject *Sender);
        void __fastcall Timer2Timer(TObject *Sender);
        void __fastcall punktyTimer(TObject *Sender);
        void __fastcall Image2Click(TObject *Sender);
        void __fastcall kolorTimer(TObject *Sender);
        void __fastcall Image5Click(TObject *Sender);
        void __fastcall Image1Click(TObject *Sender);
        void __fastcall Image3Click(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
