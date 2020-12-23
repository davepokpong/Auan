#!/bin/bash
echo "Pulling the latest version of this repository..."
git pull origin $2
echo "==================================================================="
echo "           commit files as ------>    <$1>"
echo "==================================================================="
echo "[96mPushing to the repository..."
if [ "$1" != "-null" ]
then
    git add .
    git commit -m "$1"
    echo "==================================================================="
    echo "           All files have been committed."
    echo "==================================================================="
fi
if [ "$1" == "-null" ]
then
    echo "==================================================================="
    echo "           Push only mode enable."
    echo "==================================================================="
fi
git push -u origin $2
echo "Process Done."
