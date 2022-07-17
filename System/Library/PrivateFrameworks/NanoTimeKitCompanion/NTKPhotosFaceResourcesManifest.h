//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface NTKPhotosFaceResourcesManifest
{
    NSString *_assetCollectionIdentifier;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000004912d
@property(readonly, nonatomic) NSString *assetCollectionIdentifier; // @synthesize assetCollectionIdentifier=_assetCollectionIdentifier;
- (unsigned long long)maxNumberOfPhotos;	// IMP=0x000000000004910c
- (unsigned long long)maxCompatibleVersion;	// IMP=0x0000000000049101
- (unsigned long long)minCompatibleVersion;	// IMP=0x00000000000490f6
- (_Bool)_imageListItemHasValidAnalysisValues:(id)arg1;	// IMP=0x0000000000048a9e
- (_Bool)_imageListItemHasValidCropValues:(id)arg1;	// IMP=0x000000000004836f
- (_Bool)_imageListItemContainsValidIrisVideo:(id)arg1;	// IMP=0x0000000000047670
- (_Bool)_imageListItemContainsValidImage:(id)arg1;	// IMP=0x000000000004742c
- (_Bool)validateImageListItem:(id)arg1 withError:(id *)arg2;	// IMP=0x0000000000046fdf
- (_Bool)didLoadRawManifest:(id)arg1;	// IMP=0x0000000000046f1b

@end
