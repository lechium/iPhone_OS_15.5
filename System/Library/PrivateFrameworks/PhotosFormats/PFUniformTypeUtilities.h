//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PFUniformTypeUtilities : NSObject
{
}

+ (id)typeForHFSType:(unsigned int)arg1 conformingToType:(id)arg2;	// IMP=0x000000000001af23
+ (id)typeForHFSType:(unsigned int)arg1;	// IMP=0x000000000001af1b
+ (id)imageTypesUnsupportedForImport;	// IMP=0x000000000001aeeb
+ (id)supportedAudioTypes;	// IMP=0x000000000001aebb
+ (id)supportedMovieTypes;	// IMP=0x000000000001ae8b
+ (id)supportedImageTypes;	// IMP=0x000000000001ae5b
+ (id)typeForFilenameExtensionOrLastPathComponent:(id)arg1;	// IMP=0x000000000001ad9d
+ (id)typesSupportedForImport;	// IMP=0x000000000001ad6d
+ (id)typeForURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001ac1f
+ (id)resourceModelTypeForFilenameExtension:(id)arg1;	// IMP=0x000000000001ab3f
+ (_Bool)url:(id)arg1 conformsToOneOfTypes:(id)arg2;	// IMP=0x000000000001aabe
+ (_Bool)url:(id)arg1 conformsToType:(id)arg2;	// IMP=0x000000000001aa3f
+ (_Bool)filenameExtension:(id)arg1 conformsToOneOfTypes:(id)arg2;	// IMP=0x000000000001a9bf
+ (_Bool)type:(id)arg1 conformsToOneOfTypes:(id)arg2;	// IMP=0x000000000001a85d
+ (id)preferredOrFallbackFilenameExtensionForType:(id)arg1;	// IMP=0x000000000001a6b7
+ (id)typeWithFilenameExtension:(id)arg1 conformingToType:(id)arg2;	// IMP=0x000000000001a685
+ (id)typeWithFilenameExtension:(id)arg1;	// IMP=0x000000000001a653
+ (id)typeWithIdentifier:(id)arg1;	// IMP=0x000000000001a621
+ (id)hasselbladFFFRAWImageType;	// IMP=0x000000000001a5f1
+ (id)hasselblad3FRRAWImageType;	// IMP=0x000000000001a5c1
+ (id)leafamericaRAWImageType;	// IMP=0x000000000001a591
+ (id)fujiRAWImageType;	// IMP=0x000000000001a561
+ (id)samsungRAWImageType;	// IMP=0x000000000001a531
+ (id)nikonRAWImageType;	// IMP=0x000000000001a501
+ (id)pentaxRAWImageType;	// IMP=0x000000000001a4d1
+ (id)panasonicRAWImageType;	// IMP=0x000000000001a4a1
+ (id)panasonicRW2RAWImageType;	// IMP=0x000000000001a471
+ (id)olympusRAWImageType;	// IMP=0x000000000001a441
+ (id)canonTIFFRAWImageType;	// IMP=0x000000000001a411
+ (id)canonCRWRAWImageType;	// IMP=0x000000000001a3e1
+ (id)canonCR2RAWImageType;	// IMP=0x000000000001a3b1
+ (id)sonyARWRAWImageType;	// IMP=0x000000000001a381
+ (id)jpeg2000Type;	// IMP=0x000000000001a351
+ (id)macPaintType;	// IMP=0x000000000001a321
+ (id)icoType;	// IMP=0x000000000001a2f1
+ (id)quicktimeImageType;	// IMP=0x000000000001a2c1
+ (id)pictType;	// IMP=0x000000000001a291
+ (id)heicSequenceType;	// IMP=0x000000000001a261
+ (id)livePhotoBundlePrivateType;	// IMP=0x000000000001a231
+ (id)livePhotoBundleType;	// IMP=0x000000000001a201
+ (id)supplementalResourceAAEType;	// IMP=0x000000000001a1d1
+ (id)supplementalResourceXMPType;	// IMP=0x000000000001a1a1
+ (id)adobeIllustratorType;	// IMP=0x000000000001a171
+ (id)adobePhotoshopType;	// IMP=0x000000000001a141
+ (id)apertureLibraryType;	// IMP=0x000000000001a111
+ (id)photosLibraryType;	// IMP=0x000000000001a0e1

@end

