//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SoftwareUpdateServicesUI/SUSUIControllerServerInterface-Protocol.h>

@class NSString, NSXPCConnection;

@interface SUSUIControllerClient : NSObject <SUSUIControllerServerInterface>
{
    NSXPCConnection *_serverConnection;	// 8 = 0x8
    _Bool _connected;	// 16 = 0x10
    _Bool _serverIsExiting;	// 17 = 0x11
}

- (void).cxx_destruct;	// IMP=0x0000000000005e90
- (void)_noteServerExiting;	// IMP=0x0000000000005e70
- (void)_noteConnectionDropped;	// IMP=0x0000000000005d90
- (void)_connectToServerIfNecessary;	// IMP=0x00000000000056b0
- (void)_invalidateConnection;	// IMP=0x0000000000005620
- (id)_remoteInterfaceWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000005590
- (id)_remoteInterface;	// IMP=0x0000000000005550
- (_Bool)createKeybagWithSecret:(id)arg1;	// IMP=0x0000000000005440
- (void)dealloc;	// IMP=0x00000000000053f0
- (void)invalidate;	// IMP=0x00000000000053c0
- (id)init;	// IMP=0x0000000000005320

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
