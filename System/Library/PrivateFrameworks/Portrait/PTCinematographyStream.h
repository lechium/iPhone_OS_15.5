//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PTCinematographyFocusPuller, PTCinematographyFrame, PTCinematographyNetwork, PTCinematographyStreamOptions, PTCinematographyTrackAllocator, PTCinematographyUserTap;
@protocol PTCinematographyStreamDelegate;

@interface PTCinematographyStream : NSObject
{
    _Bool _canCopyISPDetectionsIfMissing;	// 8 = 0x8
    _Bool _didReadFocusStrategyDefault;	// 9 = 0x9
    float _userAperture;	// 12 = 0xc
    float _internalDefaultFixedFocusDisparity;	// 16 = 0x10
    id <PTCinematographyStreamDelegate> _delegate;	// 24 = 0x18
    unsigned long long _activeVersion;	// 32 = 0x20
    PTCinematographyStreamOptions *_options;	// 40 = 0x28
    PTCinematographyTrackAllocator *_trackAllocator;	// 48 = 0x30
    PTCinematographyNetwork *_network;	// 56 = 0x38
    PTCinematographyFocusPuller *_previewFocusPuller;	// 64 = 0x40
    unsigned long long _frameIndex;	// 72 = 0x48
    unsigned long long _previousRecordingState;	// 80 = 0x50
    PTCinematographyFrame *_previousFrame;	// 88 = 0x58
    PTCinematographyUserTap *_activeUserTap;	// 96 = 0x60
    unsigned long long _internalDefaultFocusStrategy;	// 104 = 0x68
    NSString *_internalDefaultNetworkVersion;	// 112 = 0x70
}

+ (_Bool)isSupportedVersion:(unsigned long long)arg1;	// IMP=0x0000000000016b2e
+ (unsigned long long)latestVersion;	// IMP=0x0000000000016b23
- (void).cxx_destruct;	// IMP=0x000000000001ca70
@property(retain) NSString *internalDefaultNetworkVersion; // @synthesize internalDefaultNetworkVersion=_internalDefaultNetworkVersion;
@property float internalDefaultFixedFocusDisparity; // @synthesize internalDefaultFixedFocusDisparity=_internalDefaultFixedFocusDisparity;
@property unsigned long long internalDefaultFocusStrategy; // @synthesize internalDefaultFocusStrategy=_internalDefaultFocusStrategy;
@property _Bool didReadFocusStrategyDefault; // @synthesize didReadFocusStrategyDefault=_didReadFocusStrategyDefault;
@property(retain, nonatomic) PTCinematographyUserTap *activeUserTap; // @synthesize activeUserTap=_activeUserTap;
@property(nonatomic) _Bool canCopyISPDetectionsIfMissing; // @synthesize canCopyISPDetectionsIfMissing=_canCopyISPDetectionsIfMissing;
@property(retain, nonatomic) PTCinematographyFrame *previousFrame; // @synthesize previousFrame=_previousFrame;
@property(nonatomic) unsigned long long previousRecordingState; // @synthesize previousRecordingState=_previousRecordingState;
@property(nonatomic) unsigned long long frameIndex; // @synthesize frameIndex=_frameIndex;
@property(retain, nonatomic) PTCinematographyFocusPuller *previewFocusPuller; // @synthesize previewFocusPuller=_previewFocusPuller;
@property(retain, nonatomic) PTCinematographyNetwork *network; // @synthesize network=_network;
@property(retain, nonatomic) PTCinematographyTrackAllocator *trackAllocator; // @synthesize trackAllocator=_trackAllocator;
@property(retain, nonatomic) PTCinematographyStreamOptions *options; // @synthesize options=_options;
@property(readonly) unsigned long long activeVersion; // @synthesize activeVersion=_activeVersion;
@property(nonatomic) float userAperture; // @synthesize userAperture=_userAperture;
@property(nonatomic) __weak id <PTCinematographyStreamDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_logUnusualDetection:(id)arg1 info:(id)arg2;	// IMP=0x000000000001c880
- (_Bool)_logUnusualDisparity:(float)arg1 kind:(id)arg2 info:(id)arg3;	// IMP=0x000000000001c743
- (void)_logUserTap:(id)arg1;	// IMP=0x000000000001c45e
- (void)_logFocusChangeForFrame:(id)arg1;	// IMP=0x000000000001c1a3
- (float)smoothFocusDistance:(float)arg1 trackIdentifier:(long long)arg2 sampleCount:(unsigned long long)arg3;	// IMP=0x000000000001c0c1
- (void)_setDisparityOfDetections:(id)arg1 disparityBuffer:(struct __CVBuffer *)arg2;	// IMP=0x000000000001bc06
- (id)_disparityWeightingValue;	// IMP=0x000000000001bacf
- (id)_mutableDetectionsFromFTTrackingResult:(id)arg1 namedSignalsPerTrack:(id)arg2 time:(CDStruct_1b6d18a9)arg3;	// IMP=0x000000000001b2c2
- (id)_namedSignals:(id)arg1 addingANODPoseFromFTTrackMetadata:(id)arg2;	// IMP=0x000000000001b1e9
- (id)_ANODPoseFromFTTrackMetadata:(id)arg1;	// IMP=0x000000000001afe4
- (unsigned long long)_detectionTypeForFTObjectKind:(unsigned long long)arg1;	// IMP=0x000000000001aef4
- (id)_detectionsFromFTTrackingResult:(id)arg1 autoFocusRect:(struct CGRect)arg2 namedSignalsPerTrack:(id)arg3 time:(CDStruct_1b6d18a9)arg4 disparityBuffer:(struct __CVBuffer *)arg5;	// IMP=0x000000000001add2
- (void)_updateDetections:(id)arg1 ifMissingISPDetectionsFromTrackingResult:(id)arg2 time:(CDStruct_1b6d18a9)arg3;	// IMP=0x000000000001ab68
- (void)_copyPreviousISPDetections:(id)arg1 toDetections:(id)arg2 time:(CDStruct_1b6d18a9)arg3;	// IMP=0x000000000001a992
- (id)_autoFocusDetectionWithTime:(CDStruct_1b6d18a9)arg1 rect:(struct CGRect)arg2;	// IMP=0x000000000001a8d4
- (struct CGRect)_autoFocusRectFromMetadata:(id)arg1;	// IMP=0x000000000001a832
- (_Bool)_isInvalidFTTrack:(id)arg1;	// IMP=0x000000000001a763
- (id)_frameDetectionsFromFusionTrackerMetadata:(id)arg1 time:(CDStruct_1b6d18a9)arg2 disparityBuffer:(struct __CVBuffer *)arg3;	// IMP=0x000000000001a01f
- (id)_trackingResultFromFusionTrackerMetadata:(id)arg1;	// IMP=0x0000000000019f71
- (_Bool)_hasFusionTrackerMetadata:(id)arg1;	// IMP=0x0000000000019ee3
- (id)_frameDetectionsFromMetadata:(id)arg1 time:(CDStruct_1b6d18a9)arg2 disparityBuffer:(struct __CVBuffer *)arg3;	// IMP=0x0000000000019dda
- (_Bool)_isUserTap:(id)arg1 inFrameDetections:(id)arg2;	// IMP=0x0000000000019c9e
- (id)_userTapFromFTTapResponse:(id)arg1 frameDetections:(id)arg2 disparityBuffer:(struct __CVBuffer *)arg3;	// IMP=0x0000000000019974
- (id)_detectionForFixedFocusAtNormalizedPoint:(struct CGPoint)arg1 disparityBuffer:(struct __CVBuffer *)arg2;	// IMP=0x00000000000197ad
- (struct CGRect)_defaultFixedFocusRectForPoint:(struct CGPoint)arg1 disparityBuffer:(struct __CVBuffer *)arg2;	// IMP=0x00000000000196d5
- (struct CGRect)_fixedFocusRectForPoint:(struct CGPoint)arg1 disparityBuffer:(struct __CVBuffer *)arg2;	// IMP=0x00000000000195db
- (_Bool)_isFailedTapToTrackFTTapResponse:(id)arg1;	// IMP=0x0000000000019558
- (_Bool)_isSuccessfulTapToTrackFTTapResponse:(id)arg1;	// IMP=0x00000000000194d5
- (_Bool)_isTapToTrackFTTapRequest:(id)arg1;	// IMP=0x000000000001944d
- (_Bool)_isFixedFocusFTTapRequest:(id)arg1;	// IMP=0x00000000000193c5
- (_Bool)_isFixedFocusFTTapRequestMetadata:(id)arg1;	// IMP=0x0000000000019318
- (_Bool)_isValidNormalizedPoint:(struct CGPoint)arg1;	// IMP=0x00000000000192e4
- (id)_userTapFromMetadata:(id)arg1 frameDetections:(id)arg2 disparityBuffer:(struct __CVBuffer *)arg3;	// IMP=0x00000000000191f8
- (_Bool)_userTapEndsForBaseFocusDetection:(id)arg1;	// IMP=0x0000000000018f8b
- (_Bool)_userTapEndsForChangedFocusWithDisparityBuffer:(struct __CVBuffer *)arg1;	// IMP=0x0000000000018c10
- (_Bool)_userTapLockEndsAtTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x0000000000018b3d
- (float)_minimumUserTapSeconds;	// IMP=0x0000000000018b00
- (id)_chooseFocusDetection:(id)arg1;	// IMP=0x0000000000018900
- (float)_userDefaultFixedFocusDisparity;	// IMP=0x00000000000188d2
- (id)_userDefaultNetworkVersion;	// IMP=0x00000000000188a4
- (unsigned long long)_userDefaultFocusStrategy;	// IMP=0x0000000000018876
- (void)_getFocusStrategyIfNeeded;	// IMP=0x000000000001865c
- (id)_stringValueForAssignmentString:(id)arg1;	// IMP=0x00000000000185e2
- (float)_floatValueForAssignmentString:(id)arg1;	// IMP=0x0000000000018546
- (id)_detectionForFixedFocusDistance:(float)arg1 rect:(struct CGRect)arg2;	// IMP=0x000000000001846a
- (id)_chooseLargestAreaDetection:(id)arg1;	// IMP=0x00000000000182b4
- (id)_chooseClosestObjectDetection:(id)arg1;	// IMP=0x000000000001813d
- (void)_reset;	// IMP=0x0000000000017ef3
- (float)_defaultAperture;	// IMP=0x0000000000017e2b
- (id)_nextSnapshotForPolicy:(unsigned long long)arg1;	// IMP=0x0000000000017db9
- (void)_restoreInternalState:(id)arg1;	// IMP=0x00000000000179cf
- (id)_copyInternalState;	// IMP=0x00000000000177d5
- (id)_copyUserFocusDetectionFromDetections:(id)arg1;	// IMP=0x000000000001763c
- (id)_frameFromDetections:(id)arg1 userAperture:(float)arg2 snapshotPolicy:(unsigned long long)arg3 disparityPixelBuffer:(struct __CVBuffer *)arg4;	// IMP=0x0000000000016cb0
- (_Bool)getGlobalMetadata:(id)arg1;	// IMP=0x0000000000016ba9
@property(readonly) NSString *modelVersionString;
- (void)adviseDidStopRecording;	// IMP=0x0000000000016b0f
- (void)adviseDidStartRecording;	// IMP=0x0000000000016af8
- (void)endOfStream;	// IMP=0x0000000000016a77
- (id)processColorBuffer:(struct __CVBuffer *)arg1 disparityBuffer:(struct __CVBuffer *)arg2 metadataDictionary:(id)arg3 presentationTime:(CDStruct_1b6d18a9)arg4;	// IMP=0x00000000000168b6
- (id)initWithOptions:(id)arg1;	// IMP=0x00000000000166ee
- (id)init;	// IMP=0x00000000000166da

@end

