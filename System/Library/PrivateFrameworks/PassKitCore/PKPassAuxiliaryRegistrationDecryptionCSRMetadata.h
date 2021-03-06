//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PKPassAuxiliaryRegistrationDecryptionCSRMetadata
{
    unsigned long long _decryptionSchemeVersion;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000d3d43
@property(readonly, nonatomic) unsigned long long decryptionSchemeVersion; // @synthesize decryptionSchemeVersion=_decryptionSchemeVersion;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000d3e01
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000d3d4b
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000d3c32

@end

