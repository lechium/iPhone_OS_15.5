//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FKFriendsManager;

@interface SOSLegacyContactsManager : NSObject
{
    FKFriendsManager *_friendsManager;	// 8 = 0x8
}

+ (_Bool)authorizedToUseContactStore;	// IMP=0x0000000000003cb4
+ (id)contactStore;	// IMP=0x0000000000003b97
+ (void)preloadContactStoreIfNecessary;	// IMP=0x0000000000003a78
- (void).cxx_destruct;	// IMP=0x0000000000003d34
@property(retain, nonatomic) FKFriendsManager *friendsManager; // @synthesize friendsManager=_friendsManager;
- (void)contactStoreDidChange;	// IMP=0x0000000000003a2b
- (id)_contactFromFriend:(id)arg1;	// IMP=0x00000000000038fe
- (id)_SOSFormattedDestinationForFriend:(id)arg1 withDestinationNumber:(id)arg2;	// IMP=0x0000000000003624
- (id)_SOSDestinationsForFriend:(id)arg1;	// IMP=0x0000000000003608
- (id)SOSLegacyContactsDestinations;	// IMP=0x000000000000345c
- (id)_SOSFriends;	// IMP=0x00000000000032ed
@property(readonly, nonatomic) _Bool SOSLegacyContactsExist;
- (id)SOSLegacyContacts;	// IMP=0x0000000000002f11
- (void)dealloc;	// IMP=0x0000000000002ec7
- (id)init;	// IMP=0x0000000000002d78

@end

