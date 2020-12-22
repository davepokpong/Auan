import os
import sys
from os.path import isfile, join


mypath = os.path.abspath(os.getcwd())
count = 0
filename = sys.argv[1]

def Traverse(root,count,filename):
    mypath = root
    os.chdir(root)
    print(f"Check at {root}")
    onlydir = [d for d in os.listdir(mypath) if not isfile(join(mypath, d))]
    files = [f for f in os.listdir(mypath)]
    for i in files:
        print(f"    scanning: {i}")
        if (i == filename):
            print(f"Found {filename} at {root}")
            os.remove(filename)
            print(f"{filename} is deleted")
            count += 1
    for i in onlydir:
        if (i[0] == '.'):
            continue
        Traverse(f"{root}/{i}",count,filename)
    return

        
print("====================================================")
print()
print("Searching for {filename} ")
print(f"Start scanning from {os.path.abspath(os.getcwd())}")
Traverse(os.path.abspath(os.getcwd()),count,filename)
print(f"Scanning Done, Deleted all {count} file(s) with title {filename}")
print("The entire Git was cleaned.")
print()
print("====================================================")
