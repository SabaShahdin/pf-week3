# include<iostream>
using namespace std;
main()
{
 string name;
 float matric;
 float intermediate;
 float ecat;
 float matricresult;
 float interresult;
 float ecatresult;
 float aggregate;
 cout<<"entre your name..";
 cin>>name;
 cout<<"entre yout matric marks...";
 cin>>matric;
 cout<<"entre your intermediate marks...";
 cin>>intermediate;
 cout<<"entre your ecat marks...";
 cin>>ecat;
 matricresult=matric/1100.0*100*0.10;
 cout<<"matric result is...."<<matricresult <<endl;
 interresult=intermediate/550.0*100*0.40;
 cout<<"intermediate result is.."<<interresult <<endl;
 ecatresult =ecat/400.0*100*0.50;
 cout<<"ecat result is ..."<<ecatresult <<endl;
 aggregate = matricresult+interresult+ecatresult;
 cout<<" aggregate is...."<<aggregate;
}
 