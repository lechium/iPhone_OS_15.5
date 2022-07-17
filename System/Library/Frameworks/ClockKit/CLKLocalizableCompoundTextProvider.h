//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface CLKLocalizableCompoundTextProvider
{
    NSArray *_textProviders;	// 8 = 0x8
    NSString *_formatKey;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000043473
- (void).cxx_destruct;	// IMP=0x0000000000043cac
- (id)_arrayOfTextProviderJSONObjectRepresentations;	// IMP=0x0000000000043b11
- (id)JSONObjectRepresentation;	// IMP=0x0000000000043a5b
- (id)_initWithJSONObjectRepresentation:(id)arg1;	// IMP=0x000000000004366a
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004351a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004347b
- (unsigned long long)hash;	// IMP=0x00000000000433f9
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000043355
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000432d5
- (_Bool)_validate;	// IMP=0x000000000004315e
- (id)_sessionAttributedTextForIndex:(unsigned long long)arg1 withStyle:(id)arg2;	// IMP=0x0000000000043156
- (id)_localizedTextProviderWithBundle:(id)arg1 forLocalization:(id)arg2;	// IMP=0x0000000000042d34
- (id)_localizedStringForKey:(id)arg1 withBundle:(id)arg2 forLocalization:(id)arg3;	// IMP=0x00000000000429f9
- (id)initWithFormatKey:(id)arg1 textProviders:(id)arg2;	// IMP=0x000000000004277d

@end
