//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PersonalizationPortrait/NSCopying-Protocol.h>
#import <PersonalizationPortrait/NSSecureCoding-Protocol.h>

@class PPLocation;

@interface PPScoredLocation : NSObject <NSCopying, NSSecureCoding>
{
    PPLocation *_location;	// 8 = 0x8
    double _score;	// 16 = 0x10
    double _sentimentScore;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000040eec
- (void).cxx_destruct;	// IMP=0x0000000000040edc
@property(readonly, nonatomic) double sentimentScore; // @synthesize sentimentScore=_sentimentScore;
@property(readonly, nonatomic) double score; // @synthesize score=_score;
@property(readonly, nonatomic) PPLocation *location; // @synthesize location=_location;
- (id)init;	// IMP=0x0000000000040eb6
- (unsigned long long)hash;	// IMP=0x0000000000040ded
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000040d85
- (_Bool)isEqualToScoredLocation:(id)arg1;	// IMP=0x0000000000040d17
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000040c89
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000040b9e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000040b93
- (id)initWithLocation:(id)arg1 score:(double)arg2 sentimentScore:(double)arg3;	// IMP=0x0000000000040a8f

@end

