//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FCKeyValueStore, NSMutableDictionary;
@protocol FCTagSettingsDelegate;

@interface FCTagSettings : NSObject
{
    NSMutableDictionary *_tagSettingsEntriesByTagID;	// 8 = 0x8
    FCKeyValueStore *_localStore;	// 16 = 0x10
    id <FCTagSettingsDelegate> _delegate;	// 24 = 0x18
}

+ (id)commandsToMergeLocalDataToCloud:(id)arg1;	// IMP=0x0000000000154027
- (void).cxx_destruct;	// IMP=0x0000000000156826
- (id)allTagSettingsRecords;	// IMP=0x000000000015678c
- (id)allTagSettingsRecordNames;	// IMP=0x00000000001566f2
- (void)handleSyncWithDeletedTagSettingsRecordName:(id)arg1;	// IMP=0x00000000001565ce
- (void)handleSyncWithTagSettingsRecord:(id)arg1;	// IMP=0x0000000000155e91
- (id)webAccessOptedInTagIDs;	// IMP=0x0000000000155d70
- (void)setWebAccessOptInForTagID:(id)arg1 webAccessOptIn:(_Bool)arg2;	// IMP=0x00000000001558b8
- (id)authenticatedAccessTokensByTagID;	// IMP=0x000000000015572c
- (id)accessTokenForTagID:(id)arg1;	// IMP=0x00000000001556cf
- (void)setAccessTokenForTagID:(id)arg1 accessToken:(id)arg2 userInitiated:(_Bool)arg3;	// IMP=0x00000000001551d6
- (id)contentScaleForTagID:(id)arg1;	// IMP=0x0000000000155179
- (void)setContentScaleForTagID:(id)arg1 contentScale:(id)arg2;	// IMP=0x0000000000154d90
- (id)fontSizeForTagID:(id)arg1;	// IMP=0x0000000000154d33
- (void)setFontSizeForTagID:(id)arg1 fontSize:(id)arg2;	// IMP=0x0000000000154623
- (void)syncForTagID:(id)arg1;	// IMP=0x00000000001544da
- (void)loadLocalCachesFromStore;	// IMP=0x0000000000153973
- (id)initWithStore:(id)arg1 tagSettingsDelegate:(id)arg2;	// IMP=0x00000000001537fa

@end

