*This project has been created as part of the 42 curriculum by [Makino Anju].*

---

# Libft (English)

## Description
**Libft** is the foundational project of the 42 curriculum. The objective is to create a personal C library by re-implementing standard library functions and adding custom utilities. This library serves as a versatile toolkit that will be utilized in all subsequent C projects within the program.

Through this project, I gained a deep understanding of memory management, pointer manipulation, and build automation using Makefiles.

## Instructions
* `make`: Compiles mandatory functions.
* `make bonus`: Compiles both mandatory and linked list functions.
* `make clean` / `fclean` / `re`: Standard cleaning and re-compilation rules.

## AI Usage Disclosure
This project utilized **Google Gemini** for conceptual clarification (especially pointer-to-pointer logic), bug analysis of test results, and Makefile optimization.

---

# Libft (日本語)

## 概要 (Description)
**Libft** は、42のカリキュラムにおける最初のプロジェクトです。標準Cライブラリ関数の再実装や、便利なユーティリティ関数の作成を通じて、自分専用のCライブラリを構築します。このライブラリは、今後のすべてのCプロジェクトで使用する基礎的なツールキットとなります。

このプロジェクトを通じて、メモリ管理（malloc/free）、ポインタ操作、およびMakefileによるビルド自動化について深い理解を得ることができました。

## 使用方法 (Instructions)
* `make`: 必須課題の関数をコンパイルし、`libft.a` を作成します。
* `make bonus`: 必須課題に加えて、連結リストのボーナス関数をコンパイルします。
* `make clean` / `fclean` / `re`: オブジェクトファイルやライブラリの削除、および再コンパイルを行います。

## リソースとAIの利用 (Resources & AI Usage)
* [42Docs - Libft](https://harm-smits.github.io/42docs/libs/libft.html)
* **AIの使用について**: 本プロジェクトでは、概念の理解（特に連結リストにおける「ポインタのポインタ」の挙動）、テスターのエラーログ解析、およびMakefileのルール設定（bonusや.PHONY）の支援に **Google Gemini** を使用しました。

---

## Detailed Library Description / 図書館の詳細

### 1. Libc Functions
`ft_strlen`, `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_strlcpy`, `ft_strlcat`, `ft_toupper`, `ft_tolower`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_memchr`, `ft_memcmp`, `ft_strnstr`, `ft_atoi`, `ft_calloc`, `ft_strdup`.

### 2. Additional Functions
`ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`, `ft_strmapi`, `ft_striteri`, `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`.

### 3. Bonus Functions (Linked Lists)
`ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`.
