//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary;

@interface APOdmlDESRecordManager
{
    NSMutableDictionary *_desRecords;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x0000000000022f7d
- (void).cxx_destruct;	// IMP=0x00000000000234e8
@property(retain, nonatomic) NSMutableDictionary *desRecords; // @synthesize desRecords=_desRecords;
- (id)recordForID:(id)arg1 placementType:(unsigned long long)arg2;	// IMP=0x0000000000023334
- (void)addAdListToDES:(id)arg1 forRecordID:(id)arg2 placementType:(unsigned long long)arg3;	// IMP=0x00000000000231e4
- (void)updateAdData:(id)arg1 event:(long long)arg2 forRecordID:(id)arg3;	// IMP=0x000000000002303f
- (id)init;	// IMP=0x0000000000022fd2

@end

