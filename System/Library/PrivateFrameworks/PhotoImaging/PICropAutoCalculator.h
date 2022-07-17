//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NeutrinoCore/NUAutoCalculator.h>

#import <PhotoImaging/NUTimeBased-Protocol.h>
#import <PhotoImaging/PIFaceObservingAutoCalculator-Protocol.h>

@class NSNumber, NSString, PIFaceObservationCache;

@interface PICropAutoCalculator : NUAutoCalculator <NUTimeBased, PIFaceObservingAutoCalculator>
{
    _Bool _shouldPerformAutoCrop;	// 8 = 0x8
    _Bool _shouldPerformAutoStraighten;	// 9 = 0x9
    _Bool _shouldUseAutoStraightenVerticalDetector;	// 10 = 0xa
    _Bool _debugFilesEnabled;	// 11 = 0xb
    PIFaceObservationCache *_faceObservationCache;	// 16 = 0x10
    NSNumber *_autoStraightenVerticalAngleThreshold;	// 24 = 0x18
    NSNumber *_autoStraightenDominantAngleDiffThreshold;	// 32 = 0x20
    double _maxAutoStraighten;	// 40 = 0x28
    double _minAutoStraighten;	// 48 = 0x30
    NSString *_debugFilesPrefix;	// 56 = 0x38
}

+ (id)updateCropAdjustment:(id)arg1 after:(id)arg2 error:(out id *)arg3;	// IMP=0x00000000000b49ab
+ (struct CGRect)overcaptureRectForStitchedOvercaptureSize:(CDStruct_912cb5d2)arg1 overcaptureVideoComplementSize:(CDStruct_912cb5d2)arg2 primarySize:(CDStruct_912cb5d2)arg3 autoLoopStabilizedCropRect:(struct CGRect)arg4;	// IMP=0x00000000000b48bb
+ (_Bool)stitchedOvercaptureRect:(struct CGRect *)arg1 primaryRect:(struct CGRect *)arg2 forComposition:(id)arg3 error:(out id *)arg4;	// IMP=0x00000000000b40d5
- (void).cxx_destruct;	// IMP=0x00000000000b36e5
@property(copy) NSString *debugFilesPrefix; // @synthesize debugFilesPrefix=_debugFilesPrefix;
@property _Bool debugFilesEnabled; // @synthesize debugFilesEnabled=_debugFilesEnabled;
@property double minAutoStraighten; // @synthesize minAutoStraighten=_minAutoStraighten;
@property double maxAutoStraighten; // @synthesize maxAutoStraighten=_maxAutoStraighten;
@property(copy) NSNumber *autoStraightenDominantAngleDiffThreshold; // @synthesize autoStraightenDominantAngleDiffThreshold=_autoStraightenDominantAngleDiffThreshold;
@property(copy) NSNumber *autoStraightenVerticalAngleThreshold; // @synthesize autoStraightenVerticalAngleThreshold=_autoStraightenVerticalAngleThreshold;
@property _Bool shouldUseAutoStraightenVerticalDetector; // @synthesize shouldUseAutoStraightenVerticalDetector=_shouldUseAutoStraightenVerticalDetector;
@property _Bool shouldPerformAutoStraighten; // @synthesize shouldPerformAutoStraighten=_shouldPerformAutoStraighten;
@property _Bool shouldPerformAutoCrop; // @synthesize shouldPerformAutoCrop=_shouldPerformAutoCrop;
@property(retain, nonatomic) PIFaceObservationCache *faceObservationCache; // @synthesize faceObservationCache=_faceObservationCache;
- (void)submit:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b2a5c
- (_Bool)undoExifOrientation:(CDStruct_996ac03c *)arg1 error:(out id *)arg2;	// IMP=0x00000000000b25ca
- (id)imageProperties:(out id *)arg1;	// IMP=0x00000000000b24ff
- (id)initWithComposition:(id)arg1;	// IMP=0x00000000000b2425

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) CDStruct_1b6d18a9 time;

@end
