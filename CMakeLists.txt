cmake_minimum_required(VERSION 3.16)

project(Test VERSION 0.1 LANGUAGES CXX)

# 자동으로 UI, MOC 및 RCC를 활성화합니다.
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Qt6 라이브러리 찾기
find_package(Qt6 REQUIRED COMPONENTS Core Gui Widgets Network)

# 소스 파일 설정
set(PROJECT_SOURCES
    main.cpp
    ChatWindow.cpp
    ChatWindow.h
    ChatWindow.ui
    ChatServer.cpp
    ChatServer.h
    ChatClient.cpp
    ChatClient.h
)

# 타겟 생성 및 Qt 버전에 따른 설정
if (QT_VERSION_MAJOR EQUAL 6)
    qt_add_executable(Test
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )
else()
    add_executable(Test
        ${PROJECT_SOURCES}
    )
endif()

# Qt 라이브러리 연결
target_link_libraries(Test PRIVATE Qt6::Core Qt6::Gui Qt6::Widgets Qt6::Network)

# 타겟 설정 (macOS 및 iOS용 옵션 포함)
set_target_properties(Test PROPERTIES
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

# 설치 경로 설정
include(GNUInstallDirs)
install(TARGETS Test
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

# Qt6에서 최종화
if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(Test)
endif()
