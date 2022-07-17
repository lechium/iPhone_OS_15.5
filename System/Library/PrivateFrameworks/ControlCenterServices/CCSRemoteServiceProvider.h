//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ControlCenterServices/CCSRemoteServiceServerProtocol-Protocol.h>
#import <ControlCenterServices/NSXPCListenerDelegate-Protocol.h>

@class CCSModuleRepository, CCSModuleSettingsProvider, NSHashTable, NSString, NSXPCListener;

@interface CCSRemoteServiceProvider : NSObject <NSXPCListenerDelegate, CCSRemoteServiceServerProtocol>
{
    CCSModuleRepository *_moduleRepository;	// 8 = 0x8
    CCSModuleSettingsProvider *_settingsProvider;	// 16 = 0x10
    NSXPCListener *_listener;	// 24 = 0x18
    NSHashTable *_presentationEndpoints;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x00000000000012d7
+ (void)initialize;	// IMP=0x00000000000012cd
- (void).cxx_destruct;	// IMP=0x0000000000003961
- (void)enumerateEndpointsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000037d5
- (void)presentModuleWithIdentifier:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000002ea8
- (void)requestAvailableModuleIdentifiersWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000002d79
- (void)setVisibility:(_Bool)arg1 forModuleWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000027e0
- (void)requestDisableModuleWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000002214
- (void)requestEnableModuleWithIdentifier:(id)arg1 force:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000001a39
- (void)getEnabledStateOfModuleWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000017bf
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00000000000015c8
- (void)invalidate;	// IMP=0x000000000000158d
- (void)resume;	// IMP=0x0000000000001577
- (void)registerEndpoint:(id)arg1;	// IMP=0x000000000000147b
- (void)dealloc;	// IMP=0x000000000000143d
- (id)_init;	// IMP=0x000000000000133c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
