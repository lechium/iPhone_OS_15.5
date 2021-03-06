//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Sleep/BSDescriptionProviding-Protocol.h>

@class NSString, NSXPCInterface;

@interface HKSPXPCConnectionInfo : NSObject <BSDescriptionProviding>
{
    NSString *_machServiceName;	// 8 = 0x8
    NSXPCInterface *_remoteObjectInterface;	// 16 = 0x10
    id _exportedObject;	// 24 = 0x18
    NSXPCInterface *_exportedObjectInterface;	// 32 = 0x20
    NSString *_lifecycleNotification;	// 40 = 0x28
    NSString *_requiredEntitlement;	// 48 = 0x30
    unsigned long long _options;	// 56 = 0x38
}

+ (id)infoForMachServiceName:(id)arg1 remoteObjectInterface:(id)arg2 exportedObject:(id)arg3 exportedObjectInterface:(id)arg4 lifecycleNotification:(id)arg5 requiredEntitlement:(id)arg6 options:(unsigned long long)arg7;	// IMP=0x000000000005323c
- (void).cxx_destruct;	// IMP=0x000000000005372a
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, copy, nonatomic) NSString *requiredEntitlement; // @synthesize requiredEntitlement=_requiredEntitlement;
@property(readonly, copy, nonatomic) NSString *lifecycleNotification; // @synthesize lifecycleNotification=_lifecycleNotification;
@property(readonly, nonatomic) NSXPCInterface *exportedObjectInterface; // @synthesize exportedObjectInterface=_exportedObjectInterface;
@property(readonly, nonatomic) id exportedObject; // @synthesize exportedObject=_exportedObject;
@property(readonly, nonatomic) NSXPCInterface *remoteObjectInterface; // @synthesize remoteObjectInterface=_remoteObjectInterface;
@property(readonly, copy, nonatomic) NSString *machServiceName; // @synthesize machServiceName=_machServiceName;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00000000000536d2
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000053682
- (id)succinctDescriptionBuilder;	// IMP=0x0000000000053506
- (id)succinctDescription;	// IMP=0x00000000000534b6
@property(readonly, copy) NSString *description;
- (id)initWithMachServiceName:(id)arg1 remoteObjectInterface:(id)arg2 exportedObject:(id)arg3 exportedObjectInterface:(id)arg4 lifecycleNotification:(id)arg5 requiredEntitlement:(id)arg6 options:(unsigned long long)arg7;	// IMP=0x0000000000053335

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

