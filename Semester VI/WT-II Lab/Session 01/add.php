<?php
    $srn = $_POST["SRN"];
    if (file_put_contents("./data/$srn.vrg", $_POST["name"]."\n".$_POST["sem"]."\n") !== false) {
        echo "File created";
    } else {
        echo "Cannot create file";
    }
?>