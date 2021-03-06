//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PHCompositeMediaResult;

@interface PHLivePhotoResult
{
    PHCompositeMediaResult *_imageResult;	// 24 = 0x18
    PHCompositeMediaResult *_videoResult;	// 32 = 0x20
    _Bool _isDegraded;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000001bebf9
- (void)addVideoResult:(id)arg1;	// IMP=0x00000000001beb35
- (void)addImageResult:(id)arg1;	// IMP=0x00000000001bea71
- (void)_mergeInfoDictionaryFromResult:(id)arg1;	// IMP=0x00000000001be961
- (_Bool)isDegraded;	// IMP=0x00000000001be951
- (void)setDegraded:(_Bool)arg1;	// IMP=0x00000000001be941
- (_Bool)isPlaceholder;	// IMP=0x00000000001be924
- (id)uniformTypeIdentifier;	// IMP=0x00000000001be907
- (id)videoAdjustmentData;	// IMP=0x00000000001be8ea
- (id)videoURL;	// IMP=0x00000000001be8cd
- (unsigned int)cgOrientation;	// IMP=0x00000000001be8b0
- (long long)uiOrientation;	// IMP=0x00000000001be893
- (id)exifOrientation;	// IMP=0x00000000001be876
- (id)imageData;	// IMP=0x00000000001be859
- (id)imageURL;	// IMP=0x00000000001be83c
- (struct CGImage *)imageRef;	// IMP=0x00000000001be81f
- (id)sanitizedInfoDictionary;	// IMP=0x00000000001be77a
- (id)allowedInfoKeys;	// IMP=0x00000000001be717
- (_Bool)containsValidData;	// IMP=0x00000000001be6cf

@end

