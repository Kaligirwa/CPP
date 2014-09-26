git init
git add .
git commit -m "$1" 
git push origin master

echo "committing with these comments $1"
exit 0
