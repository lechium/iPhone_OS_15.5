//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

@interface VNSmartCamprint
{
    NSDictionary *_labelsAndConfidence;	// 8 = 0x8
}

+ (unsigned long long)confidenceTypeForOriginatingRequestSpecifier:(id)arg1;	// IMP=0x00000000000d22d8
+ (unsigned long long)currentSerializationVersion;	// IMP=0x00000000000d22cd
+ (unsigned long long)serializationMagicNumber;	// IMP=0x00000000000d22c2
+ (_Bool)shouldAssumeOriginatingRequestClassForHeaderSerializationVersion:(unsigned int)arg1;	// IMP=0x00000000000d22b6
+ (id)codingTypesToCodingKeys;	// IMP=0x00000000000d2286
+ (unsigned int)currentCodingVersion;	// IMP=0x00000000000d227b
+ (id)currentVersion;	// IMP=0x00000000000d226e
+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)arg1;	// IMP=0x00000000000d2261
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000d2259
- (void).cxx_destruct;	// IMP=0x00000000000d2246
@property(readonly, copy) NSDictionary *labelsAndConfidence; // @synthesize labelsAndConfidence=_labelsAndConfidence;
- (unsigned long long)serializeStateIntoData:(id)arg1 startingAtByteOffset:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000000000d1fd4
- (unsigned long long)serializedLength;	// IMP=0x00000000000d1f5d
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000d1e0d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000d1d8a
- (id)initWithData:(const void *)arg1 elementCount:(unsigned long long)arg2 elementType:(unsigned long long)arg3 lengthInBytes:(unsigned long long)arg4 labelsAndConfidence:(id)arg5 originatingRequestSpecifier:(id)arg6;	// IMP=0x00000000000d1c93
- (id)initWithData:(const void *)arg1 elementCount:(unsigned long long)arg2 elementType:(unsigned long long)arg3 lengthInBytes:(unsigned long long)arg4 labelsAndConfidence:(id)arg5 requestRevision:(unsigned long long)arg6;	// IMP=0x00000000000d1ba9

@end

