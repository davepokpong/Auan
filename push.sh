#!/bin/bash
echo "Pulling the latest version of this repository..."
git pull origin main
echo "commit files as <$1>"
echo "Pushing to the repository..."
git add .
git commit -m "$1"
git push -u origin main
