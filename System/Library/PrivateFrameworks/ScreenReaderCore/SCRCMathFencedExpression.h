//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface SCRCMathFencedExpression
{
    NSString *_openString;	// 32 = 0x20
    NSString *_closeString;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000012d75
@property(copy, nonatomic) NSString *closeString; // @synthesize closeString=_closeString;
@property(copy, nonatomic) NSString *openString; // @synthesize openString=_openString;
- (id)latexDescriptionInMathMode:(_Bool)arg1;	// IMP=0x0000000000012bd8
- (id)mathMLAttributes;	// IMP=0x0000000000012aed
- (id)mathMLTag;	// IMP=0x0000000000012ae0
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2;	// IMP=0x000000000001286e
- (id)speakableSegmentsWithSpeakingStyle:(long long)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3;	// IMP=0x00000000000125b7
- (id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(_Bool)arg2;	// IMP=0x000000000001234b
- (unsigned long long)fractionLevel;	// IMP=0x00000000000122be
- (id)_treePositionForBinomialCoefficientContentWithOuterTreePosition:(id)arg1;	// IMP=0x00000000000122a7
- (id)_binomialCoefficientContent;	// IMP=0x0000000000012257
- (_Bool)_isBinomialCoefficient;	// IMP=0x0000000000012126
- (id)description;	// IMP=0x000000000001205c
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000011f33

@end

