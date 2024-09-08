# C Tester Diaries

Hi, my name's Manuel and I have two goals:
- Become a pro at C/C++ Automated Testing
- Find my first job as a C++ developer

Why?
- I want a job where I can do what I'm best at
- I have a personal project that's been requiring a lot of testing and I'd like to do it faster

So, I made this repo/blog. Here I'll share my journey with you. You'll see me try real-life public C/C++ projects and test them to find errors as I learn more and more sophisticated testing techniques, and I won't hide when I make mistakes! You'll rather see how I overcome them and how you can do so too 

# Blog Structure

C Tester Diaries is split into chapters. Every chapter is a commit. All source code, MakeFiles and more will live in the `src` directory. The folders inside may vary depending on the chapter's requirements, as I'll be testing projects with different structures, but there will always be a `tests` folder where my `.cpp` will live, and a main `CMakeLists.txt` file
    
    src
    ├── tests
    │   ├── mytest.cpp
    ├── CMakeLists.txt
        

# Navigate the blog

If I had made this blog as a website, you'd probably go through it skimming over some chapters and then forget about it (that's what I would've done, tbh) But I want to make you put hands-on into this, so my project really leaves you with some experience, so:
- clone the repo
- run `git log --oneline`
- run `git switch <commit-to-visit>`
- and run `git show <commit-to-visit>` to read the chapter's explanation

Then you'll be half-way to try the tests yourself and make your own experiments without worrying about intalling dependencies

# Contributing?

Although this is not a software product, you can send your PRs if you want to add more information or even fix typos for your first contribution. I'll read your feature requests on the issues tab, too. 