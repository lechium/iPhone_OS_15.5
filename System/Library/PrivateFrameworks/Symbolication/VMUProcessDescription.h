//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;

@interface VMUProcessDescription : NSObject
{
    unsigned int _task;	// 8 = 0x8
    int _pid;	// 12 = 0xc
    _Bool _taskIsCorpse;	// 16 = 0x10
    NSString *_hardwareModel;	// 24 = 0x18
    NSString *_processName;	// 32 = 0x20
    _Bool _processNameNeedsCorrection;	// 40 = 0x28
    NSString *_executablePath;	// 48 = 0x30
    struct _CSTypeRef _symbolicator;	// 56 = 0x38
    _Bool _executablePathNeedsCorrection;	// 72 = 0x48
    unsigned long long _executableLoadAddress;	// 80 = 0x50
    int _cpuType;	// 88 = 0x58
    unsigned int _platform;	// 92 = 0x5c
    _Bool _is64Bit;	// 96 = 0x60
    struct timeval _proc_starttime;	// 104 = 0x68
    unsigned long long _physicalFootprint;	// 120 = 0x78
    unsigned long long _physicalFootprintPeak;	// 128 = 0x80
    NSDictionary *_lsApplicationInformation;	// 136 = 0x88
    NSMutableArray *_binaryImages;	// 144 = 0x90
    NSArray *_sortedBinaryImages;	// 152 = 0x98
    NSDictionary *_binaryImageHints;	// 160 = 0xa0
    NSArray *_unreadableBinaryImagePaths;	// 168 = 0xa8
    _Bool _binaryImagePostProcessingComplete;	// 176 = 0xb0
    NSDictionary *_buildVersionDictionary;	// 184 = 0xb8
    NSDictionary *_osVersionDictionary;	// 192 = 0xc0
    struct mapped_memory_t *_mappedMemory;	// 200 = 0xc8
    NSString *_parentProcessName;	// 208 = 0xd0
    NSString *_parentExecutablePath;	// 216 = 0xd8
    int _ppid;	// 224 = 0xe0
    NSDate *_date;	// 232 = 0xe8
    NSMutableDictionary *_environment;	// 240 = 0xf0
}

+ (struct _CSTypeRef)symbolicatorFromBinaryImagesDescription:(id)arg1 withArchitecture:(struct _CSArchitecture)arg2;	// IMP=0x0000000000020789
+ (struct _CSTypeRef)symbolicatorFromBinaryImagesDescription:(id)arg1;	// IMP=0x0000000000020735
+ (id)parseBinaryImagesDescription:(id)arg1;	// IMP=0x00000000000204ea
- (void).cxx_destruct;	// IMP=0x0000000000025c6f
@property(readonly, nonatomic) unsigned long long physicalFootprintPeak; // @synthesize physicalFootprintPeak=_physicalFootprintPeak;
@property(readonly, nonatomic) unsigned long long physicalFootprint; // @synthesize physicalFootprint=_physicalFootprint;
- (void)dealloc;	// IMP=0x0000000000025b90
- (id)description;	// IMP=0x0000000000025a27
- (void)cleansePathsIncludingBinaryImageList:(_Bool)arg1;	// IMP=0x0000000000025a21
- (id)processStatisticsDescription;	// IMP=0x0000000000025932
- (id)analysisToolDescription;	// IMP=0x000000000002569a
- (id)dateAndVersionDescription;	// IMP=0x0000000000025556
- (id)processDescriptionHeader;	// IMP=0x00000000000250c5
- (id)_systemVersionDescription;	// IMP=0x0000000000024fbd
- (id)_osVersionDictionary;	// IMP=0x0000000000024f01
- (id)_buildInfoDescription;	// IMP=0x0000000000024d81
- (id)_buildVersionDictionary;	// IMP=0x0000000000024d70
- (id)binaryImagesDescription;	// IMP=0x0000000000024d2d
- (id)binaryImagesDescriptionForBacktraces:(id)arg1;	// IMP=0x0000000000024c71
- (id)_rangesOfBinaryImages:(id)arg1 forBacktraces:(id)arg2;	// IMP=0x0000000000024718
- (id)_binaryImagesDescriptionForRanges:(id)arg1;	// IMP=0x0000000000023feb
- (id)_cpuTypeDescription;	// IMP=0x0000000000023ee5
- (id)valueForEnvVar:(id)arg1;	// IMP=0x0000000000023b87
- (id)binaryImageDictionaryForAddress:(unsigned long long)arg1;	// IMP=0x0000000000023a16
- (id)binaryImages;	// IMP=0x0000000000023186
- (id)_bundleLock;	// IMP=0x0000000000023131
- (_Bool)isAppleApplication;	// IMP=0x0000000000023098
- (id)bundleIdentifier;	// IMP=0x0000000000023075
- (id)executablePath;	// IMP=0x0000000000023067
- (id)processVersion;	// IMP=0x0000000000022f06
- (id)_sanitizeVersion:(id)arg1;	// IMP=0x0000000000022e3b
- (id)processVersionDictionary;	// IMP=0x0000000000022a7e
- (id)parentProcessPath;	// IMP=0x0000000000022a6d
- (id)parentProcessName;	// IMP=0x0000000000022a5c
- (int)parentPid;	// IMP=0x0000000000022a50
- (id)displayName;	// IMP=0x0000000000022a3e
- (id)processIdentifier;	// IMP=0x00000000000229f5
- (id)processName;	// IMP=0x00000000000229e7
- (int)cpuType;	// IMP=0x00000000000229de
- (_Bool)is64Bit;	// IMP=0x00000000000229d5
- (int)pid;	// IMP=0x00000000000229cc
- (unsigned int)task;	// IMP=0x00000000000229c3
- (id)date;	// IMP=0x00000000000229b2
- (void)_libraryLoaded:(struct _CSTypeRef)arg1;	// IMP=0x00000000000223c3
- (id)_extractInfoPlistFromSymbolOwner:(struct _CSTypeRef)arg1 withMemory:(struct mapped_memory_t *)arg2;	// IMP=0x0000000000022175
- (id)_readDataFromMemory:(struct mapped_memory_t *)arg1 atAddress:(unsigned long long)arg2 size:(unsigned long long)arg3;	// IMP=0x00000000000220e8
- (_Bool)initFromCorpse;	// IMP=0x00000000000219b7
- (void)initFromLiveProcess;	// IMP=0x000000000002179a
- (id)initWithTask:(unsigned int)arg1 getBinariesList:(_Bool)arg2;	// IMP=0x000000000002101b
- (id)initWithPid:(int)arg1 orTask:(unsigned int)arg2;	// IMP=0x0000000000021005
- (void)clearCrashReporterInfo;	// IMP=0x00000000000204e0
- (void)setCrashReporterInfo;	// IMP=0x000000000002039b

@end
