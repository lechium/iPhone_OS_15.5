//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVCaptureInput, AVCaptureInputPortInternal, NSString;

@interface AVCaptureInputPort : NSObject
{
    AVCaptureInputPortInternal *_internal;	// 8 = 0x8
}

+ (_Bool)automaticallyNotifiesObserversOfClock;	// IMP=0x00000000000557fd
+ (id)portWithInput:(id)arg1 mediaType:(id)arg2 formatDescription:(struct opaqueCMFormatDescription *)arg3 enabled:(_Bool)arg4 sourceDeviceType:(id)arg5 sourceDevicePosition:(long long)arg6;	// IMP=0x000000000005493d
+ (void)initialize;	// IMP=0x000000000005492c
- (void)bumpChangeSeed;	// IMP=0x0000000000056330
- (int)changeSeed;	// IMP=0x0000000000056323
- (id)figCaptureSourceConfigurationForSessionPreset:(id)arg1;	// IMP=0x0000000000055813
- (id)sourceID;	// IMP=0x0000000000055805
- (id)valueForUndefinedKey:(id)arg1;	// IMP=0x000000000005578f
- (_Bool)sourcesFromConstituentDevice;	// IMP=0x00000000000556d0
@property(readonly, nonatomic) long long sourceDevicePosition;
@property(readonly, nonatomic) NSString *sourceDeviceType;
- (void)_updateBackgroundBlurUnavailableReasonsWithDevice:(id)arg1 deviceInput:(id)arg2;	// IMP=0x00000000000554d1
- (void)_updateCenterStageUnavailableReasonsWithDevice:(id)arg1 deviceInput:(id)arg2;	// IMP=0x00000000000552cd
- (void)_setClock:(struct OpaqueCMClock *)arg1;	// IMP=0x000000000005522d
@property(readonly, nonatomic) struct OpaqueCMClock *clock;
@property(nonatomic, getter=isEnabled) _Bool enabled;
- (void)_setFormatDescription:(struct opaqueCMFormatDescription *)arg1;	// IMP=0x0000000000055135
@property(readonly, nonatomic) const struct opaqueCMFormatDescription *formatDescription;
@property(readonly, nonatomic) NSString *mediaType;
@property(readonly, nonatomic) AVCaptureInput *input;
- (id)description;	// IMP=0x0000000000054b71
- (void)setOwner:(id)arg1;	// IMP=0x0000000000054b63
- (void)dealloc;	// IMP=0x0000000000054b28
- (id)_initWithInput:(id)arg1 mediaType:(id)arg2 formatDescription:(struct opaqueCMFormatDescription *)arg3 enabled:(_Bool)arg4 sourceDeviceType:(id)arg5 sourceDevicePosition:(long long)arg6;	// IMP=0x00000000000549a5

@end
