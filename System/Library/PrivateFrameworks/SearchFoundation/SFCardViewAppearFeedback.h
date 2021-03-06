//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, SFCard;

@interface SFCardViewAppearFeedback
{
    unsigned int _level;	// 24 = 0x18
    SFCard *_card;	// 32 = 0x20
    NSString *_fbr;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001a1a38
- (void).cxx_destruct;	// IMP=0x00000000001a1a07
@property(copy, nonatomic) NSString *fbr; // @synthesize fbr=_fbr;
@property(nonatomic) unsigned int level; // @synthesize level=_level;
@property(retain, nonatomic) SFCard *card; // @synthesize card=_card;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001a18e2
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001a17d5
- (id)initWithCard:(id)arg1;	// IMP=0x00000000001a1753

@end

