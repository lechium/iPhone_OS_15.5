//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CLSScoreItem
{
    double _score;	// 8 = 0x8
    double _maxScore;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000087811
@property(nonatomic) double maxScore;
@property(nonatomic) double score;
- (id)dictionaryRepresentation;	// IMP=0x00000000000878fd
- (id)description;	// IMP=0x0000000000087819
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000008776e
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000876c8
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 score:(double)arg3 maxScore:(double)arg4;	// IMP=0x0000000000087668
- (id)initWithIdentifier:(id)arg1 title:(id)arg2;	// IMP=0x0000000000087639
- (id)_init;	// IMP=0x000000000008760a

@end
