//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface RCCaptureFormat : NSObject
{
}

+ (id)AVAssetAuthoringMetadataWithRecordingMetadata:(id)arg1;	// IMP=0x0000000000054fe5
+ (id)AVAssetAuthoringMetadataWithComposition:(id)arg1;	// IMP=0x0000000000054eed
+ (id)AVAssetAuthoringMetadataWithCreationDate:(id)arg1 title:(id)arg2 uniqueID:(id)arg3;	// IMP=0x0000000000054ed8
+ (id)AVAssetAuthoringMetadataWithCreationDate:(id)arg1 title:(id)arg2 uniqueID:(id)arg3 musicMemoMetadata:(id)arg4;	// IMP=0x0000000000054ab9
+ (void)_AVAssetExportDetermineSettingsForExportingAsset:(id)arg1 inputFormat:(unsigned int)arg2 outputExtensionWithFallbacks:(id)arg3 preferredFormat:(unsigned int)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000545a6
+ (void)AVAssetExportDetermineSettingsForExportingAsset:(id)arg1 inputFormat:(unsigned int)arg2 preferredOutputExtension:(id)arg3 preferredFormat:(unsigned int)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000054434
+ (id)AVAssetExportPresetForExportingToExtension:(id)arg1 preferredFormat:(unsigned int)arg2;	// IMP=0x00000000000543e2
+ (id)AVMediaTypeForFileExtension:(id)arg1;	// IMP=0x000000000005434b
+ (id)AVFileTypeUTIForFileExtension:(id)arg1;	// IMP=0x0000000000054252
+ (id)fileFormatsDirectlyImportable;	// IMP=0x0000000000054245
+ (id)fileExtensionsSupported;	// IMP=0x0000000000054238
+ (id)fileExtensionForAssetExport;	// IMP=0x000000000005422b
+ (id)fileExtensionForIntermediateAssetCapture;	// IMP=0x000000000005421e

@end

