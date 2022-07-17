//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface DCBAASigner : NSObject
{
}

+ (id)sharedSigner;	// IMP=0x00000000000011e1
- (id)_attestationWithCertificates:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000001588
- (id)_signatureForData:(id)arg1 withReferenceKey:(struct __SecKey *)arg2 error:(id *)arg3;	// IMP=0x0000000000001382
- (void)signaturesForData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000012dc
- (void)signatureForData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000001236

@end
