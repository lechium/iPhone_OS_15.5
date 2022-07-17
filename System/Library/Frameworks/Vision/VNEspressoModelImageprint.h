//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Vision/NSCopying-Protocol.h>
#import <Vision/NSSecureCoding-Protocol.h>
#import <Vision/VNOriginatingRequestSpecifierProviding-Protocol.h>
#import <Vision/VNRequestRevisionProviding-Protocol.h>
#import <Vision/VNSerializing-Protocol.h>
#import <Vision/VNSerializingInternal-Protocol.h>

@class NSData, NSDictionary, NSString, VNRequestSpecifier;

@interface VNEspressoModelImageprint : NSObject <VNSerializingInternal, VNOriginatingRequestSpecifierProviding, NSSecureCoding, NSCopying, VNSerializing, VNRequestRevisionProviding>
{
    VNRequestSpecifier *_originatingRequestSpecifier;	// 8 = 0x8
    unsigned long long _elementType;	// 16 = 0x10
    NSData *_descriptorData;	// 24 = 0x18
    unsigned long long _elementCount;	// 32 = 0x20
    unsigned long long _lengthInBytes;	// 40 = 0x28
    unsigned long long _confidenceScoreType;	// 48 = 0x30
    NSString *_version;	// 56 = 0x38
}

+ (_Bool)shouldIgnoreLagecyLabelsAndConfidenceForHeaderSerializationVersion:(unsigned int)arg1;	// IMP=0x0000000000118fb8
+ (_Bool)shouldAssumeOriginatingRequestClassForHeaderSerializationVersion:(unsigned int)arg1;	// IMP=0x0000000000118fb0
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000118fa8
+ (id)originatingRequestSpecifierForRequestRevision:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x0000000000118d63
+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)arg1;	// IMP=0x0000000000118c89
+ (unsigned long long)confidenceTypeForOriginatingRequestSpecifier:(id)arg1;	// IMP=0x0000000000118c81
- (void).cxx_destruct;	// IMP=0x000000000011893d
@property(readonly) NSString *version; // @synthesize version=_version;
@property(readonly, nonatomic) unsigned long long confidenceScoreType; // @synthesize confidenceScoreType=_confidenceScoreType;
@property(readonly) unsigned long long lengthInBytes; // @synthesize lengthInBytes=_lengthInBytes;
@property(readonly) unsigned long long elementCount; // @synthesize elementCount=_elementCount;
@property(readonly) NSData *descriptorData; // @synthesize descriptorData=_descriptorData;
- (id)computeDistance:(id)arg1 withDistanceFunction:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000000011842b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000118420
- (_Bool)hasEquivalentDescriptorToImageprint:(id)arg1;	// IMP=0x000000000011822e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000117f8a
- (unsigned long long)hash;	// IMP=0x0000000000117e73
- (id)initWithState:(id)arg1 byteOffset:(unsigned long long *)arg2 error:(id *)arg3;	// IMP=0x000000000011783c
- (id)initWithState:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000117813
- (id)serializeStateAndReturnError:(id *)arg1;	// IMP=0x0000000000117777
- (unsigned long long)serializeStateIntoData:(id)arg1 startingAtByteOffset:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000117435
- (unsigned long long)_VNEspressoModelImageprintSerializedLength;	// IMP=0x00000000001173f9
@property(readonly, nonatomic) unsigned long long serializedLength;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001172d5
- (id)initWithCoder:(id)arg1 forCodingVersion:(unsigned int)arg2;	// IMP=0x0000000000116c44
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000116b7f
- (id)_initWithClassKeyMappedCoder:(id)arg1;	// IMP=0x000000000011672f
@property(readonly, copy) NSDictionary *labelsAndConfidence;
@property(readonly, nonatomic) unsigned long long requestRevision;
@property(readonly) VNRequestSpecifier *originatingRequestSpecifier;
@property(readonly) unsigned long long elementType;
- (id)initWithData:(const void *)arg1 elementCount:(unsigned long long)arg2 elementType:(unsigned long long)arg3 lengthInBytes:(unsigned long long)arg4 originatingRequestSpecifier:(id)arg5;	// IMP=0x00000000001164fd
- (id)initWithData:(const void *)arg1 elementCount:(unsigned long long)arg2 elementType:(unsigned long long)arg3 lengthInBytes:(unsigned long long)arg4 requestRevision:(unsigned long long)arg5;	// IMP=0x000000000011643b
- (id)initWithData:(const void *)arg1 elementCount:(unsigned long long)arg2 elementType:(unsigned long long)arg3 lengthInBytes:(unsigned long long)arg4 labelsAndConfidence:(id)arg5 requestRevision:(unsigned long long)arg6;	// IMP=0x0000000000116418

@end
