//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SABackgroundContextObject-Protocol.h>

@class NSArray, NSNumber, NSString, SACalendar, SAUserState, SAUserTokenStatus;

@interface SADynamiteClientState <SABackgroundContextObject>
{
}

+ (id)dynamiteClientStateWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000030657
+ (id)dynamiteClientState;	// IMP=0x0000000000030645
+ (id)uniqueObjectIdentifier;	// IMP=0x0000000000030617
+ (id)syncKey;	// IMP=0x000000000003060a
+ (id)persistencePolicy;	// IMP=0x00000000000305f6
+ (id)deliveryDeadline;	// IMP=0x00000000000305e2
@property(copy, nonatomic) NSString *xpAbCookie;
@property(retain, nonatomic) SAUserTokenStatus *userTokenStatus;
@property(copy, nonatomic) NSString *userToken;
@property(copy, nonatomic) NSNumber *userHistoryUnmodifiable;
@property(copy, nonatomic) NSString *status;
@property(nonatomic) _Bool isPromotionRelatedStatus;
@property(copy, nonatomic) NSArray *inContextUsersStates;
@property(copy, nonatomic) NSString *iTunesMatchSubscriptionStatus;
@property(copy, nonatomic) NSNumber *iCloudMusicLibraryToggle;
@property(retain, nonatomic) SACalendar *expirationDate;
@property(copy, nonatomic) NSArray *eligibleOffers;
@property(retain, nonatomic) SAUserState *defaultUserState;
@property(nonatomic) _Bool ageVerificationRequired;
@property(nonatomic) _Bool activeTvUser;
- (id)encodedClassName;	// IMP=0x0000000000030638
- (id)groupIdentifier;	// IMP=0x0000000000030624

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
