<?php

//variables
$input1 = $_GET['input1'];
$input2 = $_GET['input2'];
$testFreq;

//maths
$testFreq = $input1 - $input2;

//output
echo 'Your test frequency is: ' . $testFreq . ' ';

?>