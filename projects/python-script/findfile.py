import os
import sys

def Traverse(root,filename,count,searchtype):
    mypath = root
    os.chdir(mypath)
    #print(f"Check at directory: {root}/")
    allfiles = [f for f in os.listdir(mypath)]
    onlyfiles = [fi for fi in os.listdir(mypath) if os.path.isfile(os.path.join(mypath, fi))]
    onlydir = [d for d in os.listdir(mypath) if not os.path.isfile(os.path.join(mypath, d))]
    if (searchtype == 'dir'):
        if (filename in onlydir):
            print(f"Found (dir): {mypath}/{filename}")
    else:
        for i in onlyfiles:
            if (i == filename):
                print(f"Found (file): {mypath}/{filename}")
                break
    for i in onlydir:
        Traverse(f"{root}/{i}",filename,count,searchtype)
    return

if (__name__ == "__main__"):
    os.chdir("../..")
    count = 0
    filename = sys.argv[1]
    if (len(sys.argv) == 3):
        searchtype = sys.argv[2]
    else:
        searchtype = "file"

    root = os.path.abspath(os.getcwd())
    print("="*60)
    print(f"         Seaching for {filename} ...")
    print()
    Traverse(root,filename,count,searchtype)
    if (count == 0):
        print(f"No file found under {root}")
    print()
    print("="*60)