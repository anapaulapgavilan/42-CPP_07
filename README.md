# CPP_07

![42](https://img.shields.io/badge/42-School-000000?style=flat-square&logo=42&logoColor=white) ![Language](https://img.shields.io/badge/lang-C++98-blue?style=flat-square) ![Status](https://img.shields.io/badge/status-completed-success?style=flat-square)

42 School C++ module 07: templates and generic programming.

## About This Project

### What It Does

This module introduces generic programming with C++ templates instead of writing the same logic once per type.

Exercises in this module:
- ex00: template functions for swapping, finding the min, and finding the max of any two comparable values.
- ex01: a generic Array<T> container with bounds-checked element access and value-initialized storage.
- ex02: an iter() template function that applies a given function to every element of an array of any type.

### Purpose

It evaluates whether a student can write type-agnostic, reusable code with templates, and understands how the compiler generates concrete functions/classes from a generic definition.

## Stack

- School: 42
- Primary language: C++98
- Scope: one repository per project

## Skills Demonstrated

`Templates` | `Generic programming` | `Type-agnostic containers`

## Features

- Type-agnostic template functions for swap, min, and max
- Generic Array<T> container with bounds-checked access and value-initialized storage
- iter() template applying a function to every element of any array

## Review Focus

- Look for templates that remain readable and type-agnostic without unnecessary specialization.
- Review Array<T> bounds handling and copy semantics for safe generic storage.
- Notice how compile-time generic code removes repetition while preserving type safety.

## Structure

| Exercise | Path | Binary |
|---|---|---|
| ex00 | ./ex00 | whatever |
| ex01 | ./ex01 | iter |
| ex02 | ./ex02 | array |

## How to Run

Prerequisites: `make` and a C++98-capable compiler (`g++` or `clang++`).

Compile and run each exercise separately:

### ex00

~~~bash
cd ex00
make
./whatever
~~~

### ex01

~~~bash
cd ex01
make
./iter
~~~

### ex02

~~~bash
cd ex02
make
./array
~~~

## Testing

No dedicated testing scripts were detected at the project root.

## Notes

- This repository is part of the 42 portfolio.
- Commands are intended for local execution for review and evaluation.

## Author

anapaulapgavilan
