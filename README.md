# Hello Audiences
Co-working space for 4 users
- Beam
- Dave
- Frank
- Per

# Initialize this Github Repository
You can easily initialize __this git__ repository be using `initgit.sh` file follow these steps.
- Use `mkdir` for create directory on your computer `mkdir <directory name>`.
- Download `initgit.sh` then put it in to the directory you just created.
- In case you cannot download `initgit.sh`, copy the script then `vi initgit.sh` and press `i` for insert mode then paste it and save it by `esc + :wq`.
- type this command in your terminal (path must be your new blank directory with `initgit.sh`) `bash initgit.sh`
- Oh! make sure you have already configured git account. If you have no idea what is i, look up at 
> https://medium.com/trueid-developers/เริ่มใช้-git-command-line-ฉบับรวบรัดใช้งานใน-5-นาที-e871be9807eb
- If everything is fine your git will be ready to use.
### And hey!!!!!, Don't forget to ask DAVE for a repository access permission

# Rule
- Don't Panic
- Respect each others.
- Don't do any bullshit pranks. It's not fun with a valueable files being damaged.

# Usage
#### In Github, the safest way for your workflows is by doing __Pulling => work(merge) => Pushing__ everytime you do something.

# Pull Instructions
#### Pulling some update to your directory.
using `bash update.sh` or `git pull origin master`.

# Push Instructions
#### Pushing your update to the git repository.
### `push.sh` instructions
- `bash push.sh <text for commit>` this command id for you need to add all changed files to git repository and commit it with the same statement.
- `bash push.sh` this is used for some user who need to commit each file manually and need only just `git push` to main branch.
**after `bash push.sh` you will see "Push only mode enable" means if you haven't manually committed any file yet, git will not allow you to push your update.**
