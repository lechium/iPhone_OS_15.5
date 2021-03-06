//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NetworkExtension/NEFilterDataExtensionProviderHostProtocol-Protocol.h>
#import <NetworkExtension/NEFilterDataExtensionProviderProtocol-Protocol.h>

@class NSString;

@interface NEFilterDataExtensionProviderHostContext <NEFilterDataExtensionProviderProtocol, NEFilterDataExtensionProviderHostProtocol>
{
}

+ (id)_extensionAuxiliaryHostProtocol;	// IMP=0x000000000005b295
+ (id)_extensionAuxiliaryVendorProtocol;	// IMP=0x000000000005b229
- (void)applySettings:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000005b7b6
- (void)getSourceAppInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000005b678
- (void)report:(id)arg1;	// IMP=0x000000000005b606
- (void)fetchCurrentRulesForFlow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000005b580
- (void)sendSocketContentFilterRequest;	// IMP=0x000000000005b543
- (void)sendBrowserContentFilterServerRequest;	// IMP=0x000000000005b506
- (void)provideURLAppendStringMap:(id)arg1;	// IMP=0x000000000005b494
- (void)provideRemediationMap:(id)arg1;	// IMP=0x000000000005b422
- (void)handleRulesChanged;	// IMP=0x000000000005b3e5
- (void)fetchProviderConnectionWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000005b373
- (void)providerControlSocketFileHandle:(id)arg1;	// IMP=0x000000000005b301

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

