//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, OADBulletColor, OADBulletFont, OADBulletProperties, OADBulletSize, OADTextSpacing;

__attribute__((visibility("hidden")))
@interface OADParagraphProperties
{
    int mLevel;	// 160 = 0xa0
    OADBulletSize *mBulletSize;	// 168 = 0xa8
    OADBulletColor *mBulletColor;	// 176 = 0xb0
    OADBulletFont *mBulletFont;	// 184 = 0xb8
    OADBulletProperties *mBulletProperties;	// 192 = 0xc0
    OADTextSpacing *mLineSpacing;	// 200 = 0xc8
    OADTextSpacing *mBeforeSpacing;	// 208 = 0xd0
    OADTextSpacing *mAfterSpacing;	// 216 = 0xd8
    NSArray *mTabStops;	// 224 = 0xe0
    float mLeftMargin;	// 232 = 0xe8
    float mRightMargin;	// 236 = 0xec
    float mIndent;	// 240 = 0xf0
    float mDefaultTab;	// 244 = 0xf4
    int mBulletCharSet;	// 248 = 0xf8
    unsigned char mAlign;	// 252 = 0xfc
    unsigned char mWrap;	// 253 = 0xfd
    unsigned char mFontAlign;	// 254 = 0xfe
    unsigned int mIsLatinLineBreak:1;	// 255 = 0xff
    unsigned int mIsHangingPunctuation:1;	// 255 = 0xff
    unsigned int mHasLevel:1;	// 255 = 0xff
    unsigned int mHasLeftMargin:1;	// 255 = 0xff
    unsigned int mHasRightMargin:1;	// 255 = 0xff
    unsigned int mHasIndent:1;	// 255 = 0xff
    unsigned int mHasDefaultTab:1;	// 255 = 0xff
    unsigned int mHasBulletCharSet:1;	// 255 = 0xff
    unsigned int mHasAlign:1;	// 256 = 0x100
    unsigned int mHasWrap:1;	// 256 = 0x100
    unsigned int mHasFontAlign:1;	// 256 = 0x100
    unsigned int mHasIsLatinLineBreak:1;	// 256 = 0x100
    unsigned int mHasIsHangingPunctuation:1;	// 256 = 0x100
}

+ (id)defaultProperties;	// IMP=0x000000000001f04e
- (void).cxx_destruct;	// IMP=0x000000000031e5a5
- (id)description;	// IMP=0x000000000031e567
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000020a72b
- (unsigned long long)hash;	// IMP=0x000000000020b3d5
- (void)removeUnnecessaryOverrides;	// IMP=0x0000000000030ed2
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;	// IMP=0x000000000031d491
- (_Bool)isAnythingOverridden;	// IMP=0x000000000031d2a3
- (void)overrideWithProperties:(id)arg1;	// IMP=0x0000000000023e04
- (void)setBulletCharSet:(int)arg1;	// IMP=0x000000000000bc74
- (int)bulletCharSet;	// IMP=0x0000000000153f9a
- (_Bool)hasBulletCharSet;	// IMP=0x00000000000249c9
- (void)setBulletProperties:(id)arg1;	// IMP=0x000000000000bccb
- (id)bulletProperties;	// IMP=0x000000000002497f
- (_Bool)hasBulletProperties;	// IMP=0x0000000000024958
- (void)setBulletFont:(id)arg1;	// IMP=0x000000000000bcb7
- (id)bulletFont;	// IMP=0x000000000002490e
- (_Bool)hasBulletFont;	// IMP=0x00000000000248e7
- (void)setBulletColor:(id)arg1;	// IMP=0x000000000000bca3
- (id)bulletColor;	// IMP=0x000000000002489d
- (_Bool)hasBulletColor;	// IMP=0x0000000000024876
- (void)setBulletSize:(id)arg1;	// IMP=0x000000000000bc8f
- (id)bulletSize;	// IMP=0x000000000002482c
- (_Bool)hasBulletSize;	// IMP=0x0000000000024805
- (void)setIsHangingPunctuation:(_Bool)arg1;	// IMP=0x000000000000bc4f
- (_Bool)isHangingPunctuation;	// IMP=0x000000000031d22b
- (_Bool)hasIsHangingPunctuation;	// IMP=0x00000000000247df
- (void)setIsLatinLineBreak:(_Bool)arg1;	// IMP=0x000000000000bc2c
- (_Bool)isLatinLineBreak;	// IMP=0x000000000031d1ea
- (_Bool)hasIsLatinLineBreak;	// IMP=0x00000000000247b9
- (void)setFontAlign:(unsigned char)arg1;	// IMP=0x000000000000bc11
- (unsigned char)fontAlign;	// IMP=0x000000000031d1ab
- (_Bool)hasFontAlign;	// IMP=0x0000000000024793
- (void)setWrap:(unsigned char)arg1;	// IMP=0x000000000000bbf6
- (unsigned char)wrap;	// IMP=0x000000000031d16c
- (_Bool)hasWrap;	// IMP=0x000000000002476d
- (void)setDefaultTab:(float)arg1;	// IMP=0x000000000000bbd9
- (float)defaultTab;	// IMP=0x0000000000024724
- (_Bool)hasDefaultTab;	// IMP=0x00000000000246fe
- (void)setAlign:(unsigned char)arg1;	// IMP=0x000000000000bbbe
- (unsigned char)align;	// IMP=0x00000000000246bf
- (_Bool)hasAlign;	// IMP=0x0000000000024699
- (void)setIndent:(float)arg1;	// IMP=0x000000000000bba1
- (float)indent;	// IMP=0x0000000000024650
- (_Bool)hasIndent;	// IMP=0x000000000002462a
- (void)setLevel:(int)arg1;	// IMP=0x000000000000bb86
- (int)level;	// IMP=0x00000000000245ec
- (_Bool)hasLevel;	// IMP=0x00000000000245c6
- (void)setRightMargin:(float)arg1;	// IMP=0x000000000000bb69
- (float)rightMargin;	// IMP=0x00000000001049e0
- (_Bool)hasRightMargin;	// IMP=0x000000000002455d
- (double)nonOveridenLeftMargin;	// IMP=0x00000000000ace96
- (void)setLeftMargin:(float)arg1;	// IMP=0x000000000000bb4c
- (float)leftMargin;	// IMP=0x0000000000023d7e
- (_Bool)hasLeftMargin;	// IMP=0x0000000000023dde
- (void)setTabStops:(id)arg1;	// IMP=0x000000000031d158
- (id)tabStops;	// IMP=0x00000000001540a1
- (_Bool)hasTabStops;	// IMP=0x0000000000024536
- (void)setAfterSpacing:(id)arg1;	// IMP=0x000000000000bb38
- (id)afterSpacing;	// IMP=0x00000000000244ec
- (_Bool)hasAfterSpacing;	// IMP=0x00000000000244c5
- (void)setBeforeSpacing:(id)arg1;	// IMP=0x000000000000bb24
- (id)beforeSpacing;	// IMP=0x000000000002447b
- (_Bool)hasBeforeSpacing;	// IMP=0x0000000000024454
- (void)setLineSpacing:(id)arg1;	// IMP=0x000000000000bace
- (id)lineSpacing;	// IMP=0x000000000002440a
- (_Bool)hasLineSpacing;	// IMP=0x00000000000243e3
- (id)initWithDefaults;	// IMP=0x000000000000ac9c
- (id)init;	// IMP=0x000000000001f01f

@end
