//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CMDeviceMotion;
@protocol CAMPreviewAlignmentModelObserver;

@interface CAMPreviewAlignmentModel : NSObject
{
    _Bool _aligned;	// 8 = 0x8
    id <CAMPreviewAlignmentModelObserver> _observer;	// 16 = 0x10
    double _opacity;	// 24 = 0x18
    CMDeviceMotion *__referenceDeviceMotion;	// 32 = 0x20
    struct CATransform3D _alignmentTransform;	// 40 = 0x28
}

+ (double)desiredUpdateInterval;	// IMP=0x000000000010e6be
- (void).cxx_destruct;	// IMP=0x000000000010f0c4
@property(retain, nonatomic, setter=_setReferenceDeviceMotion:) CMDeviceMotion *_referenceDeviceMotion; // @synthesize _referenceDeviceMotion=__referenceDeviceMotion;
@property(nonatomic, setter=_setOpacity:) double opacity; // @synthesize opacity=_opacity;
@property(nonatomic, getter=isAligned, setter=_setAligned:) _Bool aligned; // @synthesize aligned=_aligned;
@property(nonatomic, setter=_setAlignmentTransform:) struct CATransform3D alignmentTransform; // @synthesize alignmentTransform=_alignmentTransform;
@property(nonatomic) __weak id <CAMPreviewAlignmentModelObserver> observer; // @synthesize observer=_observer;
- (void)reset;	// IMP=0x000000000010eea2
- (void)applyDeviceMotion:(id)arg1;	// IMP=0x000000000010e6cc
- (id)init;	// IMP=0x000000000010e605

@end

