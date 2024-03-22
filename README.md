# Setting up the Development Environment for Operating Systems II

## 🎯Objective
Establish a consistent and efficient working environment to serve as the foundation for subsequent labs in Operating Systems II. In this lab, students will configure GitHub Actions for Continuous Integration/Continuous Deployment (CI/CD), utilize [unity](https://www.throwtheswitch.org/unity) as a testing framework, and employ CMake to manage project construction.

## 🔑 Steps to Follow

### 📌 CMake Configuration

1. Use CMake to manage project construction independently of the operating system.
2. Create appropriate CMakeLists.txt files for the project, defining necessary directories, libraries, and executables.
3. Configure CMake correctly to generate projects, as executable and or libraries.


### 📌 unity Integration

1. Integrate the unity testing framework into the project.
2. Configure necessary dependencies and structure the code to enable the writing and execution of unit tests.
3. Create an initial set of unit tests to ensure the proper functioning of key components.

### 📌 GitHub Actions Configuration

1. Create a GitHub Actions configuration file in the repository.
2. Include steps for compiling the code, running tests, and optionally deploying the project.
3. Configure specific workflows for pull requests.

## 〽️ Importance of the Lab

- **Consistency and Reproducibility:** Ensures a homogeneous environment, reducing errors related to individual configurations.
- **Development Efficiency:** Implementation of CI/CD with GitHub Actions automates compilation and test execution, improving development efficiency.
- **Code Quality:** Integration of unity and unit tests encourages the development of robust code and facilitates early issue detection.
- **Portability and Scalability:** Configuration with CMake ensures the project is easily portable and scalable as new components are added.

This lab establishes the groundwork for effective, collaborative, and high-quality development in subsequent projects of Operating Systems II by instilling essential practices in CI/CD, testing, and code construction.
