//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TransitSegmentSteppingModeSign, TransitSteppingCameraFramer;

__attribute__((visibility("hidden")))
@interface TransitRouteStepCell
{
    TransitSegmentSteppingModeSign *_sign;	// 112 = 0x70
    TransitSteppingCameraFramer *_cameraFramer;	// 120 = 0x78
}

+ (id)cellWithRoute:(id)arg1 sign:(id)arg2;	// IMP=0x0040000000551d6a
- (void).cxx_destruct;	// IMP=0x0020000000552b99
@property(retain, nonatomic) TransitSteppingCameraFramer *cameraFramer; // @synthesize cameraFramer=_cameraFramer;
@property(retain, nonatomic) TransitSegmentSteppingModeSign *sign; // @synthesize sign=_sign;
- (CDUnknownBlockType)snapshotBlock;	// IMP=0x00100000005527d3
- (void)drawPinInRect:(struct CGRect)arg1 zoomLevel:(double)arg2;	// IMP=0x00100000005527cd
- (void)drawRouteLineInRect:(struct CGRect)arg1 zoomLevel:(double)arg2;	// IMP=0x00100000005527c7
- (id)instructionStringsArray;	// IMP=0x00100000005523a5
- (unsigned long long)numberOfSteps;	// IMP=0x0010000000552333
- (long long)signIndexForStepIndex:(long long)arg1;	// IMP=0x0010000000552180
- (long long)signIndexForSign:(id)arg1;	// IMP=0x0010000000552029
- (id)routeStep;	// IMP=0x0010000000551ef2
- (id)initWithRoute:(id)arg1 sign:(id)arg2;	// IMP=0x0010000000551dd6

@end
