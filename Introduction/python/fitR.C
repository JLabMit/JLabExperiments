#include "TCanvas.h"
#include "TFrame.h"
#include "TBenchmark.h"
#include "TString.h"
#include "TF1.h"
#include "TH1.h"
#include "TFile.h"
#include "TROOT.h"
#include "TError.h"
#include "TInterpreter.h"
#include "TSystem.h"
#include "TPaveText.h"
 
{
   c1 = new TCanvas("c1","A Simple Graph with error bars",200,10,700,500);
   c1->SetFillColor(42);
   c1->SetGrid();
   c1->GetFrame()->SetFillColor(21);
   c1->GetFrame()->SetBorderSize(12);
   const Int_t n = 3;
   Double_t x[n]  = { 1.0, 2.0, 3.0 };
   Double_t y[n]  = { 4.308, 5.249, 5.045 };
   Double_t ex[n] = { 0.0, 0.0, 0.0 };
   Double_t ey[n] = { 0.521, 0.181, 0.092 };
   gr = new TGraphErrors(n,x,y,ex,ey);
   gr->Fit("pol0");
   gr->SetTitle("TGraphErrors Example");
   gr->SetMarkerColor(4);
   gr->SetMarkerStyle(21);
   gr->Draw("ALP");
   return c1;
//   TCanvas *c1 = new TCanvas("c1_fit1","The Fit Canvas",200,10,700,500);
//   c1->SetGridx();
//   c1->SetGridy();
//   c1->GetFrame()->SetFillColor(21);
//   c1->GetFrame()->SetBorderMode(-1);
//   c1->GetFrame()->SetBorderSize(5);
// 
//   gBenchmark->Start("fit1");
//   //
//   // We connect the ROOT file generated in a previous tutorial
//   // (see <a href="fillrandom.C.nbconvert.ipynb">Filling histograms with random numbers from a function</a>)
//   //
//   TString dir = gROOT->GetTutorialDir();
//   dir.Append("/fit/");
//   TFile *file = TFile::Open("fillrandom.root");
//   if (!file) {
//      gROOT->ProcessLine(Form(".x %s../hist/fillrandom.C(0)",dir.Data()));
//      file = TFile::Open("fillrandom.root");
//      if (!file) return;
//   }
// 
//   //
//   // The function "ls()" lists the directory contents of this file
//   //
//   file->ls();
// 
//   //
//   // Get object "sqroot" from the file. Undefined objects are searched
//   // for using gROOT->FindObject("xxx"), e.g.:
//   // TF1 *sqroot = (TF1*) gROOT.FindObject("sqroot")
//   //
//   TF1 * sqroot = 0;
//   file->GetObject("sqroot",sqroot);
//   if (!sqroot){
//      Error("fit1.C","Cannot find object sqroot of type TF1\n");
//      return;
//   }
//   sqroot->Print();
// 
//   //
//   // Now get and fit histogram h1f with the function sqroot
//   //
//   TH1F* h1f = 0;
//   file->GetObject("h1f",h1f);
//   if (!h1f){
//      Error("fit1.C","Cannot find object h1f of type TH1F\n");
//      return;
//   }
//   h1f->SetFillColor(45);
//   h1f->Fit("sqroot");
// 
//   // We now annotate the picture by creating a PaveText object
//   // and displaying the list of commands in this macro
//   //
//   TPaveText * fitlabel = new TPaveText(0.6,0.4,0.9,0.75,"NDC");
//   fitlabel->SetTextAlign(12);
//   fitlabel->SetFillColor(42);
//   fitlabel->ReadFile(Form("%sfit1_C.txt",dir.Data()));
//   fitlabel->Draw();
//   c1->Update();
//   gBenchmark->Show("fit1");
}
