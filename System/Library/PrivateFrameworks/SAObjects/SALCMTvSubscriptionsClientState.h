//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface SALCMTvSubscriptionsClientState
{
}

+ (id)tvSubscriptionsClientStateWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000001a1e8
+ (id)tvSubscriptionsClientState;	// IMP=0x000000000001a1d6
+ (id)uniqueObjectIdentifier;	// IMP=0x000000000001a1a8
+ (id)syncKey;	// IMP=0x000000000001a19b
+ (id)persistencePolicy;	// IMP=0x000000000001a187
+ (id)deliveryDeadline;	// IMP=0x000000000001a173
@property(copy, nonatomic) NSArray *subscriptions;
- (id)encodedClassName;	// IMP=0x000000000001a1c9
- (id)groupIdentifier;	// IMP=0x000000000001a1b5

@end
