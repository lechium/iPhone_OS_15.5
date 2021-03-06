//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSNumber, NSString;

@interface GKTurnBasedMultiplayerBulletin
{
    _Bool _userTapped;	// 16 = 0x10
    NSString *_matchID;	// 24 = 0x18
    NSNumber *_turnCount;	// 32 = 0x20
    NSDictionary *_localizableMessage;	// 40 = 0x28
    NSString *_exchangeID;	// 48 = 0x30
    NSString *_guestID;	// 56 = 0x38
    NSString *_aggregateDictionaryKey;	// 64 = 0x40
}

+ (_Bool)displayNotification;	// IMP=0x00400000000ffdbd
+ (_Bool)shouldExpirePlayerList;	// IMP=0x00100000000ffdb5
+ (_Bool)shouldLoadCacheDetails;	// IMP=0x00100000000ffdad
+ (_Bool)shouldLoadCacheList;	// IMP=0x00100000000ffda5
+ (_Bool)shouldLoadCacheData;	// IMP=0x00100000000ffd9d
+ (void)loadBulletinsForPushNotification:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000fee60
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000fee58
- (void).cxx_destruct;	// IMP=0x00200000001044b5
@property(readonly) NSString *aggregateDictionaryKey; // @synthesize aggregateDictionaryKey=_aggregateDictionaryKey;
@property(retain) NSString *guestID; // @synthesize guestID=_guestID;
@property(retain) NSString *exchangeID; // @synthesize exchangeID=_exchangeID;
@property(retain) NSDictionary *localizableMessage; // @synthesize localizableMessage=_localizableMessage;
// Error: Property attributes should begin with the type ('T') attribute, property name: userTapped
// Property attributes: (null)

@property(retain) NSNumber *turnCount; // @synthesize turnCount=_turnCount;
@property(retain) NSString *matchID; // @synthesize matchID=_matchID;
- (id)description;	// IMP=0x0010000000104315
- (void)handleAction:(id)arg1;	// IMP=0x0010000000104019
- (void)handleAcceptAction;	// IMP=0x0010000000103eb8
- (void)expireAndLoadCaches;	// IMP=0x00100000001036c6
- (void)assembleBulletin;	// IMP=0x0010000000102d76
- (id)bulletinMessage;	// IMP=0x0010000000102a65
- (void)removePreviousTurnBulletins;	// IMP=0x00100000001026df
- (void)declineTurnBasedInviteWithReason:(int)arg1;	// IMP=0x001000000010215c
- (void)acceptTurnBasedTurn;	// IMP=0x0010000000101de8
- (void)invalidateTurnCache;	// IMP=0x0010000000101966
- (void)saveTurnBasedEvent;	// IMP=0x00100000001017a0
- (void)updateBadgeCount;	// IMP=0x0010000000101578
- (void)loadDataWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000100873
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000010056f
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000100248
- (id)initWithPushNotification:(id)arg1;	// IMP=0x00100000000fff4c
- (void)update;	// IMP=0x00100000000ffdc5

@end

