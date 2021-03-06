//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TDTextureAsset, TDTextureMipLevel, TDTextureRenditionSpec, TDThemeCompressionType;

@interface TDTextureImageRenditionSpec
{
}

- (_Bool)canBePackedWithDocument:(id)arg1;	// IMP=0x000000000006864b
- (_Bool)updatePackingPropertiesWithDocument:(id)arg1;	// IMP=0x000000000006856a
- (id)createCSIRepresentationWithCompression:(_Bool)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3;	// IMP=0x0000000000067b8f
- (struct CGImage *)_createImageRefWithURL:(id)arg1 andDocument:(id)arg2 format:(unsigned int *)arg3;	// IMP=0x0000000000067a00
- (int)_pixelFormatOfCGImage:(struct CGImage *)arg1;	// IMP=0x00000000000679b5
- (id)associatedFileModificationDateWithDocument:(id)arg1;	// IMP=0x00000000000678d5
- (id)textureFacesWithDocument:(id)arg1;	// IMP=0x00000000000677a4
- (_Bool)isCubeMap;	// IMP=0x000000000006776d
@property(readonly, nonatomic) long long textureFormat;
@property(readonly, nonatomic) TDTextureRenditionSpec *texture;

// Remaining properties
@property(retain, nonatomic) TDTextureAsset *asset; // @dynamic asset;
@property(retain, nonatomic) TDThemeCompressionType *compressionType; // @dynamic compressionType;
@property(nonatomic) _Bool flipped; // @dynamic flipped;
@property(retain, nonatomic) TDTextureMipLevel *textureLevelAssignment; // @dynamic textureLevelAssignment;

@end

