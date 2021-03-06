//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MOVStreamIO/MOVStreamPreProcessor-Protocol.h>

@class NSString;

@interface RawBayerTo1stPlaneYUVPreProcessor : NSObject <MOVStreamPreProcessor>
{
}

- (const struct opaqueCMFormatDescription *)trackFormatDescriptionFromStreamData:(struct StreamRecordingData *)arg1;	// IMP=0x000000000003537b
- (struct __CVBuffer *)processedPixelBufferCopyOf:(struct __CVBuffer *)arg1 streamData:(struct StreamRecordingData *)arg2 error:(id *)arg3;	// IMP=0x0000000000035294
- (unsigned int)inputPixelFormatFromStreamData:(struct StreamRecordingData *)arg1;	// IMP=0x000000000003527b
- (const struct opaqueCMFormatDescription *)formatDescriptionForPixelBuffer:(struct __CVBuffer *)arg1 streamData:(struct StreamRecordingData *)arg2;	// IMP=0x0000000000035245
- (unsigned int)encodedPixelFormatFromStreamData:(struct StreamRecordingData *)arg1;	// IMP=0x000000000003523a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

