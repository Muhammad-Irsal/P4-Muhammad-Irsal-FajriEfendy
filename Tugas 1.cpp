
#include<iostream>
#include<iomanip>
#include<string>
#include<conio.h>

using namespace std;

int main()
{
	int i, nilai, benar=0, salah=0;
	string user, pass;
	char pilihanlogin, pilihan, jawab, pilih;
	ulang :
	cout<<"                           =============================================\n";
	cout<<"                          |                SELAMAT DATANG               |\n";
	cout<<"                          | *JIKA ANDA MERASA PINTAR SILAHKAN JAWAB*    |\n";
	cout<<"                          |                 KUIS COVID-19               |\n";
	cout<<"                           =============================================\n";
	cout<<"                                            Silahkan Login!\n";
	cout<<"\t\t\t\t\t\t\t\t\t\n";
	cout<<"\t\t\t\t  Ussername : ";cin>>user;cout<<"\n";
	cout<<"\t\t\t\t  Password  : ";cin>>pass;cout<<"\t\t\n";
			if (user == "Muhammad_Irsal_FajriEfendy" && pass == "F1B019097")
			{
				cout<<"\t\t\t Login Berhasil\t\t\n";
			}
			else
			{
				cout<<"\t\t\t Ussername dan password anda salah silahkan coba kembali \t\t\n";
				cout<<"\t\t\t Cobalagi ?[y/t]  : ";cin>>pilihanlogin;cout<<"\t\t\n";
					if (pilihanlogin=='y' || pilihanlogin=='Y')
					{system("cls");
					goto ulang;}
					else{goto selesai;}
					if (pilihanlogin=='t' || pilihanlogin=='T')
					{goto selesai;}		
			}
			
			
	cout<<"-------------------------------------------------------------------------\n";
	system("cls");
	{
ulangjwb :
	cout<<"PILIH SALAH SATU JAWABAN YANG MENURUT ANDA BENAR, ANTARA A, B, C, ATAU D!\n";
	cout<<"=========================================================================\n";
	cout<<"1.Suhu tubuh yang bisa diindikasikan sedang terjangkit penyakit termasuk COVID-19 yaitu... ??\n";
	string pilgan1[50]={"a.  35 0C   ","b.  36 0C","c.  37 0C","d.  38 0C"};
	for (i=0;i<=3;i++)
	{cout<<pilgan1[i]<<"\n";}
cout<<"JawabanAnda : ";
cin>>jawab;
if(jawab == 'c' || jawab == 'C')
        {benar++;}
else{
        salah++;}
    cout<<"==========================================================================\n";        
cout<<"2. Masa inkubasi COVID-19 selama...??\n";
    string pilgan2[50]={"a.  7 hari ","b.  14 hari","c.  28 hari"," d.  32 hari"};
	for (i=0;i<=3;i++)
	{cout<<pilgan2[i]<<"\n";}
cout<<"JawabanAnda : ";
cin>>jawab;
if(jawab == 'b' || jawab == 'B')
        {benar++;}
else{
        salah++;}
    cout<<"==========================================================================\n";        
	cout<<"3.Cuci tangan yang paling baik dilakukan dengan menggunakan sabun pada??\n";
	string pilgan3[225]={"a.  Air mengalir ","b.  Air dalam wadah  ","c.  Air kolam","d. Air hangat"};
	for (i=0;i<=3;i++)
	{cout<<pilgan3[i]<<"\n";}
cout<<"JawabanAnda : ";
cin>>jawab;
if(jawab == 'a' || jawab == 'A')
        {benar++;}
else{
        salah++;}
	cout<<"==========================================================================\n";				
	cout<<"4. Cara bersin yang baik dan beretika yaitu...??\n";
	string pilgan4[50]={"a.   Menutup dengan baju bagian luar","b.  Menutup dengan baju bagian dalam","c.  Menutup dengan telapak tangan","d.  Menutup dengan tisu"};
    for (i=0;i<=3;i++)
	{cout<<pilgan4[i]<<"\n";}
	cout<<"JawabanAnda : ";
cin>>jawab;
if(jawab == 'b' || jawab == 'B')
        {benar++;}
else{
        salah++;}
    cout<<"==========================================================================\n";       
cout<<"5.  Daerah yang paling banyak yang berstatus Orang Dalam Pemantauan (ODP) dan Pasien Dalam Pemantauan (PDP) adalah...??\n";
    string pilgan5[50]={"a. a.  Kota Bandung","b. sukabumi","c. Kota Depok","d. Kota Bekasi"};
	for (i=0;i<=3;i++)
	{cout<<pilgan5[i]<<"\n";}
cout<<"JawabanAnda : ";
cin>>jawab;
if(jawab == 'b' || jawab == 'B')
        {benar++;}
else{
        salah++;}
	cout<<"==========================================================================\n";
	cout<<"6. Penanganan dampak COVID-19 perlu kerjasama atau gotong royong semua pihak, mulai dari pemerintah, aparat TNI/POLRI, masyarakat, dan dunia usaha. Salah satu upaya yang bisa dilakukan oleh masyarakat untuk mengatasi dampak COVID-19 pada bidang ekonomi yang dapat dirasakan secara cepat yaitu....??\n";
	string pilgan6[50]={"a. Mengumpulkan bantuan uang atau kebutuhan pokok ","b.Mendata dan melaporkan warga yang terdampak kepada aparat yang berwenang","c. Memberikan bantuan modal usaha","d. Mendoakannya semoga ikhlas dan tabah"};
	for (i=0;i<=3;i++)
	{cout<<pilgan6[i]<<"\n";}
	cout<<"JawabanAnda : ";
cin>>jawab;
if(jawab == 'b' || jawab == 'B')
        {benar++;}
else{
        salah++;}     
	cout<<"==========================================================================\n";
	cout<<"7. Jika sebuah daerah pada awalnya termasuk zona hijau COVID-19, lalu menjadi merah karena ada yang tertular dari tempat lain, maka hal yang perlu dilakukan oleh masyarakat adalah....??\n";
	string pilgan7[50]={"a.Memarahi orang yang telah membawa penyakit dari kota ke kampung.","b. Menjauhi korban karena khawatir tertular, lalu meminta dia mengisolasi di rumahnya.","c.Meminta pemeirntah membangun puskesmas darurat di kampung tersebut ","d.Memberikan semangat dan menghubungi petugas kesehatan setempat untuk diperiksa ditangani lebih lanjut."};
	for (i=0;i<=3;i++)
	{cout<<pilgan7[i]<<"\n";}
cout<<"JawabanAnda : ";
cin>>jawab;
if(jawab == 'd' || jawab == 'D')
        {benar++;}
else{
        salah++;}
	cout<<"==========================================================================\n";
	cout<<"8. Gejala awal orang yang terkena COVID-19 yaitu...???\n";
	string pilgan8[50]={"a. Demam, batuk, pilek, gangguan pernapasan, sakit tenggorokan, letih, lesu, dan nyeri otot.","b. Demam, batuk, pilek, gangguan pernapasan, sakit tenggorokan, letih, lesu, dan sakit kepala.","c. Demam, batuk, pilek, gangguan pernapasan, sakit tenggorokan, letih, lesu, dan kejang-kejang. ","d. Demam, batuk, pilek, gangguan pernapasan, sakit tenggorokan, letih, dan lesu."};
    for (i=0;i<=3;i++)
	{cout<<pilgan8[i]<<"\n";}
	cout<<"JawabanAnda : ";
cin>>jawab;
if(jawab == 'a' || jawab == 'A')
        {benar++;}
else{
        salah++;}
	cout<<"==========================================================================\n";
	cout<<"9. Kota yang merupakan awal dari penyebaran covid-19 adalah??\n";
	string pilgan9[50]={"a. wuhan","b. jakarta","c. madrid","d. roma"};
	for (i=0;i<=3;i++)
	{cout<<pilgan9[i]<<"\n";}
	cout<<"JawabanAnda : ";
cin>>jawab;
if(jawab == 'a' || jawab == 'A')
        {benar++;}
else{
        salah++;}
	cout<<"==========================================================================\n";
	cout<<"10. Tujuan menjaga jarak (Social distancing/Physical distancing) sebagaimana  yang diinstruksikan oleh pemerintah kepada masyarakat yaitu...??\n";
	string pilgan10[50]={"a. Agar orang-orang tidak terlalu akrab antara satu sama lain.","b.Membudayakan antri dan disiplin.","c. Mengantisipasi penyebaran COVID-19","d. Supaya orang-orang tidak berdesakan di tempat umum"};
	for (i=0;i<=3;i++)
	{cout<<pilgan10[i]<<"\n";}
	cout<<"JawabanAnda : ";
cin>>jawab;
if(jawab == 'd' || jawab == 'D')
        {benar++;}
else{
        salah++;} 
			
	cout<<"Apakah anda yakin dengan jawaban anda??[y/t]\n";cin>>pilihan;cout<<"\n";
					if (pilihan=='y' || pilihan=='Y')
					{goto nilai;}
					
					if (pilihan=='t' || pilihan=='T')
					{system("cls"); 
					goto ulangjwb;
					cout<<endl;}												

	}		nilai :
					cout<<"=====================================================\n";
					cout<<"PerolehanNilai :"<<endl;
		nilai = benar*10;
		cout<<"    Jumlah Benar : "<<benar<<" soal "<<endl;
		cout<<"    Jumlah Salah : "<<salah<<" soal "<<endl;
		cout<<"    Nilai Anda   : "<<nilai<<"\n"<<endl;
			selesai :
			cout<<"=================================="<<endl;
			cout<<"|Terima Kasih Telah Berpartisipasi|\n";
			cout<<"=================================="<<endl;
	
}
