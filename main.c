#include <stdio.h>
#include <stdlib.h>

int pemilihan_kamar(){
    int pilkam,pilihan,periode,notelp,total;
    char nama[99],email[99],alamat[99];
    char vip [20][99]={"1. Air Conditioner","2. 1 Bed","3. 1 Kamar Mandi (air panas & dingin)","4. Bedside Cabinet","5. Kursi Tunggu","6. Overbed table","7. Meja Tv","8. Almari Pakaian","9. Refrigator","10. Dispencer"
                        ,"11. Meja","12. Smart Tv","13. Sofabed","14. Kulkas","15. Bed penunggu","16. Telepon","17. Ruang Keluarga","18. 1 Set Meja Makan","19. Kitchen Set","20. Mini Bar"};
    char kelasa [15][99]={"1. Air Conditioner","2. 1 Bed","3. 1 Kamar Mandi (air panas & dingin)","4. Bedside Cabinet","5. Kursi Tunggu","6. Overbed table","7. Meja Tv","8. Almari Pakaian","9. Refrigator","10. Dispencer"
                        ,"11. Meja","12. Smart Tv","13. Sofabed","14. Kulkas","15. Bed penunggu"};
    char kelasb [10][99]={"1. Air Conditioner","2. 1 Bed","3. 1 Kamar Mandi (air panas & dingin)","4. 1 Set Sofa","5. Bedside Cabinet","6. Bed Tunggu","7. Kursi Tunggu","8. Meja","9. Lemari Kecil","10. TV"};
    char kelasc [6][99]={"1. Air Conditioner","2. 1 Bed","3. 1 Kamar Mandi (air panas & dingin)","4. Bedside Cabinet","5. Kursi Tunggu","6. Lemari Kecil"};
    menukamar :
    printf("================================================================\n");
    printf("                           RUMAH SEHAT                          \n");
    printf("================================================================\n");
    printf("________________________________________________________________\n");
    printf("| No.|   Jenis Kamar                                           |\n");
    printf("|______________________________________________________________|\n");
    printf("| 1  |   VIP                                                   |\n");
    printf("| 2  |   Kelas I                                               |\n");
    printf("| 3  |   Kelas II                                              |\n");
    printf("| 4  |   Kelas III                                             |\n");
    printf("|____|_________________________________________________________|\n");
    ulang:
    printf("Masukkan Pilihan Anda (1/2/3/4) ="); scanf("%d",&pilkam);
    switch (pilkam){
case 1:
    system ("cls");
    printf("                               VIP\n");
    printf(" ---------------------------------------------------------------\n");
    printf("  Fasilitas Kamar =\n");
    printf(" ---------------------------------------------------------------\n");
    for (int i=0;i<20;i++)
    {
    printf(" %s \n",vip[i]);
    }
    printf(" ---------------------------------------------------------------\n");
    printf(" Tarif Kamar Per Malam = Rp. 3.500.000\n");
    printf(" ---------------------------------------------------------------\n");
    ulang1:
    printf(" Booking[1] Tidak[0] =");scanf("%d",&pilihan);
    if (pilihan == 1){
        system("cls");
        printf(" ---------------------------------------------------------------\n");
        printf("  Silahkan Masukkan Data Pemesanan :\n");
        printf(" ---------------------------------------------------------------\n");
        printf(" Masukkan nama = ");scanf("%s",&nama);
        printf(" Masukkan periode (malam) = ");scanf("%d",&periode);
        printf(" Masukkan No. telpon = ");scanf("%d",&notelp);
        printf(" Masukkan email = ");scanf("%s",&email);
        printf(" Masukkan alamat = ");scanf("%s",&alamat);
        system("cls");
        total=periode*3500000;
        printf("  -------------------------------------------------------------------------------------\n");
        printf("  Data Pemesan Kamar Perawatan\n");
        printf("  -------------------------------------------------------------------------------------\n");
        printf("  | Nama Pemesan kamar    || [%s]\n",nama);
        printf("  | Periode (Malam)       || [%d]\n",periode);
        printf("  | No. Telepon           || [%d]\n",notelp);
        printf("  | Email                 || [%s]\n",email);
        printf("  | Alamat                || [%s]\n",alamat);
        printf("  | Biaya Kamar Permalam  || [Rp. 3.500.000]\n");
        printf("  -------------------------------------------------------------------------------------\n");
        printf("  | Total Biaya Kamar     || [Rp.%d]\n",total);
        printf("  -------------------------------------------------------------------------------------\n");
    }
    else if(pilihan==0){
        system ("cls");
        goto menukamar;
    }
    else{
        printf("Masukkan Data Yang Sesuai!!!\n");
        goto ulang1;
    }
    break;
case 2:
    system ("cls");
    printf("                               Kelas I\n");
    printf(" ---------------------------------------------------------------\n");
    printf("  Fasilitas Kamar =\n");
    printf(" ---------------------------------------------------------------\n");
    for (int i=0;i<15;i++)
    {
    printf(" %s \n",kelasa[i]);
    }
    printf(" ---------------------------------------------------------------\n");
    printf(" Tarif Kamar Per Malam = Rp. 2.500.000\n");
    printf(" ---------------------------------------------------------------\n");
    ulang2:
    printf(" Booking[1] Tidak[0] =");scanf("%d",&pilihan);
    if (pilihan == 1){
        system("cls");
        printf(" ---------------------------------------------------------------\n");
        printf("  Silahkan Masukkan Data Pemesanan :\n");
        printf(" ---------------------------------------------------------------\n");
        printf(" Masukkan nama = ");scanf("%s",&nama);
        printf(" Masukkan periode (malam) = ");scanf("%d",&periode);
        printf(" Masukkan No. telpon = ");scanf("%d",&notelp);
        printf(" Masukkan email = ");scanf("%s",&email);
        printf(" Masukkan alamat = ");scanf("%s",&alamat);
        system("cls");
        total=periode*2500000;
        printf("  -------------------------------------------------------------------------------------\n");
        printf("  Data Pemesan Kamar Perawatan\n");
        printf("  -------------------------------------------------------------------------------------\n");
        printf("  | Nama Pemesan kamar    || [%s]\n",nama);
        printf("  | Periode (Malam)       || [%d]\n",periode);
        printf("  | No. Telepon           || [%d]\n",notelp);
        printf("  | Email                 || [%s]\n",email);
        printf("  | Alamat                || [%s]\n",alamat);
        printf("  | Biaya Kamar Permalam  || [Rp. 2.500.000]\n");
        printf("  -------------------------------------------------------------------------------------\n");
        printf("  | Total Biaya Kamar     || [Rp.%d]\n",total);
        printf("  -------------------------------------------------------------------------------------\n");
    }
    else if(pilihan==0){
        system ("cls");
        goto menukamar;
    }
    else{
        printf("Masukkan Data Yang Sesuai!!!\n");
        goto ulang2;
    }
    break;
case 3:
    system ("cls");
    printf("                               Kelas II\n");
    printf(" ---------------------------------------------------------------\n");
    printf("  Fasilitas Kamar =\n");
    printf(" ---------------------------------------------------------------\n");
    for (int i=0;i<10;i++)
    {
    printf(" %s \n",kelasb[i]);
    }
    printf(" ---------------------------------------------------------------\n");
    printf(" Tarif Kamar Per Malam = Rp. 1.300.000\n");
    printf(" ---------------------------------------------------------------\n");
    ulang3:
    printf(" Booking[1] Tidak[0] =");scanf("%d",&pilihan);
    if (pilihan == 1){
        system("cls");
        printf(" ---------------------------------------------------------------\n");
        printf("  Silahkan Masukkan Data Pemesanan :\n");
        printf(" ---------------------------------------------------------------\n");
        printf(" Masukkan nama = ");scanf("%s",&nama);
        printf(" Masukkan periode (malam) = ");scanf("%d",&periode);
        printf(" Masukkan No. telpon = ");scanf("%d",&notelp);
        printf(" Masukkan email = ");scanf("%s",&email);
        printf(" Masukkan alamat = ");scanf("%s",&alamat);
        system("cls");
        total=periode*1300000;
        printf("  -------------------------------------------------------------------------------------\n");
        printf("  Data Pemesan Kamar Perawatan\n");
        printf("  -------------------------------------------------------------------------------------\n");
        printf("  | Nama Pemesan kamar    || [%s]\n",nama);
        printf("  | Periode (Malam)       || [%d]\n",periode);
        printf("  | No. Telepon           || [%d]\n",notelp);
        printf("  | Email                 || [%s]\n",email);
        printf("  | Alamat                || [%s]\n",alamat);
        printf("  | Biaya Kamar Permalam  || [Rp. 1.300.000]\n");
        printf("  -------------------------------------------------------------------------------------\n");
        printf("  | Total Biaya Kamar     || [Rp.%d]\n",total);
        printf("  -------------------------------------------------------------------------------------\n");
    }
    else if(pilihan==0){
        system ("cls");
        goto menukamar;
    }
    else{
        printf("Masukkan Data Yang Sesuai!!!\n");
        goto ulang3;
    }
    break;
case 4:
    system ("cls");
    printf("                               Kelas III\n");
    printf(" ---------------------------------------------------------------\n");
    printf("  Fasilitas Kamar =\n");
    printf(" ---------------------------------------------------------------\n");
    for (int i=0;i<6;i++)
    {
    printf(" %s \n",kelasc[i]);
    }
    printf(" ---------------------------------------------------------------\n");
    printf(" Tarif Kamar Per Malam = Rp. 800.000\n");
    printf(" ---------------------------------------------------------------\n");
    ulang4:
    printf(" Booking[1] Tidak[0] =");scanf("%d",&pilihan);
    if (pilihan == 1){
        system("cls");
        printf(" ---------------------------------------------------------------\n");
        printf("  Silahkan Masukkan Data Pemesanan :\n");
        printf(" ---------------------------------------------------------------\n");
        printf(" Masukkan nama = ");scanf("%s",&nama);
        printf(" Masukkan periode (malam) = ");scanf("%d",&periode);
        printf(" Masukkan No. telpon = ");scanf("%d",&notelp);
        printf(" Masukkan email = ");scanf("%s",&email);
        printf(" Masukkan alamat = ");scanf("%s",&alamat);
        system("cls");
        total=periode*800000;
        printf("  -------------------------------------------------------------------------------------\n");
        printf("  Data Pemesan Kamar Perawatan\n");
        printf("  -------------------------------------------------------------------------------------\n");
        printf("  | Nama Pemesan kamar    || [%s]\n",nama);
        printf("  | Periode (Malam)       || [%d]\n",periode);
        printf("  | No. Telepon           || [%d]\n",notelp);
        printf("  | Email                 || [%s]\n",email);
        printf("  | Alamat                || [%s]\n",alamat);
        printf("  | Biaya Kamar Permalam  || [Rp. 800.000]\n");
        printf("  -------------------------------------------------------------------------------------\n");
        printf("  | Total Biaya Kamar     || [Rp.%d]\n",total);
        printf("  -------------------------------------------------------------------------------------\n");
    }
    else if(pilihan==0){
        system ("cls");
        goto menukamar;
    }
    else{
        printf("Masukkan Data Yang Sesuai!!!\n");
        goto ulang1;
    }
    break;
default:
    printf("Masukkan Data Yang Benar\n");
    goto ulang;
    }
    }
int perawatan(){
    int pilper,pilihang,umur;
    char nama[30],gender[30];
    menuperawatan :
    printf("================================================================\n");
    printf("                           RUMAH SEHAT                          \n");
    printf("================================================================\n");
    printf("________________________________________________________________\n");
    printf("| No.|   Pelayanan Medis Spesialistik                          |\n");
    printf("|______________________________________________________________|\n");
    printf("| 1  |   Pelayanan Spesialis Penyakit Dalam                    |\n");
    printf("| 2  |   Pelayanan Spesialis Penyakit Kulit Dan Kelamin        |\n");
    printf("| 3  |   Pelayanan Spesialis THT                               |\n");
    printf("| 4  |   Pelayanan Spesialis Bedah                             |\n");
    printf("| 5  |   Pelayanan Spesialis Mata                              |\n");
    printf("|____|_________________________________________________________|\n");
    ulang :
    printf(" Masukkan pilihan anda (1/2/3/4/5) =");scanf("%d",&pilper);
    switch (pilper){
case 1:
    system ("cls");
    printf(" ---------------------------------------------------------------\n");
    printf("                         Rumah Sehat\n");
    printf(" ---------------------------------------------------------------\n");
    printf(" | Pelayanan Spesialis   || [Penyakit Dalam]\n");
    printf(" | Nama Dokter           || [dr.Richard,Sp.PD]\n");
    printf(" ---------------------------------------------------------------\n");
    printf(" Biaya perawatan untuk 1 kali pegecekan dokter \n (per hari 3x cek) Rp. 3.500.000\n");
    printf(" ---------------------------------------------------------------\n");
    ulang1:
    printf("Setuju[1] Tidak[0] = ");scanf("%d",&pilihang);
    if(pilihang==1){
        system("cls");
        printf(" ---------------------------------------------------------------\n");
        printf("  Silahkan Masukkan Data Pemesanan :\n");
        printf(" ---------------------------------------------------------------\n");
        printf(" Masukkan nama = ");scanf("%s",&nama);
        printf(" Masukkan umur = ");scanf("%d",&umur);
        printf(" Masukkan gender = ");scanf("%s",&gender);
        system ("cls");
        printf("  -------------------------------------------------------------------------------------\n");
        printf("  Data Pemesan Perawatan\n");
        printf("  -------------------------------------------------------------------------------------\n");
        printf("  | Nama Dokter           || [dr.Richard,Sp.PD]\n");
        printf("  | Spesialis Dokter      || [Penyakit Dalam]\n");
        printf("  | Nama Pasien           || [%s]\n",nama);
        printf("  | Umur Pasien           || [%d]\n",umur);
        printf("  | Gender pasien         || [%s]\n",gender);
        printf("  -------------------------------------------------------------------------------------\n");
        printf("  | Total Pembayaran      || Rp. 3.500.000\n");
        printf("  -------------------------------------------------------------------------------------\n");
    }
    else if(pilihang==0){
        system ("cls");
        goto menuperawatan;
    }
    else{
        printf("Masukkan Data Yang Sesuai\n");
        goto ulang1;
    }
    break;
case 2:
    system ("cls");
    printf(" ---------------------------------------------------------------\n");
    printf("                         Rumah Sehat\n");
    printf(" ---------------------------------------------------------------\n");
    printf(" | Pelayanan Spesialis   || [Penyakit Kulit dan Kelamin]\n");
    printf(" | Nama Dokter           || [dr.Steven,Sp.KK]\n");
    printf(" ---------------------------------------------------------------\n");
    printf(" Biaya perawatan untuk 1 kali pegecekan dokter \n (per hari 3x cek) Rp. 3.300.000\n");
    printf(" ---------------------------------------------------------------\n");
    ulang2:
    printf("Setuju[1] Tidak[0] = ");scanf("%d",&pilihang);
    if(pilihang==1){
        system("cls");
        printf(" ---------------------------------------------------------------\n");
        printf("  Silahkan Masukkan Data Pemesanan :\n");
        printf(" ---------------------------------------------------------------\n");
        printf(" Masukkan nama = ");scanf("%s",&nama);
        printf(" Masukkan umur = ");scanf("%d",&umur);
        printf(" Masukkan gender = ");scanf("%s",&gender);
        system ("cls");
        printf("  -------------------------------------------------------------------------------------\n");
        printf("  Data Pemesan Perawatan\n");
        printf("  -------------------------------------------------------------------------------------\n");
        printf("  | Nama Dokter           || [prof.blabla]\n");
        printf("  | Spesialis Dokter      || [Penyakit Kulit dan Kelamin]\n");
        printf("  | Nama Pasien           || [%s]\n",nama);
        printf("  | Umur Pasien           || [%d]\n",umur);
        printf("  | Gender pasien         || [%s]\n",gender);
        printf("  -------------------------------------------------------------------------------------\n");
        printf("  | Total Pembayaran      || Rp. 3.300.000\n");
        printf("  -------------------------------------------------------------------------------------\n");
    }
    else if(pilihang==0){
        system ("cls");
        goto menuperawatan;
    }
    else {
        printf("Masukkan Data Yang Sesuai\n");
        goto ulang2;
    }
    break;
case 3:
    system ("cls");
    printf(" ---------------------------------------------------------------\n");
    printf("                         Rumah Sehat\n");
    printf(" ---------------------------------------------------------------\n");
    printf(" | Pelayanan Spesialis   || [THT]\n");
    printf(" | Nama Dokter           || [dr.Kim all in,Sp.THT]\n");
    printf(" ---------------------------------------------------------------\n");
    printf(" Biaya perawatan untuk 1 kali pegecekan dokter \n (per hari 3x cek) Rp. 2.700.000\n");
    printf(" ---------------------------------------------------------------\n");
    ulang3 :
    printf("Setuju[1] Tidak[0] = ");scanf("%d",&pilihang);
    if(pilihang==1){
        system("cls");
        printf(" ---------------------------------------------------------------\n");
        printf("  Silahkan Masukkan Data Pemesanan :\n");
        printf(" ---------------------------------------------------------------\n");
        printf(" Masukkan nama = ");scanf("%s",&nama);
        printf(" Masukkan umur = ");scanf("%d",&umur);
        printf(" Masukkan gender = ");scanf("%s",&gender);
        system ("cls");
        printf("  -------------------------------------------------------------------------------------\n");
        printf("  Data Pemesan Perawatan\n");
        printf("  -------------------------------------------------------------------------------------\n");
        printf("  | Nama Dokter           || [dr.Kim all in,Sp.THT]\n");
        printf("  | Spesialis Dokter      || [THT]\n");
        printf("  | Nama Pasien           || [%s]\n",nama);
        printf("  | Umur Pasien           || [%d]\n",umur);
        printf("  | Gender pasien         || [%s]\n",gender);
        printf("  -------------------------------------------------------------------------------------\n");
        printf("  | Total Pembayaran      || Rp. 2.700.000\n");
        printf("  -------------------------------------------------------------------------------------\n");
    }
    else if(pilihang==0){
        system ("cls");
        goto menuperawatan;
    }
    else{
        printf("Masukkan Data Yang Sesuai\n");
        goto ulang3;
    }
    break;
case 4:
    system ("cls");
    printf(" ---------------------------------------------------------------\n");
    printf("                         Rumah Sehat\n");
    printf(" ---------------------------------------------------------------\n");
    printf(" | Pelayanan Spesialis   || [Bedah]\n");
    printf(" | Nama Dokter           || [dr.Theo,Sp.B]\n");
    printf(" ---------------------------------------------------------------\n");
    printf(" Biaya perawatan untuk 1 kali pegecekan dokter \n (per hari 3x cek) Rp. 2.800.000\n");
    printf(" ---------------------------------------------------------------\n");
    ulang4:
    printf("Setuju[1] Tidak[0] = ");scanf("%d",&pilihang);
    if(pilihang==1){
        system("cls");
        printf(" ---------------------------------------------------------------\n");
        printf("  Silahkan Masukkan Data Pemesanan :\n");
        printf(" ---------------------------------------------------------------\n");
        printf(" Masukkan nama = ");scanf("%s",&nama);
        printf(" Masukkan umur = ");scanf("%d",&umur);
        printf(" Masukkan gender = ");scanf("%s",&gender);
        system ("cls");
        printf("  -------------------------------------------------------------------------------------\n");
        printf("  Data Pemesan Perawatan\n");
        printf("  -------------------------------------------------------------------------------------\n");
        printf("  | Nama Dokter           || [dr.Theo,Sp.B]\n");
        printf("  | Spesialis Dokter      || [Bedah]\n");
        printf("  | Nama Pasien           || [%s]\n",nama);
        printf("  | Umur Pasien           || [%d]\n",umur);
        printf("  | Gender pasien         || [%s]\n",gender);
        printf("  -------------------------------------------------------------------------------------\n");
        printf("  | Total Pembayaran      || Rp. 2.800.000\n");
        printf("  -------------------------------------------------------------------------------------\n");
    }
    else if(pilihang==0){
        system ("cls");
        goto menuperawatan;
    }
    else{
        printf("Masukkan Data Yang Sesuai\n");
        goto ulang4;
    }
    break;
case 5:
    system ("cls");
    printf(" ---------------------------------------------------------------\n");
    printf("                         Rumah Sehat\n");
    printf(" ---------------------------------------------------------------\n");
    printf(" | Pelayanan Spesialis   || [Mata]\n");
    printf(" | Nama Dokter           || [dr.Luthfi,Sp.M]\n");
    printf(" ---------------------------------------------------------------\n");
    printf(" Biaya perawatan untuk 1 kali pegecekan dokter \n (per hari 3x cek) Rp. 1.500.000\n");
    printf(" ---------------------------------------------------------------\n");
    ulang5:
    printf("Setuju[1] Tidak[0] = ");scanf("%d",&pilihang);
    if(pilihang==1){
        system("cls");
        printf(" ---------------------------------------------------------------\n");
        printf("  Silahkan Masukkan Data Pemesanan :\n");
        printf(" ---------------------------------------------------------------\n");
        printf(" Masukkan nama = ");scanf("%s",&nama);
        printf(" Masukkan umur = ");scanf("%d",&umur);
        printf(" Masukkan gender = ");scanf("%s",&gender);
        system ("cls");
        printf("  -------------------------------------------------------------------------------------\n");
        printf("  Data Pemesan Perawatan\n");
        printf("  -------------------------------------------------------------------------------------\n");
        printf("  | Nama Dokter           || [dr.Luthfi,Sp.M]\n");
        printf("  | Spesialis Dokter      || [Mata]\n");
        printf("  | Nama Pasien           || [%s]\n",nama);
        printf("  | Umur Pasien           || [%d]\n",umur);
        printf("  | Gender pasien         || [%s]\n",gender);
        printf("  -------------------------------------------------------------------------------------\n");
        printf("  | Total Pembayaran      || Rp. 1.500.000\n");
        printf("  -------------------------------------------------------------------------------------\n");
    }
    else if(pilihang==0){
        system ("cls");
        goto menuperawatan;
    }
    else {
        printf("Masukkan Data Yang Sesuai\n");
        goto ulang5;
    }
    break;
default:
    printf("Masukkan Data Yang Benar\n");
    goto ulang;
    }
}

int pembelian_obat(){
    int jumlah,harga,total,ppn,bayar;
    char obat[40];
    system("cls");
    printf(" ---------------------------------------------------------------\n");
    printf("  Silahkan Masukkan Data Pemesanan :\n");
    printf(" ---------------------------------------------------------------\n");
    printf(" Masukkan Nama Obat = ");scanf("%s",&obat);
    printf(" Masukkan Jumlah Obat Dibeli = ");scanf("%d",&jumlah);
    printf(" Masukkan Harga Satuan Obat = ");scanf("%d",&harga);
    total = jumlah * harga;
    ppn = total * 0.10;
    bayar = total + ppn;
    system("cls");
    printf("  -------------------------------------------------------------------------------------\n");
    printf("  Data Pemesan Obat\n");
    printf("  -------------------------------------------------------------------------------------\n");
    printf("  | Nama Obat             || [%s]\n",obat);
    printf("  | Jumlah Obat           || [%d]\n",jumlah);
    printf("  | Harga Satuan Obat     || [%d]\n",harga);
    printf("  | Total Harga Obat      || [%d]\n",total);
    printf("  | PPN                   || [%d]\n",ppn);
    printf("  -------------------------------------------------------------------------------------\n");
    printf("  | Total Yang Dibayar    || [Rp.%d]\n",bayar);
    printf("  -------------------------------------------------------------------------------------\n");
}

int main()
{
    int dipilih,menu;
    menuutama :
    printf("================================================================\n");
    printf("                           RUMAH SEHAT                          \n");
    printf("================================================================\n");
    printf("________________________________________________________________\n");
    printf("| No.|   Pilihan                                               |\n");
    printf("|______________________________________________________________|\n");
    printf("| 1  |   Pemesanan Kamar                                       |\n");
    printf("| 2  |   Pelayanan Medis Spesialis                             |\n");
    printf("| 3  |   Pembelian Obat                                        |\n");
    printf("|____|_________________________________________________________|\n");
    ulang :
    printf(" Masukan Pilihan Anda (1/2/3) = ");scanf("%d",&dipilih);
    if (dipilih==1){
        system ("cls");
        pemilihan_kamar();
    }
    else if (dipilih==2){
        system ("cls");
        perawatan();
    }
    else if (dipilih==3){
        system ("cls");
        pembelian_obat();
    }
    else{
        printf(" Masukkan Data Yang Benar!!!\n");
        goto ulang;
    }
    ulanglagi:
    printf("Kembali ke menu utama [1] Keluar [0] = ");scanf("%d",&menu);

    if (menu==1){
        system("cls");
        goto menuutama;
    }
    else if (menu==0){
        system("cls");
        printf("  -------------------------------------------------------------------------------------\n");
        printf("  |  T E R I M A  K A S I H  T E L A H  M E N G G U N A K A N  P R O G R A M   I N I  |\n");
        printf("  -------------------------------------------------------------------------------------\n");
    }
    else{
        printf("Masukkan Data Yang Benar!!!\n");
        goto ulanglagi;
    }
    return 0;
}
