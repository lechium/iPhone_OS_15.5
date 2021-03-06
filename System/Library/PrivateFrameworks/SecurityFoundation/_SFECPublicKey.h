//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _SFECKeySpecifier;

@interface _SFECPublicKey
{
    id _ecPublicKeyInternal;	// 32 = 0x20
}

+ (id)keyWithSubjectPublicKeyInfo:(id)arg1;	// IMP=0x000000000000b438
+ (id)_secKeyCreationAttributesForSpecifier:(id)arg1;	// IMP=0x000000000000aebd
+ (id)_specifierForSecKey:(struct __SecKey *)arg1;	// IMP=0x000000000000ad75
- (void).cxx_destruct;	// IMP=0x000000000000b48a
- (id)encodeSubjectPublicKeyInfo;	// IMP=0x000000000000b408
- (id)performWithCCKey:(CDUnknownBlockType)arg1;	// IMP=0x000000000000b0d4

// Remaining properties
@property(readonly, copy, nonatomic) _SFECKeySpecifier *keySpecifier; // @dynamic keySpecifier;

@end

