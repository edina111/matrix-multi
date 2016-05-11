date: May 11 2016  
from: [udemy GIT BASH course](https://www.udemy.com/git-bash/learn/v4/overview)  

#### Intro   
- why back to command line-ing  
- install git for windows, notepad++  
- setup environment vars  
- shell can be grafical like WinOS or text only as a command interpreter or command prompt  

#### BASH and Commands  
- **~**  represents the HOME directory  
- **pwd**  present working drirectory  
- **ls**  list current directory  
- **ls -l**  list with details  
- **cd**  change directory  
 - cd _foldername_  goes to the specified folder  
 - cd ~  goes back to HOME dir  
 - cd  similar, goes back to HOME  

- **which _cmd_**  locates where cmd is installed, returns empty if not found aka not installed  

- **echo** prints on the screen  
 - echo "text"  
 - echo $var or echo ${var} = variable interpolation (expansion)  
 - echo ${!var} = indirect expansion, eq if (var == PATH) echo ${!var} will print the value of the PATH variable  

- **cat _filename_**  output the content of filename directly into cmd prompt  
- **less _filename_**  opens a _less_ session to output the content of filename. Exit with _Q_  

- **touch _new-filename_**  will create a new file with filename  
- **touch _existing-filename_**  will update the _last-edited_ timestamp of the file  

- **mv _filename_ _new-filename_**  mot-a-mot move the file from one name to another  

- **rm _filename_**  delete file from the system  

