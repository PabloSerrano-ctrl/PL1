##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=PCLSerranoVidalPablo
ConfigurationName      :=Debug
WorkspaceConfiguration :=Debug
WorkspacePath          :=C:/Users/Pablo/Documents/PCLSerranoVidalPablo
ProjectPath            :=C:/Users/Pablo/Documents/PCLSerranoVidalPablo/PCLSerranoVidalPablo
IntermediateDirectory  :=../build-$(WorkspaceConfiguration)/PCLSerranoVidalPablo
OutDir                 :=$(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Pablo
Date                   :=11/3/2024
CodeLitePath           :=C:/Users/Pablo/Desktop/codelite-amd64-17.0.0/codelite
MakeDirCommand         :=mkdir
LinkerName             :=g++
SharedObjectLinkerName :=g++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.o.i
DebugSwitch            :=-gstab
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputDirectory        :=C:/Users/Pablo/Documents/PCLSerranoVidalPablo/build-$(WorkspaceConfiguration)/bin
OutputFile             :=..\build-$(WorkspaceConfiguration)\bin\$(ProjectName).exe
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E 
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
RcCmpOptions           := 
RcCompilerName         :=windres
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overridden using an environment variable
##
AR       := ar rcus
CXX      := g++
CC       := gcc
CXXFLAGS :=  -gdwarf-2 -O0 -Wall $(Preprocessors)
CFLAGS   :=  -gdwarf-2 -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := as


##
## User defined environment variables
##
CodeLiteDir:=C:\Users\Pablo\Desktop\codelite-amd64-17.0.0\codelite
Objects0=$(IntermediateDirectory)/src_Header Files_Arbol.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_Header Files_Cola.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_Header Files_Lista.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_Header Files_NodoArbol.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_Header Files_NodoCola.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_Proceso.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_Header Files_Gestor.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_Pila.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_Header Files_NodoLista.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_NodoPila.cpp$(ObjectSuffix) \
	$(IntermediateDirectory)/main.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@if not exist "$(IntermediateDirectory)" $(MakeDirCommand) "$(IntermediateDirectory)"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "$(IntermediateDirectory)" $(MakeDirCommand) "$(IntermediateDirectory)"
	@if not exist "$(OutputDirectory)" $(MakeDirCommand) "$(OutputDirectory)"

$(IntermediateDirectory)/.d:
	@if not exist "$(IntermediateDirectory)" $(MakeDirCommand) "$(IntermediateDirectory)"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/src_Header Files_Arbol.cpp$(ObjectSuffix): src/Header Files/Arbol.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Pablo/Documents/PCLSerranoVidalPablo/PCLSerranoVidalPablo/src/Header Files/Arbol.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_Header Files_Arbol.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_Header Files_Arbol.cpp$(PreprocessSuffix): src/Header Files/Arbol.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_Header Files_Arbol.cpp$(PreprocessSuffix) "src/Header Files/Arbol.cpp"

$(IntermediateDirectory)/src_Header Files_Cola.cpp$(ObjectSuffix): src/Header Files/Cola.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Pablo/Documents/PCLSerranoVidalPablo/PCLSerranoVidalPablo/src/Header Files/Cola.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_Header Files_Cola.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_Header Files_Cola.cpp$(PreprocessSuffix): src/Header Files/Cola.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_Header Files_Cola.cpp$(PreprocessSuffix) "src/Header Files/Cola.cpp"

$(IntermediateDirectory)/src_Header Files_Lista.cpp$(ObjectSuffix): src/Header Files/Lista.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Pablo/Documents/PCLSerranoVidalPablo/PCLSerranoVidalPablo/src/Header Files/Lista.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_Header Files_Lista.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_Header Files_Lista.cpp$(PreprocessSuffix): src/Header Files/Lista.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_Header Files_Lista.cpp$(PreprocessSuffix) "src/Header Files/Lista.cpp"

$(IntermediateDirectory)/src_Header Files_NodoArbol.cpp$(ObjectSuffix): src/Header Files/NodoArbol.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Pablo/Documents/PCLSerranoVidalPablo/PCLSerranoVidalPablo/src/Header Files/NodoArbol.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_Header Files_NodoArbol.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_Header Files_NodoArbol.cpp$(PreprocessSuffix): src/Header Files/NodoArbol.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_Header Files_NodoArbol.cpp$(PreprocessSuffix) "src/Header Files/NodoArbol.cpp"

$(IntermediateDirectory)/src_Header Files_NodoCola.cpp$(ObjectSuffix): src/Header Files/NodoCola.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Pablo/Documents/PCLSerranoVidalPablo/PCLSerranoVidalPablo/src/Header Files/NodoCola.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_Header Files_NodoCola.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_Header Files_NodoCola.cpp$(PreprocessSuffix): src/Header Files/NodoCola.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_Header Files_NodoCola.cpp$(PreprocessSuffix) "src/Header Files/NodoCola.cpp"

$(IntermediateDirectory)/src_Proceso.cpp$(ObjectSuffix): src/Proceso.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Pablo/Documents/PCLSerranoVidalPablo/PCLSerranoVidalPablo/src/Proceso.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_Proceso.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_Proceso.cpp$(PreprocessSuffix): src/Proceso.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_Proceso.cpp$(PreprocessSuffix) src/Proceso.cpp

$(IntermediateDirectory)/src_Header Files_Gestor.cpp$(ObjectSuffix): src/Header Files/Gestor.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Pablo/Documents/PCLSerranoVidalPablo/PCLSerranoVidalPablo/src/Header Files/Gestor.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_Header Files_Gestor.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_Header Files_Gestor.cpp$(PreprocessSuffix): src/Header Files/Gestor.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_Header Files_Gestor.cpp$(PreprocessSuffix) "src/Header Files/Gestor.cpp"

$(IntermediateDirectory)/src_Pila.cpp$(ObjectSuffix): src/Pila.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Pablo/Documents/PCLSerranoVidalPablo/PCLSerranoVidalPablo/src/Pila.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_Pila.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_Pila.cpp$(PreprocessSuffix): src/Pila.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_Pila.cpp$(PreprocessSuffix) src/Pila.cpp

$(IntermediateDirectory)/src_Header Files_NodoLista.cpp$(ObjectSuffix): src/Header Files/NodoLista.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Pablo/Documents/PCLSerranoVidalPablo/PCLSerranoVidalPablo/src/Header Files/NodoLista.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_Header Files_NodoLista.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_Header Files_NodoLista.cpp$(PreprocessSuffix): src/Header Files/NodoLista.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_Header Files_NodoLista.cpp$(PreprocessSuffix) "src/Header Files/NodoLista.cpp"

$(IntermediateDirectory)/src_NodoPila.cpp$(ObjectSuffix): src/NodoPila.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Pablo/Documents/PCLSerranoVidalPablo/PCLSerranoVidalPablo/src/NodoPila.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_NodoPila.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_NodoPila.cpp$(PreprocessSuffix): src/NodoPila.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_NodoPila.cpp$(PreprocessSuffix) src/NodoPila.cpp

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Pablo/Documents/PCLSerranoVidalPablo/PCLSerranoVidalPablo/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


