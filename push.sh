#!/bin/bash
echo "Pulling the latest version of this repository..."
git pull origin main
echo "==================================================================="
echo "commit files as ------>    <$1>"
echo "==================================================================="
echo "Pushing to the repository..."
git add .
git commit -m "$1"
git push -u origin main
