//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKTurnBasedMatch, NSString;

@interface GKTurnBasedParticipantsDataSource
{
    GKTurnBasedMatch *_match;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000011e7a3
@property(retain, nonatomic) GKTurnBasedMatch *match; // @synthesize match=_match;
@property(readonly, nonatomic) NSString *sectionTitle;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000000011e3a5
- (void)configureCollectionView:(id)arg1;	// IMP=0x000000000011e33a
- (void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2 updateNotifier:(id)arg3;	// IMP=0x000000000011e176

@end

