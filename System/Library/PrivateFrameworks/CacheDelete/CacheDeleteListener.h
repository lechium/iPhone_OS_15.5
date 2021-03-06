//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CacheDelete/NSXPCListenerDelegate-Protocol.h>

@class NSMutableSet, NSString, NSXPCListener, Protocol;

@interface CacheDeleteListener : NSObject <NSXPCListenerDelegate>
{
    _Bool _isResumed;	// 8 = 0x8
    id _xObj;	// 16 = 0x10
    NSMutableSet *_requiredEntitlements;	// 24 = 0x18
    Protocol *_protocol;	// 32 = 0x20
    NSXPCListener *_listener;	// 40 = 0x28
    NSString *_serviceName;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000001daa5
@property(nonatomic) _Bool isResumed; // @synthesize isResumed=_isResumed;
@property(retain, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property(retain, nonatomic) Protocol *protocol; // @synthesize protocol=_protocol;
@property(retain, nonatomic) NSMutableSet *requiredEntitlements; // @synthesize requiredEntitlements=_requiredEntitlements;
@property(retain, nonatomic) id xObj; // @synthesize xObj=_xObj;
- (void)resume;	// IMP=0x000000000001d990
- (void)suspend;	// IMP=0x000000000001d917
- (void)addRequiredEntitlement:(id)arg1;	// IMP=0x000000000001d805
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000000001d46c
- (id)initWithName:(id)arg1 listener:(id)arg2 protocol:(id)arg3 exportedObj:(id)arg4 isExtension:(_Bool)arg5;	// IMP=0x000000000001d1f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

