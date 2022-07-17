//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface AVSemanticSegmentationMatte : NSObject
{
    NSString *_matteType;	// 8 = 0x8
    struct __CVBuffer *_pixelBuffer;	// 16 = 0x10
    int _version;	// 24 = 0x18
}

+ (id)_allSupportedSemanticSegmentationMattePixelFormatTypes;	// IMP=0x000000000000ce53
+ (id)_allSupportedSemanticSegmentationMatteTypes;	// IMP=0x000000000000cdda
+ (id)semanticSegmentationMatteFromImageSourceAuxiliaryDataType:(struct __CFString *)arg1 dictionaryRepresentation:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000be68
+ (void)initialize;	// IMP=0x000000000000bca0
- (const struct __CFString *)auxiliaryImageType;	// IMP=0x000000000000cd77
- (const struct CGImageMetadata *)copyAuxiliaryMetadata;	// IMP=0x000000000000ccdf
- (id)initWithType:(id)arg1 pixelBuffer:(struct __CVBuffer *)arg2 auxiliaryMetadata:(const struct CGImageMetadata *)arg3;	// IMP=0x000000000000cc81
- (id)initWithType:(id)arg1 pixelBuffer:(struct __CVBuffer *)arg2 semanticSegmentationMatteMetadataDictionary:(id)arg3;	// IMP=0x000000000000cb15
- (short)versionMinor;	// IMP=0x000000000000cb0b
- (short)versionMajor;	// IMP=0x000000000000cb01
@property(readonly) struct __CVBuffer *mattingImage;
@property(readonly) unsigned int pixelFormatType;
- (id)dictionaryRepresentationForAuxiliaryDataType:(id *)arg1;	// IMP=0x000000000000c805
- (id)semanticSegmentationMatteByReplacingSemanticSegmentationMatteWithPixelBuffer:(struct __CVBuffer *)arg1 error:(id *)arg2;	// IMP=0x000000000000c6dc
- (id)semanticSegmentationMatteByApplyingExifOrientation:(unsigned int)arg1;	// IMP=0x000000000000c37c
@property(readonly) NSString *matteType;
- (void)dealloc;	// IMP=0x000000000000be1f
- (id)description;	// IMP=0x000000000000bdbc
- (id)debugDescription;	// IMP=0x000000000000bcb1

@end
