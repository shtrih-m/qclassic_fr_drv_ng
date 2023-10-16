# Получает из гита данные о версии и прописывает их в свойства таргета
# ${PROJECT_NAME}
#
# Аргументы: - isDetails - разбивать версию на составляющие
# MAJOR.MINOR.RELEASE.BUILD - winRC - устанавливать дефайны
# COMMA_VERSION/FULL_VERSION для сборки виндовых ресурсов
function(bump_version moduleName isDetails winRC)
  exec_program(
    "git" ${CMAKE_CURRENT_SOURCE_DIR}
    ARGS "describe --always --tags"
    OUTPUT_VARIABLE GIT_VERSION_RAW)
  exec_program(
    "git" ${CMAKE_CURRENT_SOURCE_DIR}
    ARGS "rev-list --count HEAD"
    OUTPUT_VARIABLE GIT_COMMITS)
  string(REGEX REPLACE "-[0-9]+-g[a-f0-9]+$" "" GIT_VERSION ${GIT_VERSION_RAW})
  set(APPLICATION_VERSION "${GIT_VERSION}.${GIT_COMMITS}")
  message("${moduleName} ${APPLICATION_VERSION}")
  string(TIMESTAMP __MY_TIMESTAMP__)
  if(moduleName STREQUAL "CPPBASE")
    set(prefix "")
  else()
    set(prefix "${moduleName}_")
  endif()
  target_compile_definitions(
    ${PROJECT_NAME}
    PRIVATE -DAPPLICATION_VERSION="${APPLICATION_VERSION}"
            -D__${prefix}FR_DRV_NG_BUILD_TIMESTAMP__="${__MY_TIMESTAMP__}")
  if(${isDetails})
    string(REPLACE "." ";" VERSION_LIST "${APPLICATION_VERSION}")
    list(GET VERSION_LIST 0 APPLICATION_VERSION_MAJOR)
    list(GET VERSION_LIST 1 APPLICATION_VERSION_MINOR)
    list(GET VERSION_LIST 2 APPLICATION_VERSION_RELEASE)
    list(GET VERSION_LIST 3 APPLICATION_VERSION_BUILD)
    target_compile_definitions(
      ${PROJECT_NAME}
      PRIVATE -DAPPLICATION_VERSION_MAJOR=${APPLICATION_VERSION_MAJOR}
              -DAPPLICATION_VERSION_MINOR=${APPLICATION_VERSION_MINOR}
              -DAPPLICATION_VERSION_RELEASE=${APPLICATION_VERSION_RELEASE}
              -DAPPLICATION_VERSION_BUILD=${APPLICATION_VERSION_BUILD})
    set_target_properties(
      ${PROJECT_NAME}
      PROPERTIES VERSION
                 "${APPLICATION_VERSION_MAJOR}.${APPLICATION_VERSION_MINOR}"
                 SOVERSION
                 "${APPLICATION_VERSION_MAJOR}.${APPLICATION_VERSION_MINOR}")
  else()
    set_target_properties(
      ${PROJECT_NAME} PROPERTIES VERSION "${APPLICATION_VERSION}"
                                 SOVERSION "${APPLICATION_VERSION}")
  endif()
  if(${winRC})
    string(REPLACE "." "," COMMA_VERSION ${APPLICATION_VERSION})
    target_compile_definitions(
      ${PROJECT_NAME} PRIVATE -DFULL_VERSION="${GIT_VERSION_RAW}"
                              -DCOMMA_VERSION=${COMMA_VERSION})
  endif()
endfunction()

# Проверяет возможность включить Link Time Optimization и активирует если
# доступно для релизного билдa
#
# Аргументы: - projectName - проект
function(lto_enable_for_release projectName)
  if(DEFINED DO_FORCE_LTO_STATE)
    set_property(TARGET ${projectName} PROPERTY INTERPROCEDURAL_OPTIMIZATION
                                                ${DO_FORCE_LTO_STATE})
  elseif(NOT WIN32)
    if(CMAKE_BUILD_TYPE STREQUAL "Release")
      include(CheckIPOSupported)
      check_ipo_supported(RESULT LTO_supported OUTPUT LTO_error)
      if(LTO_supported)
        message(STATUS "IPO / LTO enabled for ${projectName}")
        set_property(TARGET ${projectName} PROPERTY INTERPROCEDURAL_OPTIMIZATION
                                                    TRUE)
      else()
        message(STATUS "IPO / LTO not supported: <${LTO_error}>")
      endif() # LTO_supported
    endif() # is Release
  endif() # NOT WIN32
endfunction()
