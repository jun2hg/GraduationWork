// Fill out your copyright notice in the Description page of Project Settings.


#include "BPFL_SaveFile.h"

bool UBPFL_SaveFile::SaveTextToFile(const FString& Text, const FString& FileName)
{

    FString FilePath = FPaths::ProjectDir() + FileName;
    return FFileHelper::SaveStringToFile(Text, *FilePath);

}