//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCPFaceCropUtils : NSObject
{
}

+ (struct CGSize)faceCropDimensionsFromFaceCrop:(id)arg1 error:(id *)arg2;	// IMP=0x000000000021fb67
+ (id)groupingIdentifierFromFaceCrop:(id)arg1 error:(id *)arg2;	// IMP=0x000000000021f90b
+ (struct CGRect)cropBoundsInOriginalImageFromFaceCrop:(id)arg1 error:(id *)arg2;	// IMP=0x000000000021f663
+ (struct CGRect)faceBoundsFromFaceCrop:(id)arg1 error:(id *)arg2;	// IMP=0x000000000021f3bb
+ (_Bool)isValidFaceCrop:(id)arg1;	// IMP=0x000000000021f22b
+ (id)newFaceCropFromImageData:(id)arg1 withFaceRect:(struct CGRect)arg2 groupingIdentifier:(id)arg3 error:(id *)arg4;	// IMP=0x000000000021eef6
+ (id)newFaceCropFromImageURL:(id)arg1 withFaceRect:(struct CGRect)arg2 groupingIdentifier:(id)arg3 error:(id *)arg4;	// IMP=0x000000000021ebc1
+ (id)newFaceCropFromCGImageSource:(const struct CGImageSource *)arg1 withFaceRect:(struct CGRect)arg2 groupingIdentifier:(id)arg3 error:(id *)arg4;	// IMP=0x000000000021d63f
+ (id)newDictionaryWithCGImageSourceOptions;	// IMP=0x000000000021d5bb
+ (id)newDictionaryRepresentationOfFaceCropDataFromFaceBox:(struct CGRect)arg1 andCropRegion:(struct CGRect)arg2 andGroupingIdentifier:(id)arg3;	// IMP=0x000000000021d4a2
+ (id)newDictionaryPopulatedWithFaceCropDataFromImageData:(id)arg1;	// IMP=0x000000000021d268
+ (struct CGImageMetadata *)createOutputMetadataFromDictionary:(id)arg1;	// IMP=0x000000000021cf88

@end

