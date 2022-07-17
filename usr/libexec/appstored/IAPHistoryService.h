//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IAPHistoryService : NSObject
{
}

+ (id)defaultService;	// IMP=0x00200000000c90c8
- (void)getAppStoreConsumedIntroOfferFamilyIdsWithResultHandler:(CDUnknownBlockType)arg1;	// IMP=0x00400000000ca4ed
- (void)getCachedSubscriptionEntitlementsForSegment:(unsigned long long)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000ca24c
- (void)getSubscriptionEntitlementsForSegment:(unsigned long long)arg1 ignoreCaches:(_Bool)arg2 requestingBundleId:(id)arg3 withReplyHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000c9f08
- (void)getSubscriptionEntitlementsIgnoreCaches:(_Bool)arg1 forActiveAccountWithReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000c9c64
- (void)setSubscriptionEntitlementsWithDictionary:(id)arg1 forAccountID:(id)arg2 segment:(unsigned long long)arg3;	// IMP=0x00100000000c9a88
- (void)refreshIAPsForActiveAccountWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000c9836
- (void)getIAPsForActiveAccountWithAdamIDs:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000c938c
- (void)getAllIAPsForActiveAccountWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000c911d

@end
