//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Vision/NSCopying-Protocol.h>
#import <Vision/NSSecureCoding-Protocol.h>
#import <Vision/VNObjectCloning-Protocol.h>
#import <Vision/VNRequestRevisionProviding-Protocol.h>

@class NSArray, VNClassificationObservation;

@interface VNFaceAttributeCategory : NSObject <VNObjectCloning, NSSecureCoding, NSCopying, VNRequestRevisionProviding>
{
    VNClassificationObservation *_mostLikelyLabel;	// 8 = 0x8
    NSArray *_allLabelsWithConfidences;	// 16 = 0x10
    unsigned long long _requestRevision;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000cb08a
- (void).cxx_destruct;	// IMP=0x00000000000cb062
@property(readonly, nonatomic) unsigned long long requestRevision; // @synthesize requestRevision=_requestRevision;
@property(copy, nonatomic) NSArray *allLabelsWithConfidences; // @synthesize allLabelsWithConfidences=_allLabelsWithConfidences;
@property(copy, nonatomic) VNClassificationObservation *label; // @synthesize label=_mostLikelyLabel;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000cae42
- (unsigned long long)hash;	// IMP=0x00000000000cad58
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000cacc2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000cac1a
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000caa53
- (id)initWithRequestRevision:(unsigned long long)arg1;	// IMP=0x00000000000ca9fa
- (void)_computeLabel;	// IMP=0x00000000000ca7c0

@end

