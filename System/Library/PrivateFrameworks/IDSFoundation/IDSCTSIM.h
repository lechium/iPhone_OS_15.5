//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IDSFoundation/IDSCTSIM-Protocol.h>

@class CTXPCServiceSubscriptionContext, NSString;

@interface IDSCTSIM : NSObject <IDSCTSIM>
{
    NSString *_mobileCountryCode;	// 8 = 0x8
    NSString *_mobileNetworkCode;	// 16 = 0x10
    CTXPCServiceSubscriptionContext *_context;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000d7431
@property(retain, nonatomic) CTXPCServiceSubscriptionContext *context; // @synthesize context=_context;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *mobileNetworkCode;
@property(readonly, nonatomic) NSString *mobileCountryCode;
@property(readonly, nonatomic) _Bool isDefaultVoiceSIM;
@property(readonly, nonatomic) unsigned long long slot;
@property(readonly, nonatomic) NSString *SIMIdentifier;
@property(readonly, nonatomic) NSString *phoneNumber;
@property(readonly, nonatomic) NSString *label;
- (id)initWithContext:(id)arg1;	// IMP=0x00000000000d6f14

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
