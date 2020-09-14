<?php

$line= file_get_contents("input.csv");
$fname=preg_split("/[,|\r\n|]+/",$line);

for($i=2; $i < count($fname); $i++)
{
    echo "Welcome, ";
    echo $fname[$i+1]; 
    echo " ";
    echo $fname[$i];
    $i++;
    echo "\n";
  
}
?>
