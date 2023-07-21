import os
import subprocess
import sys

print( sys.argv )
assert sys.argv[1].split(".")[-1] == "cpp"
assert sys.argv[2].split(".")[-1] == "txt"

subprocess.run( f"rm a.out ; g++ -std=c++17 {sys.argv[1]}", shell = True)

subprocess.run( f"cat {sys.argv[2]} | ./a.out", shell = True )