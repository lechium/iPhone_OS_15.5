//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableString, VMUDebugTimer, VMUProcessObjectGraph, VMUTaskMemoryScanner;
@protocol VMUStackLogReader;

@interface VMULeakDetector : NSObject
{
    _Bool _showLeakedVMregions;	// 8 = 0x8
    _Bool _showOnlyVMregions;	// 9 = 0x9
    _Bool _fullStacks;	// 10 = 0xa
    _Bool _showRawClassNames;	// 11 = 0xb
    _Bool _showBinaryContents;	// 12 = 0xc
    _Bool _checkAbandoned;	// 13 = 0xd
    _Bool _suppressOutput;	// 14 = 0xe
    _Bool _showListOfLeaks;	// 15 = 0xf
    _Bool _groupByType;	// 16 = 0x10
    _Bool _referenceTreeShowRegionVirtualSize;	// 17 = 0x11
    unsigned int _objectContentLevel;	// 20 = 0x14
    unsigned long long _max_contents_bytes;	// 24 = 0x18
    VMUDebugTimer *_debugTimer;	// 32 = 0x20
    id <VMUStackLogReader> _stackLogReader;	// 40 = 0x28
    VMUProcessObjectGraph *_graph;	// 48 = 0x30
    VMUTaskMemoryScanner *_scanner;	// 56 = 0x38
    unsigned int _task;	// 64 = 0x40
    struct __sFILE *_outputFile;	// 72 = 0x48
    _Bool _fcloseOutput;	// 80 = 0x50
    NSMutableString *_outputString;	// 88 = 0x58
    unsigned int _numExcluded;	// 96 = 0x60
    void *_abandoned;	// 104 = 0x68
    void *_leakedNodes;	// 112 = 0x70
    NSMutableArray *_leakTreeRootsArray;	// 120 = 0x78
    VMUProcessObjectGraph *_leakedGraph;	// 128 = 0x80
    _Bool _showContext;	// 136 = 0x88
}

+ (id)referenceDescription:(CDStruct_3aaebc0a)arg1 dstDescription:(id)arg2 is64bit:(_Bool)arg3;	// IMP=0x0000000000019ea9
- (void).cxx_destruct;	// IMP=0x000000000001e518
@property(retain, nonatomic) VMUProcessObjectGraph *leakedGraph; // @synthesize leakedGraph=_leakedGraph;
@property(retain, nonatomic) NSMutableArray *leakTreeRootsArray; // @synthesize leakTreeRootsArray=_leakTreeRootsArray;
@property(nonatomic) void *leakedNodes; // @synthesize leakedNodes=_leakedNodes;
@property(nonatomic) void *abandoned; // @synthesize abandoned=_abandoned;
@property(readonly, nonatomic) id <VMUStackLogReader> stackLogReader; // @synthesize stackLogReader=_stackLogReader;
@property(readonly, nonatomic) VMUTaskMemoryScanner *scanner; // @synthesize scanner=_scanner;
@property(readonly, nonatomic) VMUProcessObjectGraph *graph; // @synthesize graph=_graph;
@property(readonly, nonatomic) unsigned int task; // @synthesize task=_task;
@property(nonatomic) unsigned int objectContentLevel; // @synthesize objectContentLevel=_objectContentLevel;
@property(nonatomic) _Bool fcloseOutput; // @synthesize fcloseOutput=_fcloseOutput;
@property(retain, nonatomic) NSMutableString *outputString; // @synthesize outputString=_outputString;
@property(nonatomic) struct __sFILE *outputFile; // @synthesize outputFile=_outputFile;
@property(retain, nonatomic) VMUDebugTimer *debugTimer; // @synthesize debugTimer=_debugTimer;
@property(nonatomic) _Bool referenceTreeShowRegionVirtualSize; // @synthesize referenceTreeShowRegionVirtualSize=_referenceTreeShowRegionVirtualSize;
@property(nonatomic) _Bool groupByType; // @synthesize groupByType=_groupByType;
@property(nonatomic) _Bool showListOfLeaks; // @synthesize showListOfLeaks=_showListOfLeaks;
@property(nonatomic) _Bool suppressOutput; // @synthesize suppressOutput=_suppressOutput;
@property(nonatomic) _Bool checkAbandoned; // @synthesize checkAbandoned=_checkAbandoned;
@property(nonatomic) _Bool showBinaryContents; // @synthesize showBinaryContents=_showBinaryContents;
@property(nonatomic) _Bool showRawClassNames; // @synthesize showRawClassNames=_showRawClassNames;
@property(nonatomic) _Bool fullStacks; // @synthesize fullStacks=_fullStacks;
@property(nonatomic) _Bool showOnlyVMregions; // @synthesize showOnlyVMregions=_showOnlyVMregions;
@property(nonatomic) _Bool showContext; // @synthesize showContext=_showContext;
@property(nonatomic) _Bool showLeakedVMregions; // @synthesize showLeakedVMregions=_showLeakedVMregions;
- (void)dealloc;	// IMP=0x000000000001e2dd
- (unsigned int)doNormalLeakDetectionWithError:(out id *)arg1;	// IMP=0x000000000001d70a
- (void)printLeakTree;	// IMP=0x000000000001cb99
- (void)buildLeakTree;	// IMP=0x000000000001a0e7
- (id)referenceDescription:(CDStruct_3aaebc0a)arg1 dstDescription:(id)arg2 is64bit:(_Bool)arg3;	// IMP=0x0000000000019e2c
- (id)nodeDescription:(unsigned int)arg1;	// IMP=0x0000000000019dc1
- (id)nodeDescription:(unsigned int)arg1 usingDetails:(CDStruct_599faf0f *)arg2;	// IMP=0x0000000000019d74
- (id)nodeTypeDescription:(unsigned int)arg1 details:(CDStruct_599faf0f *)arg2 mallocBySize:(_Bool)arg3;	// IMP=0x0000000000019be1
- (void)printLeak:(const char *)arg1 node:(unsigned int)arg2 details:(CDStruct_599faf0f)arg3 region:(id)arg4 stop:(_Bool *)arg5;	// IMP=0x0000000000019670
- (void)printContents:(void *)arg1 size:(unsigned long long)arg2;	// IMP=0x00000000000194e9
- (id)labelForNode:(unsigned int)arg1 details:(CDStruct_599faf0f)arg2 shortLabel:(_Bool)arg3;	// IMP=0x000000000001940e
- (id)scannerOrGraph;	// IMP=0x00000000000193f4
- (_Bool)checkTaskExistence;	// IMP=0x00000000000193ec
- (void)printout:(const char *)arg1;	// IMP=0x000000000001928d
- (id)initWithTask:(unsigned int)arg1 graph:(id)arg2 scanner:(id)arg3 stackLogReader:(id)arg4;	// IMP=0x0000000000019196

@end

