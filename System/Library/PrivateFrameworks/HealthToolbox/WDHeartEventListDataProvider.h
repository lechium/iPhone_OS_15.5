//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface WDHeartEventListDataProvider
{
}

- (id)createQueryForSampleType:(id)arg1 predicate:(id)arg2 limit:(long long)arg3 sortDescriptors:(id)arg4 resultsHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000047c26
- (id)titleForSection:(unsigned long long)arg1;	// IMP=0x0000000000047b83
- (id)customCellForObject:(id)arg1 indexPath:(id)arg2 tableView:(id)arg3;	// IMP=0x00000000000479b1
- (double)customEstimatedCellHeight;	// IMP=0x00000000000479a0
- (double)customCellHeight;	// IMP=0x000000000004798f
- (long long)cellStyle;	// IMP=0x0000000000047984
- (id)sampleTypes;	// IMP=0x00000000000478f9
- (id)_heartEventType;	// IMP=0x000000000007f079

@end
