```
	  __   __	     _ 	 
_________/ /\ /	/\__________/ /\_______________________________________________
_ _     / /_// / /     	   / / / _ _ _ 	       	 
       / ___  /	/ __   	 _/ / / ___    _  _    ___
     _/	/  / / / / /\  /   / / / _/\  //_//\  /	_/\  
    |__/  /_/_/	/_/_/ /___/_/  \_\\/ /___/_/ /_/\\/    
      		     __	  ___  	  	       __      	_ _ _
      _ _ _    	    /  \_/  /\ 	   _ _ _      / /\   
   _ _ _       	   / _ __  / / __      __    / __/\  ___    _  _    ___	
      		  / / /	/ / / /	 /\   / /\  /  \_\/ / _/\  //_//\  / _/\ 
      		 /_/_/ /_/_/ /___\_\ /_/_/ /_/\_\   \_\\/ /___/_/ /_/\\/ 2.0
       	       	       _ _ _ _ 	       	_ _ _  	       _ _ _   	       	
       	       	       	       	       	   _ _ _ 
```


AITTAHAR Mounir/Downwater (c) 2002

Released Sunday, March 25th at 23:00

[![Build Status](https://travis-ci.org/cpcsdk/hideur_maikeur.svg?branch=master)](https://travis-ci.org/cpcsdk/hideur_maikeur)

What's New ?
============

- source code entirely rewriten (cleaner code)
- conform to c-ansi rules 
- command line instead of interactive mode
- more intuitive use (in my opinion :P)
- CPC rules
- PC stinks

See INSTALL for compiling instructions.

I. SYNOPSIS
===========

Conversion:

    hideur fichierDos -o fichierAms [-u user] [-t type] [-x adrexe] [-l adrload] [-v]

Info:

    hideur -info fichier

Help:

    hideur -h


II. DESCRIPTION
===============

 Have you ever used a cross assembler for Z80 system ? Or one of
picture converter like Graphics Wizard ? When you want to load them with
a LOAD or a SAVE command, or else amsdos routines, you get an error
message. Oh dear ! What's happening ?

 Your file misses an amsdos HEADER. An amsdos header is just 80 bytes
added before the file data which containing useful informations like user,
size file, address of loading (when you invoke LOAD on a binary file),
address of execution (when you invokes RUN on a binary file)...

 Hideur Maikeur is a small util which allows you to add this header. His use
is simple, and yo can use it in a batch script because is a command line
util. The syntax looks like a famous GNU C compiler :).

 Hideur Maikeur uses ansi codes in verbose mode. If you are under MS-DOS
or Windows, you should add this line in your file C:\CONFIG.SYS :

    DEVICEHIGH=C:\WINDOWS\COMMAND\Ansi.sys

If C:\WINDOWS\COMMAND\ is the path of the file ansi.sys. Then, reboot :(.


III. OPTIONS
============

 Hideur Maikeur has the following options.

* DosFile     The dos file you want to convert
* -o AmsFile  The amsdos file you want to get
* -u user     user of the amsdos file(0-255)
* -t type     file type
  - 0 : Basic
  - 1 : Protected Basic
  - 2 : Binary
  - 3 : Protected Binary
* -x adrexe     : address of execution
* -l adrload    : address of loading


 Well the options describe themselves better than I could, no ? :) 


IV. GREETINGS :)
================

Thanks to

* Roudoudou (roudoudou@cpcscene.com) for advises and advertisements ;)
* Overflow for giving me reasons to make this version
* OffseT for the Amiga test of HM and his funny trolls
* All CPC sceners and users
* And all others

 I apologize if there were some (or many) fault language, english isn't my
mother tongue...

