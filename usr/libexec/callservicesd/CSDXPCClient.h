//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet, NSString, NSXPCConnection;

@interface CSDXPCClient
{
    int _processIdentifier;	// 8 = 0x8
    NSString *_processName;	// 16 = 0x10
    NSString *_processBundleIdentifier;	// 24 = 0x18
    NSSet *_entitledCapabilities;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000a136b
@property(readonly, copy, nonatomic) NSSet *entitledCapabilities; // @synthesize entitledCapabilities=_entitledCapabilities;
- (id)processBundleIdentifier;	// IMP=0x00100000000a1349
- (id)processName;	// IMP=0x00100000000a1338
- (int)processIdentifier;	// IMP=0x00100000000a1328
- (void)invalidate;	// IMP=0x00100000000a12eb
- (id)valueForEntitlement:(id)arg1;	// IMP=0x00100000000a1268
- (_Bool)isEntitledForCapability:(id)arg1;	// IMP=0x00100000000a11f1
- (void)performBlockAfterCoalescing:(CDUnknownBlockType)arg1;	// IMP=0x00100000000a10f6
- (id)objectForBlock;	// IMP=0x00100000000a10a6
- (_Bool)isRemote;	// IMP=0x00100000000a109e
- (void)dealloc;	// IMP=0x00100000000a1060
@property(readonly, nonatomic) NSXPCConnection *connection;
- (id)propertiesDescription;	// IMP=0x00100000000a0f9f
- (id)initWithConnection:(id)arg1 queue:(id)arg2;	// IMP=0x00100000000a0c74

@end
