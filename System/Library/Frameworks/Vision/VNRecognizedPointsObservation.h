//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSNumber, VNRecognizedPointsSpecifier;

@interface VNRecognizedPointsObservation
{
    VNRecognizedPointsSpecifier *_specifier;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000d89ae
- (void).cxx_destruct;	// IMP=0x00000000000d8830
- (unsigned long long)hash;	// IMP=0x00000000000d87d6
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d8739
- (id)vn_cloneObject;	// IMP=0x00000000000d86c3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000d8640
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000d85a5
- (id)keypointsMultiArrayAndReturnError:(id *)arg1;	// IMP=0x00000000000d8588
- (id)recognizedPointForKey:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000d856b
- (id)recognizedPointsForGroupKey:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000d854e
@property(readonly) NSNumber *groupIdentifier;
@property(readonly, copy) NSArray *availableGroupKeys;
@property(readonly, copy) NSArray *availableKeys;
@property(readonly) VNRecognizedPointsSpecifier *recognizedPointsSpecifier;
- (id)initWithOriginatingRequestSpecifier:(id)arg1 keypointReturningObservation:(id)arg2;	// IMP=0x00000000000d82ae

@end
