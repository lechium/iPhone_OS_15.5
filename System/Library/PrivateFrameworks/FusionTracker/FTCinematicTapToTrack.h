//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTCinematicTracker, FTNetworkDescriptor, FTTapToBox, FTTapToTrackPreprocessor;
@protocol FTScaling, MTLCommandQueue;

@interface FTCinematicTapToTrack : NSObject
{
    id <MTLCommandQueue> _commandQueue;	// 8 = 0x8
    id <FTScaling> _scaler;	// 16 = 0x10
    FTTapToTrackPreprocessor *_preprocessor;	// 24 = 0x18
    FTNetworkDescriptor *_exemplarNetDesc;	// 32 = 0x20
    FTNetworkDescriptor *_instanceNetDesc;	// 40 = 0x28
    struct unique_ptr<ik::EspressoNet, std::default_delete<ik::EspressoNet>> _exemplarNet;	// 48 = 0x30
    struct unique_ptr<ik::EspressoNet, std::default_delete<ik::EspressoNet>> _instanceNet;	// 56 = 0x38
    struct PixelBufferTensor _exemplarCrop;	// 64 = 0x40
    struct PixelBufferTensor _instanceCrop;	// 120 = 0x78
    FTTapToBox *_tapToBox;	// 176 = 0xb0
    FTCinematicTracker *_tracker;	// 184 = 0xb8
}

+ (id)trackerWithCommandQueue:(id)arg1;	// IMP=0x000000000002eba0
- (id).cxx_construct;	// IMP=0x0000000000031db0
- (void).cxx_destruct;	// IMP=0x0000000000031c40
- (_Bool)isTrackingActive;	// IMP=0x0000000000031c20
- (_Bool)reset;	// IMP=0x0000000000031bf0
- (CDStruct_1586d5e9)stepTrackingWithFrame:(struct __CVBuffer *)arg1;	// IMP=0x0000000000031b40
- (_Bool)startTrackingRect:(struct CGRect)arg1 colorBuffer:(struct __CVBuffer *)arg2;	// IMP=0x0000000000031a80
- (CDStruct_1586d5e9)_unsafeStepTrackingWithFrame:(struct __CVBuffer *)arg1;	// IMP=0x0000000000030e30
- (_Bool)_unsafeStartTrackingRect:(struct CGRect)arg1 colorBuffer:(struct __CVBuffer *)arg2;	// IMP=0x00000000000304f0
- (void)_preprocessBuffer:(struct __CVBuffer *)arg1 andValidateState:(id)arg2 isOp:(long long)arg3;	// IMP=0x00000000000301d0
- (id)_maybeFetchTrackByCommittingState:(id)arg1;	// IMP=0x000000000002ff90
- (CDStruct_1586d5e9)predictRectForPoint:(struct CGPoint)arg1 inColorBuffer:(struct __CVBuffer *)arg2;	// IMP=0x000000000002fee0
- (struct EspressoConfig)_espressoConfigFromDescriptor:(id)arg1 engine:(const void *)arg2;	// IMP=0x000000000002fb60
- (basic_string_5886a005)_resolveNetworkPath:(id)arg1;	// IMP=0x000000000002f940
- (void)_setupNetworksWithEngine:(const void *)arg1;	// IMP=0x000000000002ee50
- (void)_setupScalerWithBackend:(int)arg1;	// IMP=0x000000000002ed90
- (id)initWithEspressoEngine:(int)arg1 scalingBackend:(int)arg2 commandQueue:(id)arg3;	// IMP=0x000000000002ec10

@end

