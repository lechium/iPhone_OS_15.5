//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString, VNImageprint;

@interface VNImageprintObservation
{
    _Bool _imageprintValid;	// 80 = 0x50
    VNImageprint *_imageprint;	// 88 = 0x58
    NSString *_imageprintVersion;	// 96 = 0x60
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000012e11d
+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)arg1;	// IMP=0x000000000012e110
+ (id)observationWithImageprint:(id)arg1 error:(id *)arg2;	// IMP=0x000000000012df07
- (void).cxx_destruct;	// IMP=0x000000000012ded6
@property(readonly, copy, nonatomic) NSString *imageprintVersion; // @synthesize imageprintVersion=_imageprintVersion;
@property(readonly, nonatomic) _Bool imageprintValid; // @synthesize imageprintValid=_imageprintValid;
@property(retain, nonatomic) VNImageprint *imageprint; // @synthesize imageprint=_imageprint;
@property(readonly, nonatomic) NSData *rawImageprintDescriptor;
- (id)initWithRawImageprintDescriptor:(id)arg1;	// IMP=0x000000000012de7a
- (_Bool)isImageprintValid;	// IMP=0x000000000012de72
- (float)calculateDistanceFromImageprintObservation:(id)arg1;	// IMP=0x000000000012dd62
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000012dc1b
- (unsigned long long)hash;	// IMP=0x000000000012db82
- (id)vn_cloneObject;	// IMP=0x000000000012dad5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000012da39
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000012d7b3

@end

