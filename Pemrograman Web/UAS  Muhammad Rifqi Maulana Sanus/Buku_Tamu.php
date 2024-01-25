<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link href="https://fonts.googleapis.com/css2?family=Montserrat&family=Prata&display=swap" rel="stylesheet">
    <title>KucingIjo Buku Tamu</title>
    <script src="https://kit.fontawesome.com/a076d05399.js"></script>
    <link rel="stylesheet" href="All_File.css">
</head>
<body>
    <div class="header mnsrat">
        <h1 style="font-size: 50px;">MY BLOG</h1>
        <p style="padding: 15px; font-size: 25px;">Welcome</p>
    </div>
    <nav class="mnsrat">
        <label class="logo"><a href="Home.html"><img src="gambar/logo.jpg" alt="Rifqi Maulana"></a></label>
        <input type="checkbox" id="check">
        <label for="check" class="checkbtn">
                <i class="fas fa-bars"></i>
        </label>
        <ul>
            <li><a  href="Home.html">Home</a></li>
            <li><a href="About.html">About</a></li>
            <li><a href="Blog.html">Blog</a></li>
            <li><a class="aktif" href="#">Buku Tamu</a></li>
        </ul>
    </nav>
    <div class="utama">
        <form method="POST" action="<?php echo $_SERVER["PHP_SELF"]; ?>">
            <div>
                <label>Nama</label><br>
                <input type="text" name="fname">
            </div>
            <div>
                <label>Email</label><br>
                <input type="email" name="femail">
            </div>
            <div>
                <label>Alamat</label><br>
                <input type="text" name="falamat">
            </div>
            <div>
                <label>No. Telp</label><br>
                <input type="number" name="ftelp">
            </div>
            <div>
                <label>Tempat, Tanggal lahir</label><br>
                <input type="text" name="fttl">
            </div>
            <div>
                <label>Warna Favorit</label><br>
                <input type="text" name="fwarna">
            </div>
            <div>
                <label>Makanan Favorit</label><br>
                <input type="text" name="fmakan">
            </div>
            <div>
                <input type="submit" value="Submit">
            </div>
        </form>
        <div>
            <?php 
                $nama = isset($_POST['fname']) ? $_POST['fname'] : '';
                $email = isset($_POST['femail']) ? $_POST['femail'] : '';
                $alamat = isset($_POST['falamat']) ? $_POST['falamat'] : '';
                $telp = isset($_POST['ftelp']) ? $_POST['ftelp'] : '';
                $ttl = isset($_POST['fttl']) ? $_POST['fttl'] : '';
                $warna = isset($_POST['fwarna']) ? $_POST['fwarna'] : '';
                $makan = isset($_POST['fmakan']) ? $_POST['fmakan'] : '';

                $data = "<br><br>Nama: $nama<br>Email: $email<br>Alamat: $alamat<br>No. Telp: $telp<br>Tempat, Tanggal lahir: $ttl<br>Warna Favorit: $warna<br>Makanan Favorit: $makan<br><br>";

                $Tamu = fopen("Buku_Tamu.txt", "a");

                if(isset($_POST['fname']) || isset($_POST['femail']) || isset($_POST['falamat']) || isset($_POST['ftelp']) || isset($_POST['fttl']) || isset($_POST['fwarna']) || isset($_POST['fmakan'])){
                    fwrite($Tamu, $data);
                    fclose($Tamu);
                }

                if(isset($_POST['fname']) || isset($_POST['femail']) || isset($_POST['falamat']) || isset($_POST['ftelp']) || isset($_POST['fttl']) || isset($_POST['fwarna']) || isset($_POST['fmakan'])){
                    $Tamu = fopen("Buku_Tamu.txt", "r");
                    echo fread($Tamu, filesize("Buku_Tamu.txt"));
                }
            ?>
        </div>
    </div>
    <footer>
        <h5 style="text-align: center;">Copyright &copy;2020 | Rifqi Maulana</h5>
        <a href="#"><i class="fas fa-arrow-up"></i></a>
     </footer>
</body>
</html>