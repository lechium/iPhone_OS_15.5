//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ALAssetRepresentationPrivate;

@interface ALAssetRepresentation : NSObject
{
    id _internal;	// 8 = 0x8
    _Bool _ignoreRead;	// 16 = 0x10
}

+ (void)_enableImageDataUsesMap;	// IMP=0x0000000000005e77
@property _Bool ignoreRead; // @synthesize ignoreRead=_ignoreRead;
@property(retain, nonatomic) ALAssetRepresentationPrivate *internal; // @synthesize internal=_internal;
- (id)filename;	// IMP=0x00000000000059c4
- (float)scale;	// IMP=0x00000000000059b6
- (long long)orientation;	// IMP=0x0000000000005907
- (id)metadata;	// IMP=0x0000000000005818
- (id)url;	// IMP=0x0000000000005730
- (struct CGImage *)_largeDisplayableImageForFormatID:(unsigned short)arg1;	// IMP=0x0000000000005640
- (struct CGImage *)fullScreenImage;	// IMP=0x0000000000005629
- (struct CGImage *)zoomableDisplayImage;	// IMP=0x00000000000055da
- (struct CGImage *)fullResolutionImage;	// IMP=0x00000000000055c6
- (struct CGImage *)CGImageWithOptions:(id)arg1;	// IMP=0x00000000000055af
- (struct CGImage *)CGImageWithOptions:(id)arg1 format:(unsigned short)arg2;	// IMP=0x00000000000053ea
- (id)_imageData;	// IMP=0x00000000000052d2
- (unsigned long long)getBytes:(char *)arg1 fromOffset:(long long)arg2 length:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x0000000000005273
- (long long)size;	// IMP=0x000000000000520a
- (struct CGSize)dimensions;	// IMP=0x0000000000004ece
- (int)_fileDescriptor;	// IMP=0x0000000000004dd6
- (id)UTI;	// IMP=0x0000000000004d93
- (_Bool)isValid;	// IMP=0x0000000000004d68
- (id)description;	// IMP=0x0000000000004d29
- (void)dealloc;	// IMP=0x0000000000004ce9
- (id)initWithManagedAsset:(id)arg1 sidecar:(id)arg2 extension:(id)arg3 library:(id)arg4;	// IMP=0x0000000000004c47

@end

