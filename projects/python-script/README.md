# Instructions for python-script

### Using findfile.py
The script findfile.py is used for searching the entire repository for `<filename>`
- type `python3 findfile.py <filename> <searchtype> <dir>` in your terminal.
- `<filename>`: Your searching file's name. (include your file type such as `helloWorld.js` etc.)
  - use `-all` as `<filename>` to search for all files (In this mode , `<searchtype>` and `<dir>` are not required).
- `<searchtype>`: using these search options below &darr;
  - `-file` : search only __files__.
  - `-dir`  : search only __directories__.
  - `-ftype`: search only given __file types__.
- `<dir>`: If you are searching all files under the repository, leave it __blank__.
- `<dir>`: Enter the path which referred from to `root` directory. The root directory is at your main folder which `push.sh` and `update.sh` is located.
then make a reference from the root directory to the directory you wish 
> Example `python3 findfile.py README.md -file /Beam/solve` means searching under `<git-repo>/Beam/solve` folder for `README.md` files.
