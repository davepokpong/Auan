import os
import sys

def Traverse(root,filename,count,searchtype):

    mypath = root
    os.chdir(mypath)
    #print(f"Check at directory: {root}/")
    allfiles = [f for f in os.listdir(mypath)]
    onlyfiles = [fi for fi in os.listdir(mypath) if os.path.isfile(os.path.join(mypath, fi))]
    onlydir = [d for d in os.listdir(mypath) if not os.path.isfile(os.path.join(mypath, d))]
    if (searchtype == '-dir'):
        if (filename in onlydir):
            print(f"Found (dir): {mypath}/{filename}")
            count += 1
    elif (searchtype == "-ftype"):
        for k in allfiles:
            if (filename in k):
                print(f"Found(file-type): {mypath}/{k}")
                count += 1
    elif (searchtype == "-file"):
        for i in onlyfiles:
            if (i == filename):
                print(f"Found (file): {mypath}/{filename}")
                count += 1
                break
    for i in onlydir:
        count += Traverse(f"{root}/{i}",filename,0,searchtype)
    return count

if (__name__ == "__main__"):
    os.chdir("../..")
    count = 0
    filename = sys.argv[1]
    searchtype = sys.argv[2]

    if (len(sys.argv) >= 4):
        root = os.path.abspath(os.getcwd())+sys.argv[3]
    else:
        root = os.path.abspath(os.getcwd())

    print("="*60)
    print(f"         Seaching for {filename} ...")
    print()
    count = Traverse(root,filename,count,searchtype)
    if (count == 0):
        print(f"No file found under {root}")
    else:
        print()
        print(f"Totally Found {count} file(s).")
    print()
    print("="*60)