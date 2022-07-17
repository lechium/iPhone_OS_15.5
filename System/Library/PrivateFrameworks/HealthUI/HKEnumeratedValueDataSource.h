//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface HKEnumeratedValueDataSource
{
    NSArray *_enumeratedValueOrder;	// 16 = 0x10
    CDUnknownBlockType _userInfoCreationBlock;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000259ade
@property(copy, nonatomic) CDUnknownBlockType userInfoCreationBlock; // @synthesize userInfoCreationBlock=_userInfoCreationBlock;
@property(retain, nonatomic) NSArray *enumeratedValueOrder; // @synthesize enumeratedValueOrder=_enumeratedValueOrder;
- (id)_enumeratedValuesToIndices:(id)arg1 mapping:(id)arg2;	// IMP=0x0000000000259898
- (id)_enumeratedValueOrderMapping;	// IMP=0x00000000002596c4
- (void)_handleSamples:(id)arg1 blockStart:(id)arg2 blockEnd:(id)arg3 intervalComponents:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000002593d4
- (id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000259016
- (id)queryDescription;	// IMP=0x0000000000258f89

@end
