//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreUI/CUIStructuredThemeStorage-Protocol.h>
#import <CoreUI/CUIStructuredThemeStorage2-Protocol.h>

@class CUICommonAssetStorage, NSCache, NSDictionary, NSMutableDictionary, NSSet, NSString;

@interface CUIStructuredThemeStore : NSObject <CUIStructuredThemeStorage, CUIStructuredThemeStorage2>
{
    NSMutableDictionary *_cache;	// 8 = 0x8
    CUICommonAssetStorage *_store;	// 16 = 0x10
    struct os_unfair_lock_s _cacheLock;	// 24 = 0x18
    struct os_unfair_lock_s _storeLock;	// 28 = 0x1c
    unsigned long long _themeIndex;	// 32 = 0x20
    NSString *_bundleID;	// 40 = 0x28
    NSCache *_namedRenditionKeyCache;	// 48 = 0x30
    CDUnknownFunctionPointerType _attributePresent;	// 56 = 0x38
    unsigned int _mainBundle:1;	// 64 = 0x40
    NSDictionary *_aliasDictionary;	// 72 = 0x48
    NSSet *_legacyFlippableSet;	// 80 = 0x50
    NSCache *_nameCache;	// 88 = 0x58
}

@property(readonly, copy) NSString *debugDescription;
- (id)store;	// IMP=0x000000000005f479
- (unsigned long long)themeIndex;	// IMP=0x000000000005f46f
- (void)setThemeIndex:(unsigned long long)arg1;	// IMP=0x000000000005f465
- (void)setBundleID:(id)arg1;	// IMP=0x000000000005f43b
- (id)bundleID;	// IMP=0x000000000005f431
- (_Bool)imageNamedShouldFlip:(id)arg1;	// IMP=0x000000000005f316
- (id)mappedAliases;	// IMP=0x000000000005f2d4
- (id)aliasForName:(id)arg1;	// IMP=0x000000000005f20e
- (_Bool)localizationWorkaroundForKeyList:(const struct _renditionkeytoken *)arg1;	// IMP=0x000000000005f01a
- (void)clearRenditionCache;	// IMP=0x000000000005efdf
- (_Bool)caAllowSubimageOfImage:(struct CGImage *)arg1;	// IMP=0x000000000005ef85
- (_Bool)_subImageTexturingShouldBeSupported;	// IMP=0x000000000005eefc
@property _Bool mainBundle;
- (id)renditionInfoForIdentifier:(unsigned short)arg1;	// IMP=0x000000000005eeb2
- (unsigned short)localizationIdentifierForName:(id)arg1;	// IMP=0x000000000005ee9c
- (id)localizations;	// IMP=0x000000000005ee86
- (id)appearances;	// IMP=0x000000000005ee70
- (id)nameForAppearanceIdentifier:(unsigned short)arg1;	// IMP=0x000000000005ee5a
- (unsigned short)appearanceIdentifierForName:(id)arg1;	// IMP=0x000000000005ee44
- (id)catalogGlobals;	// IMP=0x000000000005ed5f
- (id)imagesWithName:(id)arg1;	// IMP=0x000000000005ea9b
- (_Bool)containsLookupForName:(id)arg1;	// IMP=0x000000000005ea80
- (id)allImageNames;	// IMP=0x000000000005ea6a
- (id)renditionNameForKeyList:(struct _renditionkeytoken *)arg1;	// IMP=0x000000000005ea54
- (const struct _renditionkeytoken *)renditionKeyForName:(id)arg1 cursorHotSpot:(struct CGPoint *)arg2;	// IMP=0x000000000005e8d0
- (const struct _renditionkeytoken *)renditionKeyForName:(id)arg1;	// IMP=0x000000000005e8bc
- (_Bool)canGetRenditionWithKey:(const struct _renditionkeytoken *)arg1;	// IMP=0x000000000005e68f
- (id)renditionWithKey:(const struct _renditionkeytoken *)arg1 usingKeySignature:(id)arg2;	// IMP=0x000000000005e431
- (id)renditionWithKey:(const struct _renditionkeytoken *)arg1;	// IMP=0x000000000005e41d
- (id)lookupAssetForKey:(const struct _renditionkeytoken *)arg1;	// IMP=0x000000000005e1a8
- (id)debugDescriptionForKeyList:(const struct _renditionkeytoken *)arg1;	// IMP=0x000000000005da59
- (const struct _renditionkeyfmt *)renditionKeyFormat;	// IMP=0x000000000005da12
- (id)convertRenditionKeyToKeyData:(const struct _renditionkeytoken *)arg1;	// IMP=0x000000000005d9f8
- (id)_newRenditionKeyDataFromKey:(const struct _renditionkeytoken *)arg1;	// IMP=0x000000000005d8e2
- (_Bool)_formatStorageKeyArrayBytes:(void *)arg1 length:(unsigned long long)arg2 fromKey:(const struct _renditionkeytoken *)arg3;	// IMP=0x000000000005d7dc
- (void)_updateKeyWithCompatibilityMapping:(struct _renditionkeytoken *)arg1;	// IMP=0x000000000005d78a
- (double)fontSizeForFontSizeType:(id)arg1;	// IMP=0x000000000005d739
- (_Bool)getFontName:(id *)arg1 baselineOffset:(double *)arg2 forFontType:(id)arg3;	// IMP=0x000000000005d6c4
- (_Bool)hasPhysicalColorWithName:(id)arg1;	// IMP=0x000000000005d66a
- (_Bool)getPhysicalColor:(struct _colordef *)arg1 withName:(id)arg2;	// IMP=0x000000000005d601
- (id)defaultAppearanceName;	// IMP=0x000000000005d5b6
- (unsigned int)authoredWithSchemaVersion;	// IMP=0x000000000005d5a0
- (unsigned int)distilledInCoreUIVersion;	// IMP=0x000000000005d58a
- (unsigned int)documentFormatVersion;	// IMP=0x000000000005d574
- (id)themeStore;	// IMP=0x000000000005d56a
- (void)dealloc;	// IMP=0x000000000005d4fd
- (id)initWithBytes:(const void *)arg1 length:(unsigned long long)arg2;	// IMP=0x000000000005d46b
- (id)initWithURL:(id)arg1;	// IMP=0x000000000005d437
- (id)initWithPath:(id)arg1;	// IMP=0x000000000005d3af
- (void)_commonInit;	// IMP=0x000000000005d306
- (_Bool)assetExistsForKey:(const struct _renditionkeytoken *)arg1;	// IMP=0x000000000005d22e
- (id)keySignatureForKey:(const struct _renditionkeytoken *)arg1;	// IMP=0x000000000005d18c
- (id)copyLookupKeySignatureForKey:(const struct _renditionkeytoken *)arg1;	// IMP=0x000000000005d0a6
- (id)copyKeySignatureForKey:(const struct _renditionkeytoken *)arg1 withBytesNoCopy:(char *)arg2 length:(unsigned long long)arg3;	// IMP=0x000000000005d019
- (id)baseGradationKeySignatureForKey:(const struct _renditionkeytoken *)arg1;	// IMP=0x000000000005cf74
- (const struct _renditionkeyattributeindex *)keyAttributeIndex;	// IMP=0x000000000005cf55
- (const struct _renditionkeyfmt *)keyFormat;	// IMP=0x000000000005ceae
- (_Bool)usesCUISystemThemeRenditionKey;	// IMP=0x000000000005ce09
- (long long)maximumRenditionKeyTokenCount;	// IMP=0x000000000005cd61
- (unsigned long long)colorSpaceID;	// IMP=0x000000000005cd3c

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

