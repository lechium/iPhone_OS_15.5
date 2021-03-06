//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLKDevice, NSDate, NSMapTable, NSMutableArray, NSString, NTKComplication, NTKFace;
@protocol NTKComplicationDisplay;

@interface NTKComplicationController : NSObject
{
    _Bool _hasGoneLive;	// 8 = 0x8
    _Bool _active;	// 9 = 0x9
    id <NTKComplicationDisplay> _legacyDisplayDEPRECATED;	// 16 = 0x10
    NSMutableArray *_displayWrappers;	// 24 = 0x18
    NSMapTable *_displayWrappersToDataMode;	// 32 = 0x20
    _Bool _showsLockedUI;	// 40 = 0x28
    _Bool _faceZooming;	// 41 = 0x29
    NTKComplication *_complication;	// 48 = 0x30
    long long _complicationFamily;	// 56 = 0x38
    NTKFace *_face;	// 64 = 0x40
    NSString *_slot;	// 72 = 0x48
    CLKDevice *_device;	// 80 = 0x50
    CDUnknownBlockType _invalidationHandler;	// 88 = 0x58
    NSDate *_pauseDate;	// 96 = 0x60
    long long _cachingMode;	// 104 = 0x68
    long long _updatingMode;	// 112 = 0x70
    long long _animationMode;	// 120 = 0x78
    long long _effectiveFaceDataMode;	// 128 = 0x80
}

+ (id)DEPRECATEDControllerForComplication:(id)arg1 withLegacyDisplay:(id)arg2 forDevice:(id)arg3;	// IMP=0x00000000002a0d55
+ (_Bool)_isLegacy;	// IMP=0x00000000002a0d2b
+ (_Bool)_acceptsComplicationType:(unsigned long long)arg1 family:(long long)arg2 forDevice:(id)arg3;	// IMP=0x00000000002a0d23
+ (_Bool)_acceptsComplicationType:(unsigned long long)arg1 forDevice:(id)arg2;	// IMP=0x00000000002a0d1b
+ (Class)controllerClassForComplicationType:(unsigned long long)arg1 family:(long long)arg2 forDevice:(id)arg3;	// IMP=0x00000000002a0cd6
+ (id)controllerForComplication:(id)arg1 withRequestedFamily:(long long)arg2 face:(id)arg3 slot:(id)arg4;	// IMP=0x00000000002a06dd
- (void).cxx_destruct;	// IMP=0x00000000002a1e58
@property(readonly, nonatomic) long long effectiveFaceDataMode; // @synthesize effectiveFaceDataMode=_effectiveFaceDataMode;
@property(readonly, nonatomic) long long animationMode; // @synthesize animationMode=_animationMode;
@property(readonly, nonatomic) long long updatingMode; // @synthesize updatingMode=_updatingMode;
@property(readonly, nonatomic) long long cachingMode; // @synthesize cachingMode=_cachingMode;
@property(nonatomic, getter=isFaceZooming) _Bool faceZooming; // @synthesize faceZooming=_faceZooming;
@property(nonatomic) _Bool showsLockedUI; // @synthesize showsLockedUI=_showsLockedUI;
@property(retain, nonatomic) NSDate *pauseDate; // @synthesize pauseDate=_pauseDate;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(readonly, nonatomic) CLKDevice *device; // @synthesize device=_device;
@property(readonly, nonatomic) NSString *slot; // @synthesize slot=_slot;
@property(readonly, nonatomic) NTKFace *face; // @synthesize face=_face;
@property(readonly, nonatomic) long long complicationFamily; // @synthesize complicationFamily=_complicationFamily;
@property(readonly, nonatomic) NTKComplication *complication; // @synthesize complication=_complication;
- (void)_handleRenderStatsForDisplayWrapper:(id)arg1 withTime:(double)arg2 cost:(double)arg3;	// IMP=0x00000000002a1da6
- (void)notifyDelegateOnTimelineChangeWithTritiumUpdatePriority:(long long)arg1;	// IMP=0x00000000002a1da0
- (id)complicationApplicationIdentifier;	// IMP=0x00000000002a1d98
- (void)performBackgroundDataRefresh;	// IMP=0x00000000002a1d92
- (void)_openApp:(id)arg1 withURL:(id)arg2 result:(CDUnknownBlockType)arg3;	// IMP=0x00000000002a1d7f
- (void)_openAppWithURL:(id)arg1;	// IMP=0x00000000002a1d07
- (void)didTouchUpInsideView:(id)arg1;	// IMP=0x00000000002a1d01
- (void)didTouchDownInView:(id)arg1;	// IMP=0x00000000002a1cfb
- (void)performTapAction;	// IMP=0x00000000002a1cf5
- (_Bool)hasTapAction;	// IMP=0x00000000002a1ced
- (void)handleFaceDefaultsChanged;	// IMP=0x00000000002a1ce7
- (void)_configureForLegacyDisplay:(id)arg1;	// IMP=0x00000000002a1ce1
@property(readonly, nonatomic) __weak id <NTKComplicationDisplay> legacyDisplay;
- (void)enumerateDisplayWrappersWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000002a1bb4
- (void)removeDisplayWrapper:(id)arg1;	// IMP=0x00000000002a1ab7
- (void)addDisplayWrapper:(id)arg1;	// IMP=0x00000000002a1784
- (void)dealloc;	// IMP=0x00000000002a1746
- (void)_activate;	// IMP=0x00000000002a1740
- (void)activate;	// IMP=0x00000000002a1719
- (void)_deactivate;	// IMP=0x00000000002a1713
- (void)deactivate;	// IMP=0x00000000002a16e6
- (void)setDataMode:(long long)arg1 forDisplayWrapper:(id)arg2;	// IMP=0x00000000002a1623
- (void)_updateIsComplicationActive:(_Bool)arg1;	// IMP=0x00000000002a161d
- (void)_applyAnimationMode;	// IMP=0x00000000002a1617
- (void)_applyCachingMode;	// IMP=0x00000000002a1611
- (void)_applyUpdatingMode;	// IMP=0x00000000002a160b
- (void)_updateInternalModes:(_Bool)arg1;	// IMP=0x00000000002a13ca
- (void)_updateEffectiveFaceDataMode;	// IMP=0x00000000002a1219
- (void)_updateEffectiveAnimationMode;	// IMP=0x00000000002a11e6
- (void)_updateEffectiveUpdatingMode;	// IMP=0x00000000002a11c4
- (void)_updateEffectiveCachingMode;	// IMP=0x00000000002a116c
- (void)DEPRECATEDInvalidate;	// IMP=0x00000000002a115a
- (id)_initWithComplication:(id)arg1 legacyDisplay:(id)arg2 forDevice:(id)arg3;	// IMP=0x00000000002a10ac
- (id)initWithComplication:(id)arg1 family:(long long)arg2 face:(id)arg3 slot:(id)arg4;	// IMP=0x00000000002a0f67
- (Class)richComplicationDisplayViewClass;	// IMP=0x00000000002a0d4d
- (_Bool)wantsLegacyDisplay;	// IMP=0x00000000002a0d33

@end

