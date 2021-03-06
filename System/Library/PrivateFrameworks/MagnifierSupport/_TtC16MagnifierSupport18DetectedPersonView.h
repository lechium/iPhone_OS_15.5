//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE;

@interface _TtC16MagnifierSupport18DetectedPersonView : UIView
{
    MISSING_TYPE *isDepthHidden;	// 8 = 0x8
    MISSING_TYPE *edgeInsets;	// 16 = 0x10
    MISSING_TYPE *isCenterDetectionEnabled;	// 48 = 0x30
    MISSING_TYPE *noDetectionMessage;	// 56 = 0x38
    MISSING_TYPE *delegate;	// 72 = 0x48
    MISSING_TYPE *kTargetPositionArrayMaxSize;	// 88 = 0x58
    MISSING_TYPE *kFirstPointDepth;	// 96 = 0x60
    MISSING_TYPE *kDimmingFactor;	// 104 = 0x68
    MISSING_TYPE *kDepthLabelViewOpacity;	// 112 = 0x70
    MISSING_TYPE *kRecordButtonSize;	// 120 = 0x78
    MISSING_TYPE *kRecordButtonMargin;	// 128 = 0x80
    MISSING_TYPE *kTapToRadarButtonMargin;	// 136 = 0x88
    MISSING_TYPE *kTapToRadarButtonSize;	// 144 = 0x90
    MISSING_TYPE *kRestartButtonSize;	// 152 = 0x98
    MISSING_TYPE *kDebugButtonsBottom;	// 160 = 0xa0
    MISSING_TYPE *kNoDetectionFont;	// 168 = 0xa8
    MISSING_TYPE *kSafeAreaBottom;	// 176 = 0xb0
    MISSING_TYPE *kSafeAreaTop;	// 184 = 0xb8
    MISSING_TYPE *kSafeAreaLeft;	// 192 = 0xc0
    MISSING_TYPE *kSafeAreaRight;	// 200 = 0xc8
    MISSING_TYPE *_positionLabel;	// 208 = 0xd0
    MISSING_TYPE *_dottedLineLabel;	// 216 = 0xd8
    MISSING_TYPE *_depthLabelView;	// 224 = 0xe0
    MISSING_TYPE *_depthLabel;	// 232 = 0xe8
    MISSING_TYPE *_previousTargetPoint;	// 240 = 0xf0
    MISSING_TYPE *_currentTargetPoint;	// 264 = 0x108
    MISSING_TYPE *_nextTargetPoint;	// 288 = 0x120
    MISSING_TYPE *_targetAnimationDisplayLink;	// 312 = 0x138
    MISSING_TYPE *_startTargetTime;	// 320 = 0x140
    MISSING_TYPE *kTargetAnimationDuration;	// 336 = 0x150
    MISSING_TYPE *_noDetectionLabel;	// 344 = 0x158
    MISSING_TYPE *_recordButton;	// 352 = 0x160
    MISSING_TYPE *_tapToRadarButton;	// 360 = 0x168
    MISSING_TYPE *_restartButton;	// 368 = 0x170
    MISSING_TYPE *_rotationSubscription;	// 376 = 0x178
}

- (void).cxx_destruct;	// IMP=0x000000000007d4e0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000007d460
- (void)accessibilityElementDidBecomeFocused;	// IMP=0x000000000007d380
- (_Bool)accessibilityActivate;	// IMP=0x000000000007d1b0
- (void)didTapRestartButton:(id)arg1;	// IMP=0x000000000007d100
- (void)didTapTapToRadarButton:(id)arg1;	// IMP=0x000000000007d050
- (void)didTapRecordButton:(id)arg1;	// IMP=0x000000000007d000
- (void)updateTargetAnimation;	// IMP=0x000000000007c6b0
- (unsigned int)_accessibilityMediaAnalysisOptions;	// IMP=0x000000000007ba30
- (id)_accessibilitySupplementaryFooterViews;	// IMP=0x000000000007b9c0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000007b680

@end

