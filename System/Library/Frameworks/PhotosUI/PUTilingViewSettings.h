//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXSettings.h>

@interface PUTilingViewSettings : PXSettings
{
    _Bool _useSpringAnimations;	// 8 = 0x8
    _Bool _useSystemSpringAnimations;	// 9 = 0x9
    _Bool _useOvershootingSpringAnimations;	// 10 = 0xa
    _Bool _allowPaging;	// 11 = 0xb
    _Bool _allowPreheating;	// 12 = 0xc
    _Bool _allowTileReuse;	// 13 = 0xd
    _Bool _allowsEdgeAntialiasing;	// 14 = 0xe
    _Bool _carryOverVelocities;	// 15 = 0xf
    _Bool _tintTiles;	// 16 = 0x10
    _Bool _showVisibleRects;	// 17 = 0x11
    _Bool _rotateDisappearingTiles;	// 18 = 0x12
    _Bool _showSnapshottableTiles;	// 19 = 0x13
    double _animationDragCoefficient;	// 24 = 0x18
    double _springAnimationDuration;	// 32 = 0x20
    double _defaultAnimationDuration;	// 40 = 0x28
    double _transitionDuration;	// 48 = 0x30
    long long _transitionProgressBehavior;	// 56 = 0x38
    double _interactiveTransitionBackgroundDimming;	// 64 = 0x40
    double _transitionChromeDelay;	// 72 = 0x48
}

+ (id)settingsControllerModule;	// IMP=0x0000000000455246
+ (id)sharedInstance;	// IMP=0x0000000000455216
@property(nonatomic) _Bool showSnapshottableTiles; // @synthesize showSnapshottableTiles=_showSnapshottableTiles;
@property(nonatomic) _Bool rotateDisappearingTiles; // @synthesize rotateDisappearingTiles=_rotateDisappearingTiles;
@property(nonatomic) _Bool showVisibleRects; // @synthesize showVisibleRects=_showVisibleRects;
@property(nonatomic) _Bool tintTiles; // @synthesize tintTiles=_tintTiles;
@property(nonatomic) _Bool carryOverVelocities; // @synthesize carryOverVelocities=_carryOverVelocities;
@property(nonatomic) _Bool allowsEdgeAntialiasing; // @synthesize allowsEdgeAntialiasing=_allowsEdgeAntialiasing;
@property(nonatomic) _Bool allowTileReuse; // @synthesize allowTileReuse=_allowTileReuse;
@property(nonatomic) _Bool allowPreheating; // @synthesize allowPreheating=_allowPreheating;
@property(nonatomic) _Bool allowPaging; // @synthesize allowPaging=_allowPaging;
@property(nonatomic) double transitionChromeDelay; // @synthesize transitionChromeDelay=_transitionChromeDelay;
@property(nonatomic) double interactiveTransitionBackgroundDimming; // @synthesize interactiveTransitionBackgroundDimming=_interactiveTransitionBackgroundDimming;
@property(nonatomic) long long transitionProgressBehavior; // @synthesize transitionProgressBehavior=_transitionProgressBehavior;
@property(nonatomic) double transitionDuration; // @synthesize transitionDuration=_transitionDuration;
@property(nonatomic) _Bool useOvershootingSpringAnimations; // @synthesize useOvershootingSpringAnimations=_useOvershootingSpringAnimations;
@property(nonatomic) double defaultAnimationDuration; // @synthesize defaultAnimationDuration=_defaultAnimationDuration;
@property(nonatomic) double springAnimationDuration; // @synthesize springAnimationDuration=_springAnimationDuration;
@property(nonatomic) _Bool useSystemSpringAnimations; // @synthesize useSystemSpringAnimations=_useSystemSpringAnimations;
@property(nonatomic) _Bool useSpringAnimations; // @synthesize useSpringAnimations=_useSpringAnimations;
@property(nonatomic) double animationDragCoefficient; // @synthesize animationDragCoefficient=_animationDragCoefficient;
- (void)setDefaultValues;	// IMP=0x0000000000454df5
- (id)parentSettings;	// IMP=0x0000000000454ddc

@end

