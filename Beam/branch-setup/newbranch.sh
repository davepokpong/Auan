#/!bin/bash
echo "=========================================================="
echo "creating new branch name: $1" 
git branch $1
git checkout $1


