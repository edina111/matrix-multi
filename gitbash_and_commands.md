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

- **mv _filename_ _new-filename_**  moves the file from one name to another, for sure also from one place to another  

- **rm _name_**  delete file or folder from the system  

- **mkdir _dirname_**  creates a folder with the name specified  
- **rmdir _dirname_**  deletes the specified folder, if folder is empty  
 - **rm -rf _dirname_**  use cautiously to delete recursively and forced the folder and its content  
 
- **clear**  to make the screen clear and shiny  
- **exit** to close the cmd prompt  

- **_cmd_ >> _filename_**  writes or appends the output of the command into the file specified  
- **_cmd_ >  _filename_**  overwrites the file with the output of the cmd  

- **write and run a basic shell script using bash**:  
>\#!/usr/bin/bash    - the first line contains the place where bash is located   
> echo "this is a basic bash script"  - then come the bash commands  

- **chmod +_x_ _filename_**  allows the file to be exacutable  
- **./filename.sh**  executes the file from where it is specified, **./** means execute from _here_  

- **.bashrc** edit this file to customize your bash environment  
 - **alias npp=notepad++**  add shortcuts for opening the editor, etc.  
- **source _filename_**  reloads the filechanges in the current terminal session  
