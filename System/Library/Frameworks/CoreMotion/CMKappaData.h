//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber;

@interface CMKappaData
{
    int fState;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000017d82b
@property(readonly, nonatomic) NSNumber *state;
- (id)description;	// IMP=0x000000000017d93f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000017d8e6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000017d897
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000017d833
- (void)dealloc;	// IMP=0x000000000017d7fc
- (id)initWithState:(int)arg1;	// IMP=0x000000000017d7b7

@end
