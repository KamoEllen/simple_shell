
# 🚀 Project Description
## 0x16. C - Simple Shell
	- Crafting a straightforward UNIX command interpreter.

# 📝 Requirements
## General 🧐
	- ✅ **Allowed Editors:** vi, vim, emacs
	- 🖥️ **Compilation:** All your files will be compiled on Ubuntu 20.04 LTS using gcc, with these options: -Wall -Werror -Wextra -pedantic -std=gnu89
	- ➰ **File Ending:** Every file should gracefully conclude with a new line
	- 📄 **README.md File:** A README.md file, residing at the root of the project folder, is a must.
	- 📝 **Code Style:** Your code should adhere to the Betty style guidelines. It will be meticulously examined using betty-style.pl and betty-doc.pl
	- 🚫 **Memory Leaks:** Your shell must be memory-leak free.
	- 🔢 **Function Limit:** You should restrict your code to no more than 5 functions per file.
	- 📚 **Header Files:** All your header files must be properly include guarded.
	- 💻 **System Calls:** Use system calls exclusively when necessary.
	- 📖 **README:** Write a comprehensive README with an in-depth project description.
	- 👥 **AUTHORS File:** Maintain an AUTHORS file at the root of your repository, documenting all contributors to the project.

# 💡 Output Examples
- 🚨 **Error with sh:**
```bash 
$ echo "qwerty" | /bin/sh
/bin/sh: 1: qwerty: not found
$ echo "qwerty" | /bin/../bin/sh
/bin/../bin/sh: 1: qwerty: not found
$
```
🛑 **Same Error with hsh:**
```bash
$ echo "qwerty" | ./hsh
./hsh: 1: qwerty: not found
$ echo "qwerty" | ./././hsh
./././hsh: 1: qwerty: not found
$
```

# 🚀 Compilation
Your shell will be compiled as follows:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
```

# 🧪 Testing
Your shell should function in the following ways:

**Interactive mode:**
```bash
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
```

**Non-Interactive mode:**
```bash
$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
$
$ cat test_ls_2
/bin/ls
/bin/ls
$
$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
$
```

🔥🚀📚 **Best of luck with your project!**
