//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NeutrinoCore/NUSharableImage-Protocol.h>

@class NSString;
@protocol NUPurgeableStorage, OS_dispatch_queue;

@interface _NUImageTile : NSObject <NUSharableImage>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    id <NUPurgeableStorage> _storage;	// 16 = 0x10
    unsigned long long _accessCount;	// 24 = 0x18
    _Bool _wasPurged;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000204269
- (_Bool)isValid;	// IMP=0x00000000002041db
- (long long)copyFromTile:(id)arg1 region:(id)arg2;	// IMP=0x0000000000203db8
- (long long)writeStorageInRegion:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000000002039b5
- (long long)readStorageInRegion:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000000002035b2
- (void)_visitRead:(CDUnknownBlockType)arg1;	// IMP=0x0000000000203525
- (_Bool)_markAsUnpurgeable;	// IMP=0x000000000020350c
- (void)_markAsPurgeable;	// IMP=0x00000000002034f6
- (_Bool)_decrementAccessCount;	// IMP=0x00000000002034c9
- (_Bool)_incrementAccessCount;	// IMP=0x0000000000203489
- (void)decrementAccessCountButLeaveAccessedIfLastUse;	// IMP=0x000000000020343e
- (_Bool)decrementAccessCount;	// IMP=0x00000000002033b0
- (_Bool)incrementAccessCount;	// IMP=0x0000000000203322
- (int)useCount;	// IMP=0x000000000020330c
- (_Bool)decrementUseCount;	// IMP=0x00000000002032f6
- (void)incrementUseCount;	// IMP=0x00000000002032e0
- (_Bool)isInUse;	// IMP=0x00000000002032ca
- (_Bool)isShared;	// IMP=0x00000000002032b4
- (unsigned long long)accessCount;	// IMP=0x0000000000203228
- (void)returnToStorageFactory:(id)arg1;	// IMP=0x0000000000202e68
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0000000000202aa2
- (id)initWithStorage:(id)arg1;	// IMP=0x00000000002026b6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

