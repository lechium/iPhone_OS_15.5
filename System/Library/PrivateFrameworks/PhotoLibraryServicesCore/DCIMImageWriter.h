//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface DCIMImageWriter : NSObject
{
}

+ (id)defaultFileExtensionForAssetType:(short)arg1;	// IMP=0x0000000000007f63
+ (id)preferredFileExtensionForType:(id)arg1;	// IMP=0x0000000000007e46
+ (_Bool)isLivePhotoFilteredVideoPath:(id)arg1;	// IMP=0x0000000000007dd0
+ (id)recordedVideoPathForFilteredLivePhotoVideoPath:(id)arg1;	// IMP=0x0000000000007ceb
+ (id)filteredVideoPathForRecordedLivePhotoVideoPath:(id)arg1;	// IMP=0x0000000000007c28
+ (id)uniqueIncomingPathForAssetWithUUID:(id)arg1 andExtension:(id)arg2 isPhotoStream:(_Bool)arg3;	// IMP=0x0000000000007ac9
+ (id)incomingDirectoryPathForPhotoStream;	// IMP=0x0000000000007a54
+ (id)incomingDirectoryPath;	// IMP=0x0000000000007a30
+ (short)savedAssetTypeForPhotoBoothAsset;	// IMP=0x0000000000007a17
+ (short)savedAssetTypeForCameraCapturedAsset;	// IMP=0x00000000000079fe
+ (void)writeableDataForImage:(id)arg1 previewImage:(id)arg2 imageData:(id)arg3 imageUTIType:(id)arg4 exifProperties:(id)arg5 imageOrientation:(long long)arg6 thumbnailDataOut:(id *)arg7 imageUTITypeOut:(id *)arg8 exifPropertiesOut:(id *)arg9 isJPEGOut:(_Bool *)arg10 imageDataOut:(id *)arg11;	// IMP=0x0000000000006f6d
+ (void)writeableDataForImageData:(id)arg1 imageUTIType:(id)arg2 thumbnailDataOut:(id *)arg3 imageUTITypeOut:(id *)arg4 exifPropertiesOut:(id *)arg5 isJPEGOut:(_Bool *)arg6 imageDataOut:(id *)arg7;	// IMP=0x0000000000006f18
+ (id)sharedDCIMWriter;	// IMP=0x0000000000006ef4
- (void)_writeJPEGFromIOSurface:(struct __IOSurface *)arg1 toPath:(id)arg2 orientation:(long long)arg3;	// IMP=0x0000000000006e8e
- (int)copyPrimaryFormatImageData:(id)arg1 toURL:(id)arg2 properties:(id)arg3;	// IMP=0x0000000000006e79
- (_Bool)_writeJPEGToURL:(id)arg1 withData:(id)arg2 thumbnail:(id)arg3 properties:(id)arg4 duringBurst:(_Bool)arg5;	// IMP=0x0000000000006d32
- (_Bool)writeJPEGToURL:(id)arg1 withData:(id)arg2 thumbnail:(id)arg3 properties:(id)arg4;	// IMP=0x0000000000006d10
- (id)_cameraAssetExtensionForType:(short)arg1;	// IMP=0x0000000000006cdc
- (_Bool)saveImageJobToDisk:(id)arg1;	// IMP=0x0000000000005311

@end

