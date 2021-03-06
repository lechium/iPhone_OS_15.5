//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TipsCore/_TPSXPCExportable-Protocol.h>

@class NSString, NSXPCInterface, _TPSXPCConnection;

@interface TPSServiceConnection : NSObject <_TPSXPCExportable>
{
    _TPSXPCConnection *_connection;	// 8 = 0x8
    NSXPCInterface *_remoteInterfaceInstance;	// 16 = 0x10
    NSXPCInterface *_exportedInterfaceInstance;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x000000000000c970
- (void).cxx_destruct;	// IMP=0x000000000000cb35
@property(retain, nonatomic) NSXPCInterface *exportedInterfaceInstance; // @synthesize exportedInterfaceInstance=_exportedInterfaceInstance;
@property(retain, nonatomic) NSXPCInterface *remoteInterfaceInstance; // @synthesize remoteInterfaceInstance=_remoteInterfaceInstance;
- (void)connectionInterrupted;	// IMP=0x000000000000caed
- (void)connectionInvalidated;	// IMP=0x000000000000cadb
- (id)remoteInterface;	// IMP=0x000000000000caa8
- (id)exportedInterface;	// IMP=0x000000000000ca75
- (id)connection;	// IMP=0x000000000000c9f7
- (void)invalidate;	// IMP=0x000000000000c9c5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

