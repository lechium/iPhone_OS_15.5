//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/NSCopying-Protocol.h>
#import <SpringBoard/NSMutableCopying-Protocol.h>

@class SBFFluidBehaviorSettings;

@interface SBSwitcherAnimationAttributes : NSObject <NSCopying, NSMutableCopying>
{
    long long _updateMode;	// 8 = 0x8
    SBFFluidBehaviorSettings *_layoutSettings;	// 16 = 0x10
    SBFFluidBehaviorSettings *_positionSettings;	// 24 = 0x18
    SBFFluidBehaviorSettings *_scaleSettings;	// 32 = 0x20
    SBFFluidBehaviorSettings *_opacitySettings;	// 40 = 0x28
    SBFFluidBehaviorSettings *_cornerRadiusSettings;	// 48 = 0x30
    SBFFluidBehaviorSettings *_clippingSettings;	// 56 = 0x38
    long long _layoutUpdateMode;	// 64 = 0x40
    long long _positionUpdateMode;	// 72 = 0x48
    long long _scaleUpdateMode;	// 80 = 0x50
    long long _opacityUpdateMode;	// 88 = 0x58
    long long _cornerRadiusUpdateMode;	// 96 = 0x60
    long long _clippingUpdateMode;	// 104 = 0x68
    long long _titleAndIconOpacityUpdateMode;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00000000006916c4
@property(nonatomic) long long titleAndIconOpacityUpdateMode; // @synthesize titleAndIconOpacityUpdateMode=_titleAndIconOpacityUpdateMode;
@property(nonatomic) long long clippingUpdateMode; // @synthesize clippingUpdateMode=_clippingUpdateMode;
@property(nonatomic) long long cornerRadiusUpdateMode; // @synthesize cornerRadiusUpdateMode=_cornerRadiusUpdateMode;
@property(nonatomic) long long opacityUpdateMode; // @synthesize opacityUpdateMode=_opacityUpdateMode;
@property(nonatomic) long long scaleUpdateMode; // @synthesize scaleUpdateMode=_scaleUpdateMode;
@property(nonatomic) long long positionUpdateMode; // @synthesize positionUpdateMode=_positionUpdateMode;
@property(nonatomic) long long layoutUpdateMode; // @synthesize layoutUpdateMode=_layoutUpdateMode;
@property(retain, nonatomic) SBFFluidBehaviorSettings *clippingSettings; // @synthesize clippingSettings=_clippingSettings;
@property(retain, nonatomic) SBFFluidBehaviorSettings *cornerRadiusSettings; // @synthesize cornerRadiusSettings=_cornerRadiusSettings;
@property(retain, nonatomic) SBFFluidBehaviorSettings *opacitySettings; // @synthesize opacitySettings=_opacitySettings;
@property(retain, nonatomic) SBFFluidBehaviorSettings *scaleSettings; // @synthesize scaleSettings=_scaleSettings;
@property(retain, nonatomic) SBFFluidBehaviorSettings *positionSettings; // @synthesize positionSettings=_positionSettings;
@property(retain, nonatomic) SBFFluidBehaviorSettings *layoutSettings; // @synthesize layoutSettings=_layoutSettings;
@property(nonatomic) long long updateMode; // @synthesize updateMode=_updateMode;
- (id)_copyWithClass:(Class)arg1;	// IMP=0x0000000000691467
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000691439
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000069140b

@end

