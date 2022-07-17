//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MSOID, NSData;

@interface MSAlgorithmIdentifier : NSObject
{
    MSOID *_algorithm;	// 8 = 0x8
    NSData *_parameters;	// 16 = 0x10
    struct AlgorithmIdentifier *_asn1AlgId;	// 24 = 0x18
}

+ (id)digestAlgorithmWithSignatureAlgorithm:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000003d5e
+ (id)algorithmIdentifierWithAsn1AlgId:(struct AlgorithmIdentifier *)arg1 error:(id *)arg2;	// IMP=0x0000000000003d2a
+ (id)algorithmIdentifierWithOID:(id)arg1;	// IMP=0x0000000000003ce1
- (void).cxx_destruct;	// IMP=0x000000000000467c
@property(readonly) struct AlgorithmIdentifier *asn1AlgId; // @synthesize asn1AlgId=_asn1AlgId;
@property(readonly) NSData *parameters; // @synthesize parameters=_parameters;
@property(readonly) MSOID *algorithm; // @synthesize algorithm=_algorithm;
- (void)dealloc;	// IMP=0x000000000000460b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000044b6
- (unsigned long long)hash;	// IMP=0x0000000000004424
- (id)signatureAlgorithmWithDigestAlgorithm:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000004206
- (id)initWithAsn1AlgId:(struct AlgorithmIdentifier *)arg1 error:(id *)arg2;	// IMP=0x0000000000004037
- (id)initDigestAlgorithmWithSignatureAlgorithm:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000003f87
- (id)initWithOID:(id)arg1 parameters:(id)arg2;	// IMP=0x0000000000003eda
- (id)initWithOID:(id)arg1;	// IMP=0x0000000000003db6
- (struct AlgorithmIdentifier *)encode;	// IMP=0x0000000000003b2b

@end
