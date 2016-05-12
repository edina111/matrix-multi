Date: May 06, 2016  
Topic: markdown styling  
From: [markdown tutorial](http://www.markdowntutorial.com)  
[mastering markdown](https://guides.github.com/features/mastering-markdown/)  
Desc: an evergroving list of md stlying I find useful  
_italic_  
*italic*  
__bold__  
**bold**  
[links](www.google.com)  
[referenced links][ref link]  
![picture](https://camo.githubusercontent.com/ef816bf9a3b2f51e4199e98b438915708da0799f/68747470733a2f2f662e636c6f75642e6769746875622e636f6d2f6173736574732f3535363236382f3430353039362f37393763636361362d613962332d313165322d386437302d3035336562323034306630342e706e67)  

![referenced picture][ref pic link]  
soft break, aka new line "  "  

hard break, aka new paragraph  

>Quotes 

```
// fencing code
if (str.startsWith("\```"))
 print(fancy fencing);
```

```c++
// fencing c++ code
if (str.startsWith("\```c++"))
cout << "c++ code, here I come" << endl;
```

or instead ` ``` ` let's try with spaces (add an empty-line before the code!):  

    // test 4 spaced indentation  
    if (str.startsWith("    "))  
        print(fancy tabbing);  


then come the unordered lists, like:
* one
* two

and ordered lists, like:  
1. one  
2. two  

and combined, like:
* one
 1. one
 2. two
* two
 * etc
 * etc

or kind of to-do-list, like:  
- [ ] it is not done 
- [x] this was an easy one -> done
- [x] list syntax is required -> done
- [ ] @edina111 _finishing_ this one, closes #1  

or tables (add empty-line before the table!): 

To-Do | In-Progress | Done  
------|------------|------  
Read More | Apply them constantly | done, what's is that?  
Learn More | Apply them cautiously | done, really what's is that?  

[ref link]: www.github.com  
[ref pic link]: https://camo.githubusercontent.com/ef816bf9a3b2f51e4199e98b438915708da0799f/68747470733a2f2f662e636c6f75642e6769746875622e636f6d2f6173736574732f3535363236382f3430353039362f37393763636361362d613962332d313165322d386437302d3035336562323034306630342e706e67

