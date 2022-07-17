//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSSet;

@interface CUICommonAssetStorage : NSObject
{
    struct _carheader *_header;	// 8 = 0x8
    struct _carextendedMetadata *_extendedMetadata;	// 16 = 0x10
    struct _renditionkeyfmt *_keyfmt;	// 24 = 0x18
    void *_imagedb;	// 32 = 0x20
    void *_colordb;	// 40 = 0x28
    void *_fontdb;	// 48 = 0x30
    void *_fontsizedb;	// 56 = 0x38
    void *_facetKeysdb;	// 64 = 0x40
    void *_bitmapKeydb;	// 72 = 0x48
    void *_appearancedb;	// 80 = 0x50
    void *_localizationdb;	// 88 = 0x58
    NSData *_globals;	// 96 = 0x60
    unsigned int _swap:1;	// 104 = 0x68
    unsigned int _isMemoryMapped:1;	// 104 = 0x68
    unsigned int _hasAppearanceKey:1;	// 104 = 0x68
    unsigned int _hasLocalizationKey:1;	// 104 = 0x68
    unsigned int _reserved:28;	// 104 = 0x68
    NSSet *_externalTags;	// 112 = 0x70
    unsigned short _renditionInfoCacheLookup[20];	// 120 = 0x78
    id _renditionInfoCache[20];	// 160 = 0xa0
    struct os_unfair_lock_s _lock;	// 320 = 0x140
    struct os_unfair_lock_s _renditionInfoCacheLock;	// 324 = 0x144
    struct _renditionkeyattributeindex _keyfmtindex;	// 328 = 0x148
    NSDictionary *_appearances;	// 528 = 0x210
}

+ (_Bool)isValidAssetStorageWithURL:(id)arg1;	// IMP=0x0000000000050c16
+ (_Bool)isValidAssetStorageWithBytes:(const void *)arg1 length:(unsigned long long)arg2;	// IMP=0x0000000000050b40
@property(retain, nonatomic) NSData *globals; // @synthesize globals=_globals;
@property(nonatomic) void *localizationdb; // @synthesize localizationdb=_localizationdb;
@property(nonatomic) void *appearancedb; // @synthesize appearancedb=_appearancedb;
@property(nonatomic) void *bitmapKeydb; // @synthesize bitmapKeydb=_bitmapKeydb;
@property(nonatomic) void *facetKeysdb; // @synthesize facetKeysdb=_facetKeysdb;
@property(nonatomic) void *fontsizedb; // @synthesize fontsizedb=_fontsizedb;
@property(nonatomic) void *fontdb; // @synthesize fontdb=_fontdb;
@property(nonatomic) void *colordb; // @synthesize colordb=_colordb;
@property(nonatomic) void *imagedb; // @synthesize imagedb=_imagedb;
@property(nonatomic) struct _renditionkeyfmt *keyfmt; // @synthesize keyfmt=_keyfmt;
@property(nonatomic) struct _carextendedMetadata *extendedMetadata; // @synthesize extendedMetadata=_extendedMetadata;
@property(nonatomic) struct _carheader *header; // @synthesize header=_header;
- (_Bool)writeToPath:(id)arg1 withTreePageSize:(unsigned int)arg2;	// IMP=0x0000000000054875
- (id)localizations;	// IMP=0x00000000000546f0
- (id)nameForLocalizationIdentifier:(unsigned short)arg1;	// IMP=0x00000000000545f3
- (unsigned short)localizationIdentifierForName:(id)arg1;	// IMP=0x0000000000054532
- (id)_readAppearances;	// IMP=0x00000000000543ad
@property(readonly, nonatomic) NSDictionary *appearances; // @synthesize appearances=_appearances;
- (id)nameForAppearanceIdentifier:(unsigned short)arg1;	// IMP=0x0000000000054270
- (unsigned short)appearanceIdentifierForName:(id)arg1;	// IMP=0x000000000005421e
- (int)validateFile;	// IMP=0x00000000000541f9
- (int)validatekeyformat;	// IMP=0x0000000000053f42
- (int)validateBitmapInfo;	// IMP=0x0000000000053ce6
- (void)_buildBitmapInfoIntoDictionary:(id)arg1;	// IMP=0x0000000000053be5
- (void)_addBitmapIndexForNameIdentifier:(unsigned short)arg1 attribute:(int)arg2 withValue:(unsigned short)arg3 toDictionary:(id)arg4;	// IMP=0x0000000000053b12
- (void)enumerateBitmapIndexUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000539ac
- (id)externalTags;	// IMP=0x00000000000539a2
- (float)fontSizeForFontSizeType:(id)arg1;	// IMP=0x0000000000053800
- (_Bool)getBaselineOffset:(float *)arg1 forFontType:(id)arg2;	// IMP=0x0000000000053779
- (_Bool)getFontName:(id *)arg1 baselineOffset:(float *)arg2 forFontType:(id)arg3;	// IMP=0x00000000000536a9
- (const struct FontValue *)_fontValueForFontType:(id)arg1;	// IMP=0x000000000005355a
- (_Bool)hasColorForName:(const char *)arg1;	// IMP=0x000000000005346b
- (_Bool)getColor:(struct _colordef *)arg1 forName:(const char *)arg2;	// IMP=0x00000000000532f5
- (id)renditionNameForKeyBaseList:(const struct _renditionkeytoken *)arg1;	// IMP=0x0000000000053165
- (id)renditionNamesWithKeys;	// IMP=0x0000000000052f7e
- (id)renditionNameForKeyList:(struct _renditionkeytoken *)arg1;	// IMP=0x0000000000052e1c
- (id)allRenditionNames;	// IMP=0x0000000000052ce9
- (const struct _renditionkeytoken *)renditionKeyForName:(const char *)arg1 hotSpot:(struct CGPoint *)arg2;	// IMP=0x0000000000052a5f
- (struct _renditionkeytoken)_swapRenditionKeyToken:(struct _renditionkeytoken)arg1;	// IMP=0x0000000000052a52
- (void)enumerateRenditionInfosUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000528ea
- (id)renditionInfoForIdentifier:(unsigned short)arg1;	// IMP=0x000000000005265b
- (void)enumerateKeysAndObjectsWithoutIgnoringUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000005239f
- (_Bool)enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000052058
- (id)assetKeysMatchingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000051d9b
- (id)allAssetKeys;	// IMP=0x0000000000051ccf
- (id)assetForKey:(id)arg1;	// IMP=0x0000000000051b72
- (_Bool)assetExistsForKeyData:(const void *)arg1 length:(unsigned long long)arg2;	// IMP=0x0000000000051ae6
- (_Bool)assetExistsForKey:(id)arg1;	// IMP=0x0000000000051a94
- (void)_swapRenditionKeyArray:(unsigned short *)arg1;	// IMP=0x0000000000051a63
- (id)authoringTool;	// IMP=0x0000000000051a1a
- (id)deploymentPlatformVersion;	// IMP=0x00000000000519d1
- (id)deploymentPlatform;	// IMP=0x0000000000051988
- (id)thinningArguments;	// IMP=0x0000000000051942
- (void)_loadExtendedMetadata;	// IMP=0x000000000005189f
- (unsigned int)colorSpaceID;	// IMP=0x0000000000051886
- (unsigned int)associatedChecksum;	// IMP=0x000000000005186d
- (id)uuid;	// IMP=0x0000000000051831
- (unsigned int)renditionCount;	// IMP=0x000000000005181b
- (const char *)mainVersionString;	// IMP=0x0000000000051806
- (const char *)versionString;	// IMP=0x00000000000517ee
- (_Bool)usesCUISystemThemeRenditionKey;	// IMP=0x00000000000517da
- (long long)maximumRenditionKeyTokenCount;	// IMP=0x00000000000517c1
- (id)catalogGlobalData;	// IMP=0x0000000000051789
- (const struct _renditionkeyattributeindex *)keyAttributeIndex;	// IMP=0x000000000005177c
- (const struct _renditionkeyfmt *)keyFormat;	// IMP=0x000000000005175a
- (id)keyFormatData;	// IMP=0x000000000005171e
- (int)keySemantics;	// IMP=0x000000000005170e
- (long long)storageTimestamp;	// IMP=0x00000000000516e9
- (long long)_storagefileTimestamp;	// IMP=0x0000000000051634
- (unsigned int)schemaVersion;	// IMP=0x0000000000051618
- (unsigned int)coreuiVersion;	// IMP=0x00000000000515ea
- (unsigned int)storageVersion;	// IMP=0x00000000000515d1
- (void)dealloc;	// IMP=0x00000000000514ce
- (id)description;	// IMP=0x0000000000051469
- (id)path;	// IMP=0x0000000000051409
- (struct _BOMStorage *)_bomStorage;	// IMP=0x00000000000513fb
- (_Bool)_commonInitWithStorage:(struct _BOMStorage *)arg1 forWritting:(_Bool)arg2;	// IMP=0x0000000000050ceb
- (id)initWithBytes:(const void *)arg1 length:(unsigned long long)arg2;	// IMP=0x0000000000050a9b
- (id)initWithPath:(id)arg1 forWriting:(_Bool)arg2;	// IMP=0x00000000000509da
- (id)initWithPath:(id)arg1;	// IMP=0x00000000000509c6
- (_Bool)swapped;	// IMP=0x00000000000509bb
- (void)_swapKeyFormat;	// IMP=0x000000000005097f
- (void)_swapHeader;	// IMP=0x0000000000050938
- (void)_bringHeaderInfoUpToDate;	// IMP=0x000000000005091e
- (void)_initDefaultHeaderVersion:(double)arg1 versionString:(const char *)arg2;	// IMP=0x000000000005086f
- (void)setExternalTags:(id)arg1;	// IMP=0x0000000000050840
- (struct os_unfair_lock_s *)renditionInfoCacheLock;	// IMP=0x0000000000050833
- (struct os_unfair_lock_s *)lock;	// IMP=0x0000000000050826

@end
