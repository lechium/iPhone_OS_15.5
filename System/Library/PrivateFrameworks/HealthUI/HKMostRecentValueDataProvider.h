//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol HKDataProviderValue;

@interface HKMostRecentValueDataProvider
{
}

- (id)_mostRecentValueQueryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000126279
- (id)fetchOperationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000125fe3
- (id)currentValue;	// IMP=0x0000000000125fd1

// Remaining properties
@property(readonly, nonatomic) id <HKDataProviderValue> value; // @dynamic value;

@end

