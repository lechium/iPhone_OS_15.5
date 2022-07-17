//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _MTLIndirectDrawPatchesArguments : NSObject
{
    unsigned long long _numberOfPatchControlPoints;	// 8 = 0x8
    unsigned long long _patchStart;	// 16 = 0x10
    unsigned long long _patchCount;	// 24 = 0x18
    void *_patchIndexBufferVirtualAddress;	// 32 = 0x20
    unsigned long long _patchIndexBufferOffset;	// 40 = 0x28
    unsigned long long _instanceCount;	// 48 = 0x30
    unsigned long long _baseInstance;	// 56 = 0x38
}

@property(nonatomic) unsigned long long baseInstance; // @synthesize baseInstance=_baseInstance;
@property(nonatomic) unsigned long long instanceCount; // @synthesize instanceCount=_instanceCount;
@property(nonatomic) unsigned long long patchIndexBufferOffset; // @synthesize patchIndexBufferOffset=_patchIndexBufferOffset;
@property(nonatomic) void *patchIndexBufferVirtualAddress; // @synthesize patchIndexBufferVirtualAddress=_patchIndexBufferVirtualAddress;
@property(nonatomic) unsigned long long patchCount; // @synthesize patchCount=_patchCount;
@property(nonatomic) unsigned long long patchStart; // @synthesize patchStart=_patchStart;
@property(nonatomic) unsigned long long numberOfPatchControlPoints; // @synthesize numberOfPatchControlPoints=_numberOfPatchControlPoints;

@end
