//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMFLogging-Protocol.h>

@class NSString;

@interface HMIFaceprinter : HMFObject <HMFLogging>
{
}

+ (id)logCategory;	// IMP=0x000000000005557a
+ (long long)_minorVersionFromVisionVersion:(int)arg1;	// IMP=0x000000000005544f
+ (struct __CVBuffer *)createFacePixelBufferForFaceEvent:(id)arg1 pixelBuffer:(struct __CVBuffer *)arg2 roll:(id)arg3 error:(id *)arg4;	// IMP=0x000000000005404f
+ (struct __CVBuffer *)createFacePixelBufferForFaceDetection:(id)arg1 pixelBuffer:(struct __CVBuffer *)arg2 roll:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000537d3
+ (id)currentModelUUID;	// IMP=0x0000000000052bd9
- (id)updatedFaceprintsForFaceCrops:(id)arg1 withExistingFaceprints:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000054749
- (id)generateFaceprintForFaceCrop:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000546e2
- (struct __CVBuffer *)createFacePixelBufferFromFaceCrop:(id)arg1 error:(id *)arg2;	// IMP=0x000000000005414c
- (id)createFaceprintForFacePixelBuffer:(struct __CVBuffer *)arg1 fastMode:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0000000000053264
- (void)warmStart;	// IMP=0x0000000000052d82

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

