//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class RBSProcessIdentity;

__attribute__((visibility("hidden")))
@interface RBSProcessIdentityPredicate
{
    RBSProcessIdentity *_identity;	// 8 = 0x8
}

+ (_Bool)supportsRBSXPCSecureCoding;	// IMP=0x0000000000033af2
- (void).cxx_destruct;	// IMP=0x0000000000033bbc
- (id)initWithRBSXPCCoder:(id)arg1;	// IMP=0x0000000000033b24
- (void)encodeWithRBSXPCCoder:(id)arg1;	// IMP=0x0000000000033afa
- (id)description;	// IMP=0x0000000000033a6e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000339b7
- (unsigned long long)hash;	// IMP=0x0000000000033961
- (id)processPredicate;	// IMP=0x0000000000033945
- (_Bool)matchesProcess:(id)arg1;	// IMP=0x0000000000033928

@end

