//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CLSImageUtils
{
}

+ (id)JPEGDataForThumbnailForFileAtURL:(id)arg1 maxSize:(struct CGSize)arg2 scaleFactor:(double)arg3 error:(id *)arg4;	// IMP=0x000000000005f060
+ (id)JPEGDataFromCGImage:(struct CGImage *)arg1 desiredMinimumDimension:(unsigned long long)arg2 desiredMaximumDimension:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x000000000005ecdc
+ (struct CGImage *)CGImageFromJPEGData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000005ea24
+ (id)JPEGDataFromCGImage:(struct CGImage *)arg1 error:(id *)arg2;	// IMP=0x000000000005e6ff

@end

