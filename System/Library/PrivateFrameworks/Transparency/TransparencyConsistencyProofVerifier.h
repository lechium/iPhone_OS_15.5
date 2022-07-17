//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TransparencyTrustedKeyStore;

@interface TransparencyConsistencyProofVerifier : NSObject
{
    TransparencyTrustedKeyStore *_trustedKeyStore;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000031615
@property(retain) TransparencyTrustedKeyStore *trustedKeyStore; // @synthesize trustedKeyStore=_trustedKeyStore;
- (unsigned long long)verifyConsistencyProof:(id)arg1 startLogHead:(id)arg2 endLogHead:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000031356
- (_Bool)verifyConsistencyProof:(id)arg1 startHash:(id)arg2 startSize:(unsigned long long)arg3 endHash:(id)arg4 endSize:(unsigned long long)arg5 error:(id *)arg6;	// IMP=0x0000000000030b34
- (id)initWithTrustedKeyStore:(id)arg1;	// IMP=0x0000000000030ac9

@end
