<p align="left">
<a href="https://github.com/virajdesai0309/OpenPLC_Tutorials"><img src="https://img.shields.io/static/v1?logo=github&label=Originator&message=virajdesai0309&color=ff3300" alt="Last Commit"/></a>
<a href="https://github.com/virajdesai0309/OpenPLC_Tutorials/stargazers"><img src="https://img.shields.io/github/stars/virajdesai0309/OpenPLC_Tutorials.svg?colorB=1a53ff" alt="Stars Badge"/></a>
<a href="https://github.com/virajdesai0309/OpenPLC_Tutorials/network/members"><img src="https://img.shields.io/github/forks/virajdesai0309/OpenPLC_Tutorials" alt="Forks Badge"/></a>
<img src="https://img.shields.io/github/repo-size/virajdesai0309/OpenPLC_Tutorials.svg?colorB=CC66FF&style=flat" alt="Size"/>
<img src="https://img.shields.io/github/languages/top/virajdesai0309/OpenPLC_Tutorials.svg?colorB=996600&style=flat" alt="Language"/></a>

[**`OpenPLC`**](https://autonomylogic.com/) is an open-source Programmable Logic Controller (PLC) platform that enables users to implement industrial automation solutions with flexibility and affordability. This repository serves as a comprehensive guide to getting started with OpenPLC, offering step-by-step tutorials, code samples, and resources to help you harness the power of PLCs for your projects.

Whether you're a beginner looking to learn the basics of PLC programming or an experienced engineer seeking advanced techniques and best practices, you'll find something valuable here. From installation instructions to hands-on exercises, we cover everything you need to know to leverage OpenPLC effectively.

Key features of this repository include:

-   **Installation Guides**: Detailed instructions for setting up OpenPLC on various platforms, including Windows, Linux, and macOS.
-   **Programming Tutorials**: Beginner-friendly tutorials to introduce you to ladder logic programming and guide you through creating your first PLC applications.
-   **Advanced Topics**: Dive deeper into topics like function block diagrams (FBD), structured text (ST), and integrating OpenPLC with other automation systems.
-   **Sample Projects**: Explore practical examples and real-world applications of OpenPLC in action, from simple automation tasks to complex control systems.
-   **Community Resources**: Links to forums, documentation, and additional learning materials to further expand your knowledge and connect with other OpenPLC enthusiasts.

Whether you're a hobbyist, student, educator, or industry professional, join us on the journey to mastering OpenPLC and revolutionizing industrial automation.

Get started today and unleash the potential of open-source PLC programming with OpenPLC Tutorials!
---
OpenPLC is an open-source **[Programmable Logic Controller](https://en.wikipedia.org/wiki/Programmable_logic_controller)** that is based on an easy to use software. It is the first fully functional standardized open source PLC, both in software and in hardware. The OpenPLC project was created in accordance with the IEC 61131-3 standard, which defines the basic software architecture and programming languages for PLCs.

OpenPLC is mainly used on industrial and home automation, internet of things and SCADA research. You can check OpenPLC in action on the short video below:

The OpenPLC Project consists of two parts: Runtime and Editor. The Runtime is a portable software designed to run from the smallest of all microcontrollers (Arduino-compatible) to powerful servers in the cloud. It is responsible for executing the PLC programs you create using the Editor. Currently, OpenPLC Runtime is officially supported on the following platforms:

- Arduino Uno / Nano / Leonardo / Micro
- Arduino Mega / Due
- Arduino Nano Every / IoT / BLE
- Arduino RB2040 Connect
- Arduino Mkr / Zero / WiFi
- Arduino Pro (Machine Control and EDGE)
- Controllino Maxi / Automation / Mega / Mini
- Productivity Open P1AM
- ESP8266 (nodemcu)
- ESP32
- Raspberry Pi 2 / 3 / 4
- PiXtend
- UniPi Industrial Platform
- Neuron PLC
- FreeWave Zumlink
- FreeWave ZumIQ
- Windows (generic target as a soft-PLC)
- Linux (generic target as a soft-PLC)

The OpenPLC Editor is the software that runs on your computer and, as mentioned, is used to create your PLC programs. It is very simple to use and supports all five languages defined in the IEC 61131-3 standard: Ladder Logic (LD), Function Block Diagram (FBD), Instruction List (IL), Structured Text (ST), and Sequential Function Chart (SFC).

# Download for Windows, Mac and Linux

[OpenPLC](https://autonomylogic.com/)

## For Linux Users

### ✅ Resolution: Install the OpenPLC Editor

You can install it using one of the following methods. The first is the most straightforward.

#### 🐧 Method 1: AppImage (Easiest & Recommended)
1.  Open your web browser and go to the [OpenPLC Editor Download Page](https://autonomylogic.com/download/).
2.  Look for the **Linux** download option for the latest version (e.g., v4.1.4). You will likely download a file named something like `openplc-editor-4.1.4.AppImage`.
3.  Once downloaded, open a terminal and navigate to your `Downloads` folder:
    ```bash
    cd ~/Downloads
    ```
4.  Make the AppImage file executable:
    ```bash
    chmod +x openplc-editor-*.AppImage
    ```
5.  Run the Editor:
    ```bash
    ./openplc-editor-*.AppImage
    ```
This package is self-contained and shouldn't have dependency issues. For more build options, you can also check the project's main repository on [GitHub](https://github.com/Autonomy-Logic/openplc-editor).

#### 💻 Method 2: Install from Source (using the terminal)
If you prefer to build it from source, follow these steps. **Make sure you have Python 3.9 installed first**, as it is a requirement.
1.  **Install Python 3.9 (if not already installed):**
    ```bash
    sudo add-apt-repository ppa:deadsnakes/ppa -y
    sudo apt update
    sudo apt install python3.9 python3.9-venv python3.9-dev -y
    ```
2.  **Clone the Editor repository** (note this is a different URL from the Runtime):
    ```bash
    git clone https://github.com/thiagoralves/OpenPLC_Editor.git
    ```
3.  **Navigate into the new directory and run the install script:**
    ```bash
    cd OpenPLC_Editor
    ./install.sh
    ```
    The script will automatically handle the installation of dependencies and create a virtual environment for the Editor.

#### 🐍 Method 3: Install via pip (Python Package Manager)
This method is also quick and easy, as the OpenPLC Editor is available on the Python Package Index (PyPI).
1.  Open a terminal and run:
    ```bash
    pip install openplc-editor
    ```
2.  After the installation completes, you can launch the Editor with:
    ```bash
    openplc-editor.py
    ```

### 🚀 Launching the Editor

Once installed via any of the above methods, you should be able to launch the OpenPLC Editor either:
*   By searching for "OpenPLC Editor" in your Linux Mint application menu.
*   By running the `openplc_editor.sh` script from the `OpenPLC_Editor` directory if you installed from source (the script that was previously missing in the `OpenPLC_v3` folder).
*   By executing the `openplc-editor.py` command if installed via `pip`.

## Frequently asked questions ❔

### How can I thank you for writing and sharing this tutorial?

You can <img src="https://img.shields.io/static/v1?label=%E2%AD%90 Star &message=if%20useful&style=style=flat&color=blue" alt="Star Badge"/> and <img src="https://img.shields.io/static/v1?label=%E2%B5%96 Fork &message=if%20useful&style=style=flat&color=blue" alt="Fork Badge"/> Starring and Forking is free for you, but it tells me and other people that it was helpful and you like this tutorial.

Go [**`here`**](https://github.com/virajdesai0309/OpenPLC_Tutorials) if you aren't here already and click ➞ **`✰ Star`** and **`ⵖ Fork`** button in the top right corner. You'll be asked to create a GitHub account if you don't already have one.

---

## Author

Hello All! My name is Desai Viraj and I am the writter of these training modules. If you think you can add/correct/edit and enhance this tutorial you are most welcome🙏


For contributing to this open source repository 

1. Create a Github account [![Github](https://img.shields.io/badge/Github-181717.svg?&style=flate&logo=Github&logoColor=white)](https://github.com/) and install git into your machine for seamless experience [![Git](https://img.shields.io/badge/Git-F05032.svg?&style=flate&logo=Git&logoColor=white)](https://git-scm.com/)

2. Generate a pull up request from the repository using the pull up request

3. Clone the repository into your local machine and once done you may commit and push changes

See [github's contributors page](https://github.com/virajdesai0309/OpenPLC_Tutorials/graphs/contributors) for details.

If you have trouble with this tutorial please tell me about it by [Create an issue on GitHub](https://github.com/virajdesai0309/OpenPLC_Tutorials/issues/new). and I'll make this tutorial better. This is probably the best choice if you had trouble following the tutorial, and something in it should be explained better. You will be asked to create a GitHub account if you don't already have one.

If you like this tutorial, please [give it a ⭐ star](https://github.com/virajdesai0309/OpenPLC_Tutorials).

------------

## Licence 📜

You may use this tutorial freely at your own risk. See [LICENSE](./LICENSE).
Copyright (c) 2020 Desai Viraj

------------
