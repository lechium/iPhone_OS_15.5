//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MSASDaemonModel
{
}

+ (id)defaultModel;	// IMP=0x0000000000083263
- (void)clearAllNextActivityDates;	// IMP=0x0000000000082a98
- (void)setNextActivityDate:(id)arg1 forPersonID:(id)arg2;	// IMP=0x00000000000829bc
- (id)nextActivityDateByPersonID;	// IMP=0x00000000000828a5
- (id)earliestNextActivityDate;	// IMP=0x0000000000082733
- (_Bool)dbQueueUpgradeFromDatabaseVersion:(int)arg1 currentVersion:(int)arg2;	// IMP=0x00000000000824b8
- (id)init;	// IMP=0x0000000000082459

@end
