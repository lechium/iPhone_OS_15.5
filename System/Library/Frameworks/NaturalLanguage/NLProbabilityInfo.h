//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NaturalLanguage/NSCopying-Protocol.h>
#import <NaturalLanguage/NSSecureCoding-Protocol.h>

@interface NLProbabilityInfo : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _isValid;	// 8 = 0x8
    double _probability;	// 16 = 0x10
    double _log10Probability;	// 24 = 0x18
    unsigned long long _probabilityFlags;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000013c4f
@property(readonly, nonatomic) unsigned long long probabilityFlags; // @synthesize probabilityFlags=_probabilityFlags;
@property(readonly, nonatomic) _Bool isValid; // @synthesize isValid=_isValid;
@property(readonly, nonatomic) double log10Probability; // @synthesize log10Probability=_log10Probability;
@property(readonly, nonatomic) double probability; // @synthesize probability=_probability;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000013b43
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000013a4f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000013956
- (unsigned long long)hash;	// IMP=0x00000000000138df
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000138d4
- (id)description;	// IMP=0x0000000000013899
- (id)initWithInvalidProbability;	// IMP=0x0000000000013860
- (id)initWithLog10Probability:(double)arg1 flags:(unsigned long long)arg2;	// IMP=0x00000000000137f7
- (id)initWithProbability:(double)arg1 flags:(unsigned long long)arg2;	// IMP=0x0000000000013793

@end

