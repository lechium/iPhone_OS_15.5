//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableString, WDCharacterProperties, WDDocument, WDOfficeArt, WDParagraphProperties;

__attribute__((visibility("hidden")))
@interface WDListLevel : NSObject
{
    WDDocument *mDocument;	// 8 = 0x8
    WDParagraphProperties *mParagraphProperties;	// 16 = 0x10
    WDCharacterProperties *mCharacterProperties;	// 24 = 0x18
    WDOfficeArt *mImage;	// 32 = 0x20
    long long mStartNumber;	// 40 = 0x28
    int mNumberFormat;	// 48 = 0x30
    _Bool mRestartNumbering;	// 52 = 0x34
    long long mRestartLevel;	// 56 = 0x38
    _Bool mLegal;	// 64 = 0x40
    int mSuffix;	// 68 = 0x44
    NSMutableString *mText;	// 72 = 0x48
    _Bool mLegacy;	// 80 = 0x50
    long long mLegacySpace;	// 88 = 0x58
    long long mLegacyIndent;	// 96 = 0x60
    int mJustification;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000000003fb46e
- (id)description;	// IMP=0x00000000003fb430
- (id)characterProperties;	// IMP=0x00000000000d2b5b
- (id)paragraphProperties;	// IMP=0x00000000000d2b4d
- (_Bool)justificationOverridden;	// IMP=0x00000000003fb428
- (void)setJustification:(int)arg1;	// IMP=0x00000000000d2c4b
- (int)justification;	// IMP=0x00000000003fb41f
- (void)setLegacyIndent:(long long)arg1;	// IMP=0x00000000000d2c41
- (long long)legacyIndent;	// IMP=0x00000000003fb415
- (void)setLegacySpace:(long long)arg1;	// IMP=0x00000000000d2c37
- (long long)legacySpace;	// IMP=0x00000000003fb40b
- (void)setLegacy:(_Bool)arg1;	// IMP=0x00000000000d2c2e
- (_Bool)legacy;	// IMP=0x00000000003fb402
- (_Bool)textOverridden;	// IMP=0x00000000003fb3fa
- (void)setText:(id)arg1;	// IMP=0x00000000000d2c17
- (id)text;	// IMP=0x00000000000f4aaa
- (_Bool)suffixOverridden;	// IMP=0x00000000003fb3f2
- (void)setSuffix:(int)arg1;	// IMP=0x00000000000d2c0e
- (int)suffix;	// IMP=0x00000000003fb3e9
- (_Bool)legalOverridden;	// IMP=0x00000000003fb3e1
- (void)setLegal:(_Bool)arg1;	// IMP=0x00000000000d2c05
- (_Bool)legal;	// IMP=0x00000000003fb3d8
- (_Bool)restartLevelOverridden;	// IMP=0x00000000003fb3ca
- (void)setRestartLevel:(long long)arg1;	// IMP=0x00000000003fb3c0
- (long long)restartLevel;	// IMP=0x00000000003fb3b6
- (_Bool)restartNumberingOverridden;	// IMP=0x00000000003fb3ae
- (void)setRestartNumbering:(_Bool)arg1;	// IMP=0x00000000000d2bfc
- (_Bool)restartNumbering;	// IMP=0x00000000003fb3a5
- (void)setImage:(id)arg1;	// IMP=0x000000000016a996
- (id)image;	// IMP=0x00000000003fb397
- (_Bool)imageBulletOverridden;	// IMP=0x00000000003fb381
- (_Bool)imageBullet;	// IMP=0x00000000003fb36b
- (_Bool)numberFormatOverridden;	// IMP=0x00000000003fb363
- (void)setNumberFormat:(int)arg1;	// IMP=0x00000000000d2bf3
- (int)numberFormat;	// IMP=0x00000000000f4aa1
- (_Bool)startNumberOverridden;	// IMP=0x00000000003fb35b
- (void)setStartNumber:(long long)arg1;	// IMP=0x00000000000d2be9
- (long long)startNumber;	// IMP=0x00000000000f498b
- (id)initWithDocument:(id)arg1;	// IMP=0x00000000000d2607

@end

