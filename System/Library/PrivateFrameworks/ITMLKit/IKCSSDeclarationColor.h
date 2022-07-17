//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IKColor;

@interface IKCSSDeclarationColor
{
    long long _sourceType;	// 88 = 0x58
    IKColor *_color;	// 96 = 0x60
}

+ (id)_stringForColor:(id)arg1 sourceType:(long long)arg2;	// IMP=0x00000000000487bd
- (void).cxx_destruct;	// IMP=0x000000000004ac63
@property(retain, nonatomic) IKColor *color; // @synthesize color=_color;
@property long long sourceType; // @synthesize sourceType=_sourceType;
- (id)_kolorFromParseObject:(id)arg1 sourceType:(long long *)arg2;	// IMP=0x000000000004a3dd
- (id)_linearGradientKolorFromParseFunction:(id)arg1;	// IMP=0x00000000000497a8
- (id)_keywordKolorFromParseToken:(id)arg1;	// IMP=0x0000000000049698
- (id)_colorFromParseObject:(id)arg1 sourceType:(long long *)arg2;	// IMP=0x00000000000494f6
- (id)description;	// IMP=0x0000000000049183
- (id)stringValue;	// IMP=0x000000000004910e
- (id)initWithParseDeclaration:(id)arg1 info:(id)arg2;	// IMP=0x0000000000048e64

@end
