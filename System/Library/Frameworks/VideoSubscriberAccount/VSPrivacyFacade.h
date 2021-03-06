//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VideoSubscriberAccount/VSPrivacyServiceProtocol-Protocol.h>

@class NSArray, NSOperationQueue, NSString, VSPrivacyVoucherLockbox;

@interface VSPrivacyFacade : NSObject <VSPrivacyServiceProtocol>
{
    VSPrivacyVoucherLockbox *_voucherLockbox;	// 8 = 0x8
    NSString *_service;	// 16 = 0x10
    NSOperationQueue *_privateQueue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000338d1
@property(retain, nonatomic) NSOperationQueue *privateQueue; // @synthesize privateQueue=_privateQueue;
@property(copy, nonatomic) NSString *service; // @synthesize service=_service;
@property(retain, nonatomic) VSPrivacyVoucherLockbox *voucherLockbox; // @synthesize voucherLockbox=_voucherLockbox;
- (_Bool)reset;	// IMP=0x000000000003381e
@property(readonly, copy, nonatomic) NSArray *knownAppBundles;
- (_Bool)setAccessGranted:(_Bool)arg1 forBundle:(struct __CFBundle *)arg2;	// IMP=0x000000000003338a
- (_Bool)isAccessGrantedForBundle:(struct __CFBundle *)arg1;	// IMP=0x00000000000332b4
- (void)_promptForAccessUsingAuditToken:(CDStruct_4c969caf)arg1 processIdentifier:(int)arg2 identityProviderDisplayName:(id)arg3 providerIsSupported:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000003260f
- (void)requestAccessForAuditToken:(CDStruct_4c969caf)arg1 processIdentifier:(int)arg2 identityProviderDisplayName:(id)arg3 providerIsSupported:(_Bool)arg4 identityProviderID:(id)arg5 allowUI:(_Bool)arg6 completionHandler:(CDUnknownBlockType)arg7;	// IMP=0x000000000003237b
- (id)_voucherForProcess:(int)arg1 providerID:(id)arg2;	// IMP=0x0000000000032012
- (_Bool)setAccessGranted:(_Bool)arg1 forAuditToken:(CDStruct_4c969caf)arg2;	// IMP=0x0000000000031fd3
- (_Bool)isAccessGrantedForAuditToken:(CDStruct_4c969caf)arg1;	// IMP=0x0000000000031f98
- (void)preflightCheckForProcessIdentifier:(int)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000031ba4
- (id)init;	// IMP=0x0000000000031b35
- (id)initWithVoucherLockbox:(id)arg1;	// IMP=0x0000000000031b16
- (id)initWithService:(id)arg1 voucherLockbox:(id)arg2;	// IMP=0x0000000000031a24

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

