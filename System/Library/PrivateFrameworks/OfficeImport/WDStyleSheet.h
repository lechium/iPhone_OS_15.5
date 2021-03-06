//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, WDCharacterProperties, WDDocument, WDParagraphProperties, WDStyle;

__attribute__((visibility("hidden")))
@interface WDStyleSheet : NSObject
{
    NSMutableDictionary *mStyleDictionary;	// 8 = 0x8
    WDCharacterProperties *mDefaultCharacterProperties;	// 16 = 0x10
    WDParagraphProperties *mDefaultParagraphProperties;	// 24 = 0x18
    WDStyle *mDefaultParagraphStyle;	// 32 = 0x20
    WDStyle *mDefaultCharacterStyle;	// 40 = 0x28
    WDStyle *mDefaultTableStyle;	// 48 = 0x30
    WDStyle *mDefaultListStyle;	// 56 = 0x38
    NSMutableArray *mStylesInOrder;	// 64 = 0x40
    NSMutableDictionary *mIdDictionaryForName;	// 72 = 0x48
    WDDocument *mDocument;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000407623
@property(readonly) __weak WDDocument *document; // @synthesize document=mDocument;
- (id)description;	// IMP=0x00000000004075e5
- (id)allAliasesForStyleId:(id)arg1 name:(id)arg2;	// IMP=0x0000000000407347
- (id)styleIdToName:(id)arg1;	// IMP=0x00000000004072c9
- (id)styleNameToUniqueId:(id)arg1;	// IMP=0x00000000004071f0
- (id)styleIdForName:(id)arg1;	// IMP=0x00000000000cda94
- (void)setDefaultListStyle:(id)arg1;	// IMP=0x00000000000ce04f
- (id)defaultListStyle;	// IMP=0x00000000001a470b
- (void)setDefaultTableStyle:(id)arg1;	// IMP=0x00000000000ce03e
- (id)defaultTableStyle;	// IMP=0x00000000004071e2
- (void)setDefaultCharacterStyle:(id)arg1;	// IMP=0x00000000000ce02d
- (id)defaultCharacterStyle;	// IMP=0x00000000004071d4
- (void)setDefaultParagraphStyle:(id)arg1;	// IMP=0x00000000000cdf7b
- (id)defaultParagraphStyle;	// IMP=0x000000000019e059
- (void)createDefaultStyles;	// IMP=0x0000000000406b20
- (id)defaultParagraphProperties;	// IMP=0x0000000000217d4b
- (id)defaultCharacterProperties;	// IMP=0x00000000000d1041
- (void)removeStyleWithId:(id)arg1;	// IMP=0x0000000000406a3e
- (void)setName:(id)arg1 forId:(id)arg2;	// IMP=0x00000000000cdeea
- (void)addStyle:(id)arg1 name:(id)arg2;	// IMP=0x00000000001a1d8a
- (id)createStyleWithName:(id)arg1 type:(int)arg2;	// IMP=0x00000000004069c6
- (id)createStyleWithId:(id)arg1 type:(int)arg2;	// IMP=0x00000000000cdb31
- (id)paragraphStyleWithStartingName:(id)arg1;	// IMP=0x0000000000406836
- (id)styleWithName:(id)arg1;	// IMP=0x00000000004067c3
- (id)styleWithId:(id)arg1;	// IMP=0x00000000000cdb0b
- (unsigned long long)styleCount;	// IMP=0x00000000004067ad
- (id)styles;	// IMP=0x0000000000406797
- (id)initWithDocument:(id)arg1;	// IMP=0x00000000000bb7d5
- (void)initializeDefaultProperties;	// IMP=0x00000000000bb8cc

@end

