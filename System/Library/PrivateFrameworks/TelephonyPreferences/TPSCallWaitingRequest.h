//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TelephonyPreferences/TPSSecureObject-Protocol.h>

@class NSString;

@interface TPSCallWaitingRequest <TPSSecureObject>
{
}

+ (id)unarchivedObjectClasses;	// IMP=0x00000000000214cc
- (_Bool)isEqualToRequest:(id)arg1;	// IMP=0x000000000002149d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000021436
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000021407
- (id)initWithSubscriptionContext:(id)arg1 callClass:(int)arg2;	// IMP=0x00000000000213dc
- (id)initWithSubscriptionContext:(id)arg1;	// IMP=0x00000000000213a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
