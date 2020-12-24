import os
import sys


def Traverse(root,count,filename):
    mypath = root
    os.chdir(root)
    print(f"Check at {root}")
    onlydir = [d for d in os.listdir(mypath) if not os.path.isfile(os.path.join(mypath, d))]
    files = [f for f in os.listdir(mypath)]
    for i in files:
        print(f"        scanning: {i}")
        if (i == filename):
            print("        "+"-"*80)
            print(f"    >>  Found {filename} at {root}")
            os.remove(filename)
            print(f"    >>  {filename} is deleted")
            print("        "+"-"*80)
            count += 1
    for i in onlydir:
        if (i[0] == '.'):
            continue
        count += Traverse(f"{root}/{i}",0,filename)
    return count

if (__name__ == "__main__"):

    mypath = os.path.abspath(os.getcwd())
    count = 0
    if (len(sys.argv) == 1):
        print("\n     ** Require filename !! **  \n")
        print("clearFile manual: ")
        print("     - try >> python3 clearfile.py <your-file-name>")
        exit()
    filename = sys.argv[1]
    print("==============================================================")
    print()
    print(f"Searching for {filename} ...")
    print(f"Start scanning from [ {os.path.abspath(os.getcwd())} ]")
    print()
    count = Traverse(os.path.abspath(os.getcwd()),count,filename)
    if (count == 0):
        print("---------------------------------------------------------------------------")
        print(f"No file found under {mypath}")
        print("---------------------------------------------------------------------------")
    else:
        print(f"Scanning Done, Deleted all {count} file(s) with title {filename}")
    print("The entire Git was cleaned.")
    print()
    print("==============================================================")
    print()
