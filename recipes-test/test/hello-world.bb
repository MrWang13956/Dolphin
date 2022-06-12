# Copyright (C) 2022 XXXX Semiconductor 

DESCRPITION = "Hello World"
LICENSE = "GPLv2+"


addtask TestFun

python do_TestFun(){
  bb.plain("********************");
  bb.plain("* *");
  bb.plain("* Hello, World! *");
  bb.plain("* *");
  bb.plain("********************");
} 
