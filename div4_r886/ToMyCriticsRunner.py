import os
import subprocess

subprocess.run( "rm a.out ; clang++ ToMyCritics.cpp", shell = True)

subprocess.run("cat ToMyCritics1.txt | ./a.out", shell = True )