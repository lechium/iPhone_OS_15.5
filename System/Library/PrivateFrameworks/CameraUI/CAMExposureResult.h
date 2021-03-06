//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CAMExposureResult : NSObject
{
    _Bool _adjustingExposure;	// 8 = 0x8
    _Bool _exposureDidStart;	// 9 = 0x9
    _Bool _exposureDidEnd;	// 10 = 0xa
    _Bool _deviceSupportsFocus;	// 11 = 0xb
    float _exposureTargetBias;	// 12 = 0xc
    long long _exposureMode;	// 16 = 0x10
    struct CGPoint _pointOfInterest;	// 24 = 0x18
}

@property(readonly, nonatomic) _Bool deviceSupportsFocus; // @synthesize deviceSupportsFocus=_deviceSupportsFocus;
@property(readonly, nonatomic) _Bool exposureDidEnd; // @synthesize exposureDidEnd=_exposureDidEnd;
@property(readonly, nonatomic) _Bool exposureDidStart; // @synthesize exposureDidStart=_exposureDidStart;
@property(readonly, nonatomic) float exposureTargetBias; // @synthesize exposureTargetBias=_exposureTargetBias;
@property(readonly, nonatomic) long long exposureMode; // @synthesize exposureMode=_exposureMode;
@property(readonly, nonatomic) struct CGPoint pointOfInterest; // @synthesize pointOfInterest=_pointOfInterest;
@property(readonly, nonatomic, getter=isAdjustingExposure) _Bool adjustingExposure; // @synthesize adjustingExposure=_adjustingExposure;
- (id)description;	// IMP=0x000000000009b0dc
- (id)initWithMode:(long long)arg1 pointOfInterest:(struct CGPoint)arg2 exposureTargetBias:(float)arg3 adjusting:(_Bool)arg4 exposureDidStart:(_Bool)arg5 exposureDidEnd:(_Bool)arg6 deviceSupportsFocus:(_Bool)arg7;	// IMP=0x000000000009b02f

@end

