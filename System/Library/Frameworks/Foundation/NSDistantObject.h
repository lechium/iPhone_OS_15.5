//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSCoding-Protocol.h>

@class NSConnection;

@interface NSDistantObject <NSCoding>
{
    id _knownSelectors;	// 8 = 0x8
    unsigned long long _wireCount;	// 16 = 0x10
    unsigned long long _refCount;	// 24 = 0x18
    id _proto;	// 32 = 0x20
    unsigned short ___2;	// 40 = 0x28
    unsigned char ___1;	// 42 = 0x2a
    unsigned char _wireType;	// 43 = 0x2b
    id _remoteClass;	// 48 = 0x30
}

+ (id)newDistantObjectWithCoder:(id)arg1;	// IMP=0x00000000000529e4
+ (id)proxyWithLocal:(id)arg1 connection:(id)arg2;	// IMP=0x00000000000517ae
+ (id)proxyWithTarget:(id)arg1 connection:(id)arg2;	// IMP=0x0000000000051786
+ (void)initialize;	// IMP=0x000000000004ff54
+ (void)_enableLogging:(_Bool)arg1;	// IMP=0x000000000004ff48
- (struct _NSZone *)zone;	// IMP=0x00000000000534aa
- (id)mutableCopy;	// IMP=0x0000000000053400
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000053354
- (id)copy;	// IMP=0x00000000000532aa
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000531fe
- (void)appendFormat:(id)arg1;	// IMP=0x00000000000530d0
- (id)stringByAppendingFormat:(id)arg1;	// IMP=0x0000000000052f85
- (id)description;	// IMP=0x0000000000052ee1
- (unsigned long long)hash;	// IMP=0x0000000000052e3d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000052d85
- (Class)class;	// IMP=0x0000000000052d7b
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000052d27
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000525c4
- (Class)classForCoder;	// IMP=0x0000000000052556
- (void)retainWireCount;	// IMP=0x00000000000524b3
- (oneway void)release;	// IMP=0x000000000005234c
- (void)dealloc;	// IMP=0x00000000000522a0
- (_Bool)_isDeallocating;	// IMP=0x000000000005226b
- (_Bool)_tryRetain;	// IMP=0x0000000000052225
- (unsigned long long)retainCount;	// IMP=0x0000000000052211
- (id)retain;	// IMP=0x00000000000521a4
- (void)_releaseWireCount:(unsigned long long)arg1;	// IMP=0x00000000000520eb
- (void)forwardInvocation:(id)arg1;	// IMP=0x0000000000051f7b
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x00000000000519a3
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x0000000000051827
- (id)protocolForProxy;	// IMP=0x0000000000051816
- (void)setProtocolForProxy:(id)arg1;	// IMP=0x0000000000051805
@property(readonly, retain) NSConnection *connectionForProxy;
- (id)initWithLocal:(id)arg1 connection:(id)arg2;	// IMP=0x00000000000517be
- (id)initWithTarget:(id)arg1 connection:(id)arg2;	// IMP=0x000000000005178e

@end

