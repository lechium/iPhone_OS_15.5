//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDate;

@interface MSDecodeOptions : NSObject
{
    _Bool _verifySignatures;	// 8 = 0x8
    _Bool _verifySigners;	// 9 = 0x9
    NSArray *_signerPolicies;	// 16 = 0x10
    NSDate *_verifyTime;	// 24 = 0x18
    struct __SecIdentity *_identity;	// 32 = 0x20
    NSData *_key;	// 40 = 0x28
    NSData *_LAContext;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000008adc
@property(retain) NSData *LAContext; // @synthesize LAContext=_LAContext;
@property(retain) NSData *key; // @synthesize key=_key;
@property struct __SecIdentity *identity; // @synthesize identity=_identity;
@property(retain) NSDate *verifyTime; // @synthesize verifyTime=_verifyTime;
@property(retain) NSArray *signerPolicies; // @synthesize signerPolicies=_signerPolicies;
@property _Bool verifySigners; // @synthesize verifySigners=_verifySigners;
@property _Bool verifySignatures; // @synthesize verifySignatures=_verifySignatures;
- (void)dealloc;	// IMP=0x00000000000089cd
- (id)initWithDecryptionKey:(id)arg1;	// IMP=0x0000000000008973
- (id)initWithDecryptionIdentity:(struct __SecIdentity *)arg1;	// IMP=0x000000000000893b
- (id)init;	// IMP=0x00000000000088cd

@end

