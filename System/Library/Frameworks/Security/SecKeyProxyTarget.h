//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Security/SecKeyProxyProtocol-Protocol.h>

@class NSData, SecKeyProxy;

__attribute__((visibility("hidden")))
@interface SecKeyProxyTarget : NSObject <SecKeyProxyProtocol>
{
    id _key;	// 8 = 0x8
    NSData *_certificate;	// 16 = 0x10
    SecKeyProxy *_publicKeyProxy;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000b89f1
- (void)performOperation:(long long)arg1 algorithm:(id)arg2 parameters:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00000000000b87d8
- (void)getPublicKey:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b8714
- (void)getAlgorithmIDWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b86c0
- (void)getDescriptionWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b8599
- (void)getExternalRepresentationWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b851d
- (void)getAttributesWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b84b1
- (void)getBlockSizeWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b845d
- (void)initializeWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b844b
@property(readonly, nonatomic) struct __SecKey *key;
- (id)initWithKey:(id)arg1 certificate:(id)arg2;	// IMP=0x00000000000b83a8

@end

