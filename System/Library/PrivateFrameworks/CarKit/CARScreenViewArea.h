//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CARScreenViewArea : NSObject
{
    _Bool _displaysTransitionControl;	// 8 = 0x8
    _Bool _supportsFocusTransfer;	// 9 = 0x9
    _Bool _supportsUIOutsideSafeArea;	// 10 = 0xa
    unsigned long long _statusBarEdge;	// 16 = 0x10
    struct CGRect _visibleFrame;	// 24 = 0x18
    struct CGRect _safeFrame;	// 56 = 0x38
    struct CGRect _unadjustedSafeFrame;	// 88 = 0x58
}

+ (struct NSEdgeInsets)insetsForOEMUIWithDisplaySize:(struct CGSize)arg1 safeFrame:(struct CGRect)arg2 viewAreaFrame:(struct CGRect)arg3;	// IMP=0x0000000000015569
@property(nonatomic) _Bool supportsUIOutsideSafeArea; // @synthesize supportsUIOutsideSafeArea=_supportsUIOutsideSafeArea;
@property(nonatomic) _Bool supportsFocusTransfer; // @synthesize supportsFocusTransfer=_supportsFocusTransfer;
@property(nonatomic) struct CGRect unadjustedSafeFrame; // @synthesize unadjustedSafeFrame=_unadjustedSafeFrame;
@property(nonatomic) unsigned long long statusBarEdge; // @synthesize statusBarEdge=_statusBarEdge;
@property(nonatomic) _Bool displaysTransitionControl; // @synthesize displaysTransitionControl=_displaysTransitionControl;
@property(readonly, nonatomic) struct CGRect safeFrame; // @synthesize safeFrame=_safeFrame;
@property(readonly, nonatomic) struct CGRect visibleFrame; // @synthesize visibleFrame=_visibleFrame;
- (_Bool)isEqualToViewArea:(id)arg1;	// IMP=0x00000000000159d5
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001596e
- (id)description;	// IMP=0x00000000000157cd
- (id)initWithPropertySupplier:(CDUnknownBlockType)arg1 additionalInsets:(struct NSEdgeInsets)arg2 viewAreaDictionary:(id)arg3 displayPixelSize:(struct CGSize)arg4 wantsCornerMasks:(_Bool)arg5;	// IMP=0x0000000000014b16
- (id)initWithPropertySupplier:(CDUnknownBlockType)arg1 additionalInsets:(struct NSEdgeInsets)arg2;	// IMP=0x0000000000014aec
- (id)initWithPropertySupplier:(CDUnknownBlockType)arg1;	// IMP=0x0000000000014aa5

@end
