//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, TTCRVectorMultiTimestamp;

@interface CRTTCompatibleDocument
{
    TTCRVectorMultiTimestamp *_sharedTopotextTimestamp;	// 8 = 0x8
    NSMutableArray *_stringsWithClocksNeedingUpdating;	// 16 = 0x10
    NSMutableArray *_stringsWithClocksToResetAfterRealizingLocalChanges;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000e5d87
@property(retain, nonatomic) NSMutableArray *stringsWithClocksToResetAfterRealizingLocalChanges; // @synthesize stringsWithClocksToResetAfterRealizingLocalChanges=_stringsWithClocksToResetAfterRealizingLocalChanges;
@property(retain, nonatomic) NSMutableArray *stringsWithClocksNeedingUpdating; // @synthesize stringsWithClocksNeedingUpdating=_stringsWithClocksNeedingUpdating;
@property(retain, nonatomic) TTCRVectorMultiTimestamp *sharedTopotextTimestamp; // @synthesize sharedTopotextTimestamp=_sharedTopotextTimestamp;
- (void)realizeLocalChanges;	// IMP=0x00000000000e5b75
- (void)mergeTimestampWithDocument:(id)arg1;	// IMP=0x00000000000e58c5
- (unsigned long long)mergeResultForMergingWithDocument:(id)arg1;	// IMP=0x00000000000e57bd
- (id)initWithVersion:(id)arg1 startVersion:(id)arg2 rootObject:(id)arg3 replica:(id)arg4 topoTimestamp:(id)arg5;	// IMP=0x00000000000e56bb
- (id)initWithVersion:(id)arg1 startVersion:(id)arg2 rootObject:(id)arg3 replica:(id)arg4;	// IMP=0x00000000000e55dc

@end

