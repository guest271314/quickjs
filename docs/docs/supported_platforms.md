---
sidebar_position: 8
---

# Supported Platforms

|  System | Supported versions | Notes |
|---|---|---|
| GNU/Linux | * | glibc and musl are supported |
| macOS | macOS >= 11 | Currently supported macOS releases |
| Windows | >= Windows 7* | VS >= 2022 and Clang are supported; requires `<stdatomic.h>` |
| FreeBSD | * | Limited testing |
| OpenBSD | * | Limited testing |
| NetBSD | * | Limited testing |
| Android | NDK >= 26.0.10792818 | Limited testing |
| iOS | * | Limited testing |
| MinGW | MinGW-w64 | |
| Other | N/A | Missing? Open a PR! |

- `*`: Windows 7 is EOL and only supported in this project as long as it doesn't interfere with its progress.
