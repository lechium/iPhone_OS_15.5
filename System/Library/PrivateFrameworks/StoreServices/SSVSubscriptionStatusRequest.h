//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreServices/SSXPCCoding-Protocol.h>

@class NSString, SSAuthenticationContext;

@interface SSVSubscriptionStatusRequest <SSXPCCoding>
{
    _Bool _authenticatesIfNecessary;	// 56 = 0x38
    SSAuthenticationContext *_authenticationContext;	// 64 = 0x40
    long long _carrierBundleProvisioningStyle;	// 72 = 0x48
    NSString *_localizedAuthenticationReason;	// 80 = 0x50
    NSString *_reason;	// 88 = 0x58
}

+ (long long)requestMessage;	// IMP=0x0000000000108059
+ (_Bool)_allowMultipleCallbacks;	// IMP=0x0000000000108051
- (void).cxx_destruct;	// IMP=0x0000000000108322
@property(copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(copy, nonatomic) NSString *localizedAuthenticationReason; // @synthesize localizedAuthenticationReason=_localizedAuthenticationReason;
@property(nonatomic) long long carrierBundleProvisioningStyle; // @synthesize carrierBundleProvisioningStyle=_carrierBundleProvisioningStyle;
@property(copy, nonatomic) SSAuthenticationContext *authenticationContext; // @synthesize authenticationContext=_authenticationContext;
@property(nonatomic) _Bool authenticatesIfNecessary; // @synthesize authenticatesIfNecessary=_authenticatesIfNecessary;
- (id)copyXPCEncoding;	// IMP=0x00000000001081d7
- (id)initWithXPCEncoding:(id)arg1;	// IMP=0x0000000000108064
- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000107fa6
- (void)startWithStatusResponseBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000107cb3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
