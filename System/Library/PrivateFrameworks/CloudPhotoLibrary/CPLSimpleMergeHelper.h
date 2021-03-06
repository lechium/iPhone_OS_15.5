//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CPLEngineStore;

@interface CPLSimpleMergeHelper : NSObject
{
    CPLEngineStore *_store;	// 8 = 0x8
}

+ (id)_mergerWithConflictsForStore:(id)arg1 conflictingScopeIdentifiers:(id)arg2;	// IMP=0x00000000000a9fdb
+ (id)_mergerWithNoConflictsForStore:(id)arg1;	// IMP=0x00000000000a9fb0
- (void).cxx_destruct;	// IMP=0x00000000000a9fa0
@property(readonly, nonatomic) CPLEngineStore *store; // @synthesize store=_store;
- (id)mergerForBatch:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000a981c
- (_Bool)_changeCanConflict:(id)arg1;	// IMP=0x00000000000a97c9
- (id)initWithEngineStore:(id)arg1;	// IMP=0x00000000000a975e

@end

