//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface RBSConstraintsAttribute
{
    unsigned long long _constraints;	// 8 = 0x8
}

+ (id)attributeWithConstraints:(unsigned long long)arg1;	// IMP=0x0000000000008f86
@property(readonly, nonatomic) unsigned long long constraints; // @synthesize constraints=_constraints;
- (id)initWithRBSXPCCoder:(id)arg1;	// IMP=0x000000000000917a
- (void)encodeWithRBSXPCCoder:(id)arg1;	// IMP=0x00000000000090fd
- (id)description;	// IMP=0x0000000000009079
- (unsigned long long)hash;	// IMP=0x0000000000009068
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000008fe3

@end

