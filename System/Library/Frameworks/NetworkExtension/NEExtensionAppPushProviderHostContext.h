//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NetworkExtension/NEExtensionAppPushProviderHostProtocol-Protocol.h>
#import <NetworkExtension/NEExtensionAppPushProviderProtocol-Protocol.h>

@class NSString;

@interface NEExtensionAppPushProviderHostContext <NEExtensionAppPushProviderProtocol, NEExtensionAppPushProviderHostProtocol>
{
}

+ (id)_extensionAuxiliaryHostProtocol;	// IMP=0x000000000005b8a8
+ (id)_extensionAuxiliaryVendorProtocol;	// IMP=0x000000000005b83c
- (void)reportIncomingCall:(id)arg1;	// IMP=0x000000000005bb81
- (void)sendTimerEvent;	// IMP=0x000000000005bb44
- (void)sendOutgoingCallMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000005babe
- (void)setProviderConfiguration:(id)arg1;	// IMP=0x000000000005ba4c
- (void)stopWithReason:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000005b9d4
- (void)startConnectionWithProviderConfig:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000005b94e
- (int)requiredEntitlement;	// IMP=0x000000000005b943
- (void)validateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000005b914

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
