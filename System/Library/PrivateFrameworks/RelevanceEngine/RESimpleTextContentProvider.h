//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface RESimpleTextContentProvider
{
    NSString *_text;	// 8 = 0x8
}

+ (id)textContentProviderWithText:(id)arg1;	// IMP=0x00000000000a1eb9
- (void).cxx_destruct;	// IMP=0x00000000000a21c3
@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000a2125
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000a20fb
- (id)clockKitTextProviderRepresentation;	// IMP=0x00000000000a20cc
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a2035
- (unsigned long long)hash;	// IMP=0x00000000000a2018
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a1fc8
- (id)attributedStringRepresentation;	// IMP=0x00000000000a1f7c
- (id)initWithText:(id)arg1;	// IMP=0x00000000000a1f02
- (id)contentEncodedString;	// IMP=0x0000000000102e59

@end
