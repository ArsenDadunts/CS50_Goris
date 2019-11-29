#### CS50 commands:
**check50:**  is a tool for checking student code. As a student you can use check50 to check your CS50 problem sets or any other Problem sets for which check50 checks exist. check50 allows teachers to automatically grade code on correctness and to provide automatic feedback while students are coding.

**usage:** check50 `<owner>/<repo>/<branch>/<check>`

**style50:** is a command-line tool with which you can check your code for consistency with CS50’s style guide (for C). If your code isn’t styled consistently, style50 will summarize the changes you should make to your code, as by highlighting in green characters you should add and highlighting in red characters you should delete.

**usage:** style50 file

**submit50:** is a command-line tool with which you can submit work (e.g., problem sets) to a course (e.g., CS50). It’s based on git, a “distributed version control system” that allows you to save different versions of files without having to give each version a unique filename (as you might be wont to do on your own Mac or PC!). Via submit50 and, in turn, git can you thus submit work multiple times (i.e., multiple versions thereof).

**usage:** submit50 [-h] [--logout] [-v] [-V] slug

#### Git commands:
```
git clone /path/to/repository - Create a working copy of a local repository
git config --global user.name "Sam Smith"
git config --global user.email sam@example.com - Configure the author name and email address to be used with your commits.
git add <filename> - Add files to staging 
git status - List the files you've changed and those you still need to add or commit
git commit - Commit changes to head (but not yet to the remote repository)
git push origin master - Send changes to the master branch of your remote repository
git pull - Fetch and merge changes on the remote server to your working directory
