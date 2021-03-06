//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ScreenTimeCore/STCoreAnalyticsEvent-Protocol.h>

@class NSDictionary, NSString;

@interface STRestrictionsCoreAnalyticsEvent : NSObject <STCoreAnalyticsEvent>
{
    _Bool _contentAndPrivacyRestrictionsEnabled;	// 8 = 0x8
    _Bool _mediaAndAppleMusicIsRestricted;	// 9 = 0x9
    _Bool _gameCenterMultiplayerGamesIsRestricted;	// 10 = 0xa
    _Bool _gameCenterAddingFriendsIsRestricted;	// 11 = 0xb
    _Bool _gameCenterConnectWithFriendsIsRestricted;	// 12 = 0xc
    _Bool _gameCenterScreenRecordingIsRestricted;	// 13 = 0xd
    _Bool _gameCenterNearbyMultiplayerIsRestricted;	// 14 = 0xe
    _Bool _gameCenterPrivateMessagingIsRestricted;	// 15 = 0xf
    _Bool _gameCenterProfilePrivacyChangesIsRestricted;	// 16 = 0x10
    _Bool _gameCenterAvatarAndNicknameChangesIsRestricted;	// 17 = 0x11
    _Bool _userIsManaged;	// 18 = 0x12
    long long _userAgeGroup;	// 24 = 0x18
}

+ (id)description;	// IMP=0x0000000000051a38
@property(readonly) _Bool userIsManaged; // @synthesize userIsManaged=_userIsManaged;
@property(readonly) long long userAgeGroup; // @synthesize userAgeGroup=_userAgeGroup;
@property(readonly) _Bool gameCenterAvatarAndNicknameChangesIsRestricted; // @synthesize gameCenterAvatarAndNicknameChangesIsRestricted=_gameCenterAvatarAndNicknameChangesIsRestricted;
@property(readonly) _Bool gameCenterProfilePrivacyChangesIsRestricted; // @synthesize gameCenterProfilePrivacyChangesIsRestricted=_gameCenterProfilePrivacyChangesIsRestricted;
@property(readonly) _Bool gameCenterPrivateMessagingIsRestricted; // @synthesize gameCenterPrivateMessagingIsRestricted=_gameCenterPrivateMessagingIsRestricted;
@property(readonly) _Bool gameCenterNearbyMultiplayerIsRestricted; // @synthesize gameCenterNearbyMultiplayerIsRestricted=_gameCenterNearbyMultiplayerIsRestricted;
@property(readonly) _Bool gameCenterScreenRecordingIsRestricted; // @synthesize gameCenterScreenRecordingIsRestricted=_gameCenterScreenRecordingIsRestricted;
@property(readonly) _Bool gameCenterConnectWithFriendsIsRestricted; // @synthesize gameCenterConnectWithFriendsIsRestricted=_gameCenterConnectWithFriendsIsRestricted;
@property(readonly) _Bool gameCenterAddingFriendsIsRestricted; // @synthesize gameCenterAddingFriendsIsRestricted=_gameCenterAddingFriendsIsRestricted;
@property(readonly) _Bool gameCenterMultiplayerGamesIsRestricted; // @synthesize gameCenterMultiplayerGamesIsRestricted=_gameCenterMultiplayerGamesIsRestricted;
@property(readonly) _Bool mediaAndAppleMusicIsRestricted; // @synthesize mediaAndAppleMusicIsRestricted=_mediaAndAppleMusicIsRestricted;
@property(readonly) _Bool contentAndPrivacyRestrictionsEnabled; // @synthesize contentAndPrivacyRestrictionsEnabled=_contentAndPrivacyRestrictionsEnabled;
@property(readonly, copy) NSDictionary *payload;
@property(readonly, copy) NSString *name;
- (id)initWithContentAndPrivacyRestrictionsEnabled:(_Bool)arg1 mediaAndAppleMusicIsRestricted:(_Bool)arg2 gameCenterMultiplayerGamesIsRestricted:(_Bool)arg3 gameCenterAddingFriendsIsRestricted:(_Bool)arg4 gameCenterConnectWithFriendsIsRestricted:(_Bool)arg5 gameCenterScreenRecordingIsRestricted:(_Bool)arg6 gameCenterNearbyMultiplayerIsRestricted:(_Bool)arg7 gameCenterPrivateMessagingIsRestricted:(_Bool)arg8 gameCenterProfilePrivacyChangesIsRestricted:(_Bool)arg9 gameCenterAvatarAndNicknameChangesIsRestricted:(_Bool)arg10 userAgeGroup:(long long)arg11 userIsManaged:(_Bool)arg12;	// IMP=0x000000000005199c

// Remaining properties
@property(readonly, copy) NSString *description;

@end

