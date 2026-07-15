# turtle-openVITA

> Turtle AI 开源版 VITA 桌面 AI 助手框架

## 项目介绍

`turtle-openVITA` 是针对 AI 鼠标生态设计的开源 AI 控制中心。

目标：实现类似 VITA 的能力，同时增加开放模型、本地模型、插件和自动化能力。

架构：

```
AI鼠标 / 键盘 / 快捷键
          |
          v
    输入管理层
          |
          v
   turtle-openVITA Core
          |
  +-------+--------+
  |       |        |
 AI模型  MCP    Plugin
  |       |        |
云端LLM 本地工具 扩展能力
```

## 功能路线

### AI能力

- 全局AI对话
- 多模型自动切换
- OpenAI Compatible API
- Ollama本地模型
- AI代码解释
- AI总结
- AI搜索
- AI翻译

### 系统能力

- AI鼠标按键
- 全局快捷键
- AI剪贴板
- AI截图
- OCR识别
- 语音输入

### 自动化能力

- HTTP API
- WebSocket API
- MCP支持
- 插件SDK

### 办公能力

- AI生成Word
- AI生成PPT

## 支持模型

计划支持：

- OpenAI
- DeepSeek
- 通义千问
- 智谱GLM
- Kimi
- OpenRouter
- Ollama

统一接口设计：

```
AIProvider
    |
    +-- OpenAI
    +-- DeepSeek
    +-- Qwen
    +-- Ollama
```

## 编译环境

目标：

- Dev-C++ 5.11
- MinGW
- Visual Studio 2019 MSVC142

基础代码采用 C++11。

## 开发状态

当前版本：V0.1 Alpha

已完成：

- 项目初始化
- 架构设计
- README文档

开发中：

- AI核心
- Ollama接口
- 模型路由
- 输入系统

## 目录规划

```
src/
 ├── ai/
 ├── input/
 ├── mcp/
 ├── plugin/
 ├── api/
 └── core/
```

## 未来目标

打造一个完全开放的 AI 鼠标操作系统：

```
鼠标
 ↓
AI
 ↓
工具
 ↓
自动化
 ↓
插件生态
```

## License

待定。
