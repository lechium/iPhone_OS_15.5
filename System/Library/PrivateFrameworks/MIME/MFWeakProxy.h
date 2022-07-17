//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSProxy.h>

@class MFWeakReferenceHolder;

@interface MFWeakProxy : NSProxy
{
    Class _objectClass;	// 8 = 0x8
    MFWeakReferenceHolder *_weakRef;	// 16 = 0x10
    unsigned long long _hash;	// 24 = 0x18
}

+ (id)weakProxyForObject:(id)arg1;	// IMP=0x000000000001cf3f
- (void)forwardInvocation:(id)arg1;	// IMP=0x000000000001d436
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x000000000001d419
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x000000000001d3fc
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x000000000001d3a7
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x000000000001d2ea
- (id)description;	// IMP=0x000000000001d2d6
- (id)descriptionWithLocale:(id)arg1;	// IMP=0x000000000001d239
- (void)doesNotRecognizeSelector:(SEL)arg1;	// IMP=0x000000000001d1f6
- (unsigned long long)hash;	// IMP=0x000000000001d1e5
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001d0fe
- (_Bool)isProxy;	// IMP=0x000000000001d0f6
- (Class)class;	// IMP=0x000000000001d0e5
- (Class)superclass;	// IMP=0x000000000001d0d0
- (id)self;	// IMP=0x000000000001d0a1
- (void)dealloc;	// IMP=0x000000000001d05f
- (id)initWithObject:(id)arg1;	// IMP=0x000000000001cf6e

@end
