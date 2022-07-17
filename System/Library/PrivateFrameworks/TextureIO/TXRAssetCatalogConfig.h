//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet, TXRAssetCatalogFileAttributes, TXRTexture;

@interface TXRAssetCatalogConfig : NSObject
{
    TXRTexture *_texture;	// 8 = 0x8
    TXRAssetCatalogFileAttributes *_baseFileAttributes;	// 16 = 0x10
    NSMutableSet *_fileAttributesList;	// 24 = 0x18
    unsigned long long _pixelFormat;	// 32 = 0x20
    unsigned long long _mipmapOption;	// 40 = 0x28
    unsigned long long _memory;	// 48 = 0x30
    unsigned long long _graphicsFeatureSet;	// 56 = 0x38
    unsigned long long _idiom;	// 64 = 0x40
    unsigned long long _displayColorSpace;	// 72 = 0x48
    unsigned long long _scaleFactor;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000000c637a
@property(nonatomic) unsigned long long scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property(nonatomic) unsigned long long displayColorSpace; // @synthesize displayColorSpace=_displayColorSpace;
@property(nonatomic) unsigned long long idiom; // @synthesize idiom=_idiom;
@property(nonatomic) unsigned long long graphicsFeatureSet; // @synthesize graphicsFeatureSet=_graphicsFeatureSet;
@property(nonatomic) unsigned long long memory; // @synthesize memory=_memory;
@property(readonly, nonatomic) TXRTexture *texture; // @synthesize texture=_texture;
@property(nonatomic) unsigned long long mipmapOption; // @synthesize mipmapOption=_mipmapOption;
@property(nonatomic) unsigned long long pixelFormat; // @synthesize pixelFormat=_pixelFormat;
@property(readonly, nonatomic) NSSet *fileAttributesList; // @synthesize fileAttributesList=_fileAttributesList;
@property(retain, nonatomic) TXRAssetCatalogFileAttributes *baseFileAttributes; // @synthesize baseFileAttributes=_baseFileAttributes;
- (void)addFileAttributesForLevel:(unsigned long long)arg1 face:(unsigned long long)arg2 fileFormat:(unsigned long long)arg3 colorSpace:(struct CGColorSpace *)arg4 exifOrientation:(unsigned char)arg5;	// IMP=0x00000000000c6116
- (void)addFileAttributesForLevel:(unsigned long long)arg1 fileFormat:(unsigned long long)arg2 colorSpace:(struct CGColorSpace *)arg3 exifOrientation:(unsigned char)arg4;	// IMP=0x00000000000c5fb9
- (void)addFileAttributesForLevel:(unsigned long long)arg1 face:(unsigned long long)arg2;	// IMP=0x00000000000c5e51
- (void)addFileAttributesForLevel:(unsigned long long)arg1;	// IMP=0x00000000000c5d33
- (id)initWithTexture:(id)arg1;	// IMP=0x00000000000c5c93

@end
