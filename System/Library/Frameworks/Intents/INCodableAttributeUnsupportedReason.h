//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface INCodableAttributeUnsupportedReason
{
    NSString *_code;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000011d9c
- (void).cxx_destruct;	// IMP=0x0000000000011d89
@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000011ccc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000011c31
- (id)dictionaryRepresentationWithLocalizer:(id)arg1;	// IMP=0x0000000000011aee
- (void)updateWithDictionary:(id)arg1;	// IMP=0x0000000000011a39
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000011958
- (unsigned long long)hash;	// IMP=0x00000000000118d7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000011860
@property(readonly, copy, nonatomic) NSString *predicateFormat;
- (id)__INCodableDescriptionCodeKey;	// IMP=0x0000000000011f04
- (id)__INIntentResponseCodableDescriptionCodeKey;	// IMP=0x0000000000011e54
- (id)__INTypeCodableDescriptionCodeKey;	// IMP=0x0000000000011da4
- (id)__INCodableDescriptionKey;	// IMP=0x0000000000011f5c
- (id)__INIntentResponseCodableDescriptionKey;	// IMP=0x0000000000011eac
- (id)__INTypeCodableDescriptionKey;	// IMP=0x0000000000011dfc
- (id)__INCodableDescriptionFormatStringKey;	// IMP=0x000000000002399a
- (id)__INCodableDescriptionFormatStringIDKey;	// IMP=0x0000000000023892
- (id)__INCodableDescriptionFormatStringLanguageCodeKey;	// IMP=0x000000000002383a
- (id)__INCodableDescriptionFormatStringDictionaryKey;	// IMP=0x0000000000023942
- (id)__INCodableDescriptionFormatStringDictionaryLanguageCodeKey;	// IMP=0x00000000000238ea

@end
