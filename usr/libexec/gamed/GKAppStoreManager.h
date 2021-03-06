//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface GKAppStoreManager : NSObject
{
}

+ (id)sharedManager;	// IMP=0x00400000000cc1d4
- (void)loadTellAFriendMessageForGameWithAdamID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00400000000cccf9
- (void)lookupStoreItemsForAdamIDs:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000cc39f
- (id)gameCenterBag;	// IMP=0x00100000000cc30d
- (_Bool)accountIsLoggedIntoAStore;	// IMP=0x00100000000cc2a3
- (void)updateStoreFront;	// IMP=0x00100000000cc29d
- (void)startup;	// IMP=0x00100000000cc229

@end

