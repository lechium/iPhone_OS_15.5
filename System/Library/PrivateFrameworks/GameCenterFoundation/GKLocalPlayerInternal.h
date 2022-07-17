//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSNumber, NSString;

@interface GKLocalPlayerInternal
{
    NSString *_accountName;	// 248 = 0xf8
    NSArray *_emailAddresses;	// 256 = 0x100
    NSString *_facebookUserID;	// 264 = 0x108
    NSNumber *_iCloudUserID;	// 272 = 0x110
    unsigned short _numberOfRequests;	// 280 = 0x118
    unsigned short _numberOfTurns;	// 282 = 0x11a
    unsigned short _numberOfChallenges;	// 284 = 0x11c
    unsigned long long _loginStatus;	// 288 = 0x120
}

+ (id)secureCodedPropertyKeys;	// IMP=0x00000000000f608b
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000f6083
- (void).cxx_destruct;	// IMP=0x00000000000f6931
@property unsigned long long loginStatus; // @synthesize loginStatus=_loginStatus;
- (void)setNumberOfChallenges:(unsigned short)arg1;	// IMP=0x00000000000f68fe
- (unsigned short)numberOfChallenges;	// IMP=0x00000000000f68ed
- (void)setNumberOfTurns:(unsigned short)arg1;	// IMP=0x00000000000f68dc
- (unsigned short)numberOfTurns;	// IMP=0x00000000000f68cb
- (void)setNumberOfRequests:(unsigned short)arg1;	// IMP=0x00000000000f68ba
- (unsigned short)numberOfRequests;	// IMP=0x00000000000f68a9
- (id)iCloudUserID;	// IMP=0x00000000000f6898
- (void)setFacebookUserID:(id)arg1;	// IMP=0x00000000000f6884
- (id)facebookUserID;	// IMP=0x00000000000f6873
- (void)setEmailAddresses:(id)arg1;	// IMP=0x00000000000f685f
- (id)emailAddresses;	// IMP=0x00000000000f684e
- (void)setAccountName:(id)arg1;	// IMP=0x00000000000f683a
- (id)accountName;	// IMP=0x00000000000f6829
- (int)defaultFamiliarity;	// IMP=0x00000000000f681e
- (void)setICloudUserID:(id)arg1;	// IMP=0x00000000000f67b5
- (_Bool)isFriend;	// IMP=0x00000000000f67ad
- (_Bool)isLocalPlayer;	// IMP=0x00000000000f67a5
- (void)setPhotoPending:(_Bool)arg1;	// IMP=0x00000000000f6788
- (_Bool)isPhotoPending;	// IMP=0x00000000000f6772
- (void)setFindable:(_Bool)arg1;	// IMP=0x00000000000f6755
- (_Bool)isFindable;	// IMP=0x00000000000f673f
- (void)setUnderage:(_Bool)arg1;	// IMP=0x00000000000f6722
- (_Bool)isUnderage;	// IMP=0x00000000000f66b7
- (void)setGlobalFriendListAccess:(int)arg1;	// IMP=0x00000000000f66a7
- (int)globalFriendListAccess;	// IMP=0x00000000000f6697
- (void)setDefaultPrivacyVisibility:(_Bool)arg1;	// IMP=0x00000000000f667a
- (_Bool)isDefaultPrivacyVisibility;	// IMP=0x00000000000f6664
- (void)setDefaultNickname:(_Bool)arg1;	// IMP=0x00000000000f6647
- (_Bool)isDefaultNickname;	// IMP=0x00000000000f6631
- (void)setPurpleBuddyAccount:(_Bool)arg1;	// IMP=0x00000000000f6614
- (_Bool)isPurpleBuddyAccount;	// IMP=0x00000000000f6601
- (id)minimalInternal;	// IMP=0x00000000000f6387

@end
