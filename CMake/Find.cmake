Include (${CMAKE_ROOT}/Modules/CheckIncludeFileCXX.cmake)

Macro (FIND_CXX_HEADER header)
	String (TOUPPER ${header} header_u)
	Check_Include_File_Cxx (${header} HAVE_${header_u})
	If (NOT HAVE_${header_u})
		Check_Include_File_Cxx(${header}.h HAVE_${header_u}_H)
	EndIf ()
EndMacro(FIND_CXX_HEADER)

Macro (FIND_BOOL)
	Try_Compile (
		BOOL_EXISTS
		${CMAKE_CURRENT_BINARY_DIR}/CMakeTmp/Bool ${GENERIC_CMAKE_SRC}/TestBool.cxx
		OUTPUT_VARIABLE OUTPUT
		)
EndMacro (FIND_BOOL)
