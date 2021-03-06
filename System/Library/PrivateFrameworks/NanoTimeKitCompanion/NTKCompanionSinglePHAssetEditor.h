//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface NTKCompanionSinglePHAssetEditor
{
    NSString *_albumIdentifier;	// 8 = 0x8
    NSString *_albumName;	// 16 = 0x10
    _Bool _albumNameValid;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000011f565
@property(retain, nonatomic) NSString *albumIdentifier; // @synthesize albumIdentifier=_albumIdentifier;
- (id)_fetchAlbumName;	// IMP=0x000000000011f54c
- (id)_fetchSingleAsset;	// IMP=0x000000000011f544
- (id)_createResourceDirectoryForSinglePHAssetWithPreviewOnly:(_Bool)arg1;	// IMP=0x000000000011f53c
- (id)optionsForSingleAsset;	// IMP=0x000000000011f3c3
- (void)finalizeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000011f069
- (void)generateGalleryPreviewResourceDirectoryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000011ec0c
@property(readonly, nonatomic) NSString *albumName;
@property(nonatomic) _Bool shouldFinalize;
- (id)initWithResourceDirectory:(id)arg1 forDevice:(id)arg2 shouldFinalize:(_Bool)arg3;	// IMP=0x000000000011e895

@end

