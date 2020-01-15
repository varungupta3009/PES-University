<?php
    $srn = $_POST["SRN"];
    $myFile = fopen("./data/$srn.vrg","r") or die("SRN not found");
    echo "Name: ".fgets($myFile)."<br />";
    echo "Semester: ".fgets($myFile)."<br />";
    echo "SRN: ".$srn."<br />";
    fclose($myFile);
?>