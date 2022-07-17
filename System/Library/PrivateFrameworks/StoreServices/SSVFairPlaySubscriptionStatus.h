//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StoreServices/SSXPCCoding-Protocol.h>

@class NSString;

@interface SSVFairPlaySubscriptionStatus : NSObject <SSXPCCoding>
{
    _Bool _hasSubscriptionLease;	// 8 = 0x8
    _Bool _hasSubscriptionSlot;	// 9 = 0x9
}

@property(nonatomic) _Bool hasSubscriptionSlot; // @synthesize hasSubscriptionSlot=_hasSubscriptionSlot;
@property(nonatomic) _Bool hasSubscriptionLease; // @synthesize hasSubscriptionLease=_hasSubscriptionLease;
- (id)copyXPCEncoding;	// IMP=0x0000000000136d10
- (id)initWithXPCEncoding:(id)arg1;	// IMP=0x0000000000136c71
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000136c0c
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
