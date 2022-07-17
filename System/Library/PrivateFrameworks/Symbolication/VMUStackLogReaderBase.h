//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Symbolication/VMUStackLogReader-Protocol.h>

@class NSMapTable, NSMutableDictionary, NSSet, NSString, VMUVMRegionTracker;

@interface VMUStackLogReaderBase : NSObject <VMUStackLogReader>
{
    unsigned int _task;	// 8 = 0x8
    VMUVMRegionTracker *_regionTracker;	// 16 = 0x10
    NSMapTable *_addressToSymbolicationMap;	// 24 = 0x18
    NSSet *_excludedFrames;	// 32 = 0x20
    NSMutableDictionary *_binaryImagePathToIdentifierMap;	// 40 = 0x28
    _Bool _usesLiteMode;	// 48 = 0x30
    _Bool _coldestFrameIsNotThreadId;	// 49 = 0x31
    struct _CSTypeRef _symbolicator;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000019123
@property(readonly) struct _CSTypeRef symbolicator; // @synthesize symbolicator=_symbolicator;
@property(retain, nonatomic) NSSet *excludedFrames; // @synthesize excludedFrames=_excludedFrames;
@property(readonly) VMUVMRegionTracker *regionTracker; // @synthesize regionTracker=_regionTracker;
@property(readonly) _Bool coldestFrameIsNotThreadId; // @synthesize coldestFrameIsNotThreadId=_coldestFrameIsNotThreadId;
@property(readonly) _Bool usesLiteMode; // @synthesize usesLiteMode=_usesLiteMode;
@property(readonly) unsigned int task; // @synthesize task=_task;
- (int)enumerateRecords:(CDUnknownBlockType)arg1;	// IMP=0x0000000000019096
- (id)sourceFileNameAndLineNumberForPCaddress:(unsigned long long)arg1 fullPath:(_Bool)arg2;	// IMP=0x0000000000018ffd
- (id)vmuVMRegionForAddress:(unsigned long long)arg1;	// IMP=0x0000000000018ff5
- (unsigned int)sourceLineNumberForPCaddress:(unsigned long long)arg1;	// IMP=0x0000000000018fcb
- (id)sourceFileNameForPCaddress:(unsigned long long)arg1;	// IMP=0x0000000000018f70
- (id)sourcePathForPCaddress:(unsigned long long)arg1;	// IMP=0x0000000000018f15
- (struct _VMURange)functionRangeContainingPCaddress:(unsigned long long)arg1;	// IMP=0x0000000000018eeb
- (id)functionNameForPCaddress:(unsigned long long)arg1;	// IMP=0x0000000000018e90
- (struct _VMURange)binaryImageRangeForPCaddress:(unsigned long long)arg1;	// IMP=0x0000000000018e3c
- (id)binaryImagePathForPCaddress:(unsigned long long)arg1;	// IMP=0x0000000000018de1
- (long long)getFramesForStackID:(unsigned long long)arg1 stackFramesBuffer:(unsigned long long *)arg2;	// IMP=0x0000000000018dd9
- (long long)getFramesForAddress:(unsigned long long)arg1 size:(unsigned long long)arg2 inLiteZone:(_Bool)arg3 stackFramesBuffer:(unsigned long long *)arg4;	// IMP=0x0000000000018dd1
- (long long)getFramesForNode:(unsigned int)arg1 inLiteZone:(_Bool)arg2 stackFramesBuffer:(unsigned long long *)arg3;	// IMP=0x0000000000018dc9
- (int)enumerateMSLRecordsAndPayloads:(CDUnknownBlockType)arg1;	// IMP=0x0000000000018dbe
@property(readonly) _Bool inspectingLiveProcess;
@property(readonly) _Bool is64bit;
- (id)symbolicatedBacktraceForFrames:(unsigned long long *)arg1 frameCount:(long long)arg2 options:(unsigned long long)arg3;	// IMP=0x00000000000185e8
- (id)identifierForBinaryImagePath:(id)arg1;	// IMP=0x00000000000184d7
- (id)symbolicatedBacktraceForStackID:(unsigned long long)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000001844c
- (id)symbolicatedBacktraceForNode:(unsigned int)arg1 nodeDetails:(CDStruct_599faf0f)arg2 isLiteZone:(_Bool)arg3 options:(unsigned long long)arg4;	// IMP=0x00000000000182ed

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) unsigned long long nodesInUniquingTable;
@property(readonly) Class superclass;

@end
