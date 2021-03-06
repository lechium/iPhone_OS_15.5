//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface DNDSMutableModeAssertionStore
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000052c1e
@property(copy, nonatomic) NSArray *invalidationRequests; // @dynamic invalidationRequests;
@property(copy, nonatomic) NSArray *invalidations; // @dynamic invalidations;
@property(copy, nonatomic) NSArray *assertions; // @dynamic assertions;
- (void)downgradeAssertionsIfNeededForSyncToPairedDevice:(id)arg1 dataSource:(id)arg2 syncManager:(id)arg3;	// IMP=0x0000000000053cb6
- (void)updateConfigurationModificationDatesWithDataSource:(id)arg1 syncManager:(id)arg2;	// IMP=0x0000000000053ae5
- (void)resolveSourcesForSyncFromPairedDevice:(id)arg1;	// IMP=0x00000000000536e7
- (void)unresolveSourcesForSyncToPairedDevice:(id)arg1;	// IMP=0x00000000000532ec
- (void)filterForSyncToPairedDevice:(id)arg1 clientDetailsProvider:(id)arg2;	// IMP=0x0000000000052c4c
- (void)sanitizeDatesForThreshold:(id)arg1;	// IMP=0x00000000000a5dd5

@end

