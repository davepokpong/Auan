#!/bin/bash
if [ $1 != "-null"]
then
    git pull origin $1
else
    git pull origin main
fi
echo "Pull completed at branch: $1"
