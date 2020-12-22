#!/bin/bash
echo "Pulling the latest versionof this repositoy............"
git pull origin main
echo "commit files as $1"
git add .
git commit -m "$1"
git push -u origin main
