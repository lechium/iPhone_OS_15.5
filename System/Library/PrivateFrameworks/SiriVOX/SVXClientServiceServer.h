//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriVOX/SVXModuleInstance-Protocol.h>

@class NSMutableDictionary, NSString, SVXDeviceSetupManager, SVXModule, SVXSessionManager, SVXSpeechSynthesizer;

__attribute__((visibility("hidden")))
@interface SVXClientServiceServer : NSObject <SVXModuleInstance>
{
    SVXModule *_module;	// 8 = 0x8
    NSMutableDictionary *_connectionsByUUID;	// 16 = 0x10
    SVXDeviceSetupManager *_deviceSetupManager;	// 24 = 0x18
    SVXSessionManager *_sessionManager;	// 32 = 0x20
    SVXSpeechSynthesizer *_speechSynthesizer;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000005e795
- (void)_removeAllConnections;	// IMP=0x000000000005e704
- (void)_removeConnection:(id)arg1;	// IMP=0x000000000005e637
- (void)_addConnection:(id)arg1;	// IMP=0x000000000005e538
- (void)stopWithModuleInstanceProvider:(id)arg1;	// IMP=0x000000000005e46d
- (void)startWithModuleInstanceProvider:(id)arg1 platformDependencies:(id)arg2;	// IMP=0x000000000005e34c
- (id)initWithModule:(id)arg1;	// IMP=0x000000000005e2e1
- (void)removeConnection:(id)arg1;	// IMP=0x000000000005e187
- (void)addConnection:(id)arg1;	// IMP=0x000000000005e02d
- (void)dealloc;	// IMP=0x000000000005dfef

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

