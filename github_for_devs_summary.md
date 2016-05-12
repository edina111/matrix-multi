Recap of what we've done so far:  

1. Getting Ready for Class  
Make sure you have Git insalled on your computer and a GitHub account.  
2. Getting Started  
Quick review of what we've covered so far:  
Repository for Class: https://github.com/githubteacher/developers-may-2016  
Tour of Repository:  
Code View: Files belonging to the project  
README.md: Description of the Repository  
Issues: A place to have conversations and collaborate  
Pull requests: A place to collaborate while introducing changes to your project  
Comment on Issue #1 to become a collaborator on the project  
Practice making an issue in the issues tab of the class repository.  
For today's activity, be sure to include your username in the title, like "YourUserName Hometown"  
In the body of the issue, we added the steps we'll take for the workflow.  
Our goal later will be to add a document with information about your hometown, like good restaurants or things to do.  
You can include markdown syntax here.  
Getting access to the collaborator script:  
The collaborator script is open-source! You can access it here. Our training kit is also open-source.  
We invite you to use these and welcome contributions to both these repos!  
3. GitHub Flow  
You can find that visual of the GitHub flow at this link: https://guides.github.com/introduction/flow/  
4. Branching with Git  
Review of branches  
When you create a branch, you are essentially creating an identical copy of the project at that point in time that is completely separate from the master branch.  
Create a branch on GitHub.com in the class repository  
Click the 'branch' dropdown  
Enter a branchname name 'firstname-lastname-hometown'  
6. Working Locally  
Review of working locally  
Working on our new branch, we created a new file.  
List the files in your current directory by running ls -la  
We learned about 'working', 'staging', and 'history' and how commits fit into those areas using this resource.  
See your working/staged area git status. This command is :heart:!  
Change your file from 'working' to 'staging' by running git add <file-name>  
Change your file from 'staging' to 'history' by running git commit  
Text editor opens: Write a 'commit message' tells a story of the changes you just made in 50 characters or less.  
Create a new file and repeat steps 1 - 3 for the two stage commit. This way, we'll have two commits to work with.  
Here are some shortcuts to know about in the future:  
To automatically stage all files that have been changed, run git add -A.  
Note: This will only work for files that are already being tracked, not brand new files.  
Avoid the text editor in the commit by running git commit -m "commit message"  
7. Collaborating on Code  
Review of moving from Git to GitHub  
We talked about remote, and how we can see details about it by running git remote, git remote -v, and git remote show origin  
'Push' our changes on the current branch to GitHub.com by running git push -u origin <branch-name>  
If you forget the -u tag, set a 'upstream branch' relationship between our local branch and   
the GitHub.com remote branch by running **git branch --set-upstream-to=origin/<remote-branch-name>**  
This means we only have to run git push and git pull in the future  
git pull is the combination of git fetch and git merge  
git branch and git branch -a will help you see what is going on with your local and remote branches  
On GitHub.com, open a pull request in our class repository by clicking the green "New pull request" button.  
Make sure your pull request says base: master and compare: <your-new-branch>  
Give it a good title and message about the changes you introduced. Bonus points for using markdown and emojis!  
You can add labels and assignees to pull requests like we did with Issues.  
Using @mention is important - you can mention people or teams to give them a notification  
to see your pull request to start collaboration.  
Notifications  
Notifications are an important part of GitHub. You can customize these several ways.  
For GitHub in general, Settings/notificatons  
For repositories, at the top of a repository page on GitHub.com by clicking "Watch"   
For individual issues and pull requests by clicking "unsubscribe" on the right hand side of the webpage  
On the pull request page, we talked about the different tabs for 'conversation', 'commits', and 'files changed'.  
'Conversation' is where you and your colleagues can collaborate on your changes.  
This view includes comments as well as notes of when changes happen.  
'Commits' shows a history of what commits were added - this is why your commit messages matter - they tell a story.   
'Files changed' will let you see the actual code in several different formats. 
You also can make line level comments from this view.  
8. Edit on GitHub  
How to edit a file on GitHub  
To edit a pull request file, you use the files changed view and click the edit icon.  
Once you've made changes, create a new commit on the bottom of the page.  
Make sure you commit to the correct branch  
9. Merging Pull Requests  
Pull requests  
During class, please do not close or merge any pull requests other than your own.  
On your own pull request, if all is green and there are no conflicts, go ahead and merge your branch.  
After merging a branch, it's part of the master branch and good practice is to delete it.  
This is a major difference bet  
