# Program Perhitungan Lingkaran (C++)

Program ini berfungsi untuk menghitung radius (jari-jari), diameter, keliling, dan luas sebuah lingkaran berdasarkan koordinat titik pusat (centroid) dan satu titik lain di keliling lingkaran yang dimasukkan oleh pengguna.

## Fungsi getCoordinates()
Fungsi ini bertugas untuk menerima input koordinat dari pengguna. Parameter fungsi menggunakan pass by reference (double&), agar nilai yang dimasukkan user bisa langsung digunakan di fungsi main. Fungsi meminta:
Koordinat pusat lingkaran (cx, cy).
Koordinat titik lain pada keliling lingkaran (px, py).

## Fungsi outputResults()
Fungsi ini digunakan untuk menampilkan hasil perhitungan radius, diameter, keliling, dan luas ke layar. 
Fungi tersebu:
Mengatur format angka menjadi 4 angka di belakang koma (setprecision(4)). Mencetak nilai radius.
Mencetak diameter (yaitu 2 * r).
Memanggil fungsi circumference(r) untuk keliling.
Memanggil fungsi area(r) untuk luas.
Mencetak semua hasil

## Fungsi distance()
Fungsi ini digunakan untuk menghitung jarak antara dua titik (x₁, y₁) dan (x₂, y₂) menggunakan rumus jarak Euclidean.
distance = √((x2 - x1)² + (y2 - y1)²)
Fungsi tersebut:
Menghitung selisih antara titik x dan y (deltaX, deltaY).
Mengkuadratkan keduanya lalu dijumlahkan.
Mengambil akar kuadrat hasilnya dengan sqrt().
Nilai hasilnya dikembalikan (return) ke pemanggil. 

## Fungsi radius()
Fungsi ini berfungsi untuk menghitung radius lingkaran, yaitu jarak antara titik pusat dengan titik di keliling. Fungsi memanggil fungsi distance(cx, cy, px, py). Nilai hasil jarak tersebut dikembalikan sebagai radius lingkaran.

## Fungsi circumference()
Fungsi ini menghitung keliling lingkaran, menggunakan rumus:
keliling = 2 * π * r
Fungsi tersebut:
Menerima nilai r dari parameter.
Mengalikan r dengan konstanta PI dan 2.
Mengembalikan hasil keliling.

## Fungsi area()
Fungsi ini menghitung luas lingkaran berdasarkan rumus:
area = π * r²
Fungsi tersebut:
Mengkuadratkan nilai r.
Mengalikan dengan PI.
Mengembalikan hasil luas.

## Fungsi main()
Fungsi ini mendeklarasikan variabel untuk menyimpan koordinat titik pusat dan titik pada keliling dan memanggil user defined function yang dideklarasikan seperti getCoordinates() untuk mengambil input dari user, radius() untuk menghitung jari-jari berdasarkan input, dan outputResults() untuk menampilkan hasil akhir.

