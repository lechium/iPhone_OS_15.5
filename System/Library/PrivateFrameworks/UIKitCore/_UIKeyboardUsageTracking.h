//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIKeyboardUsageTracking : NSObject
{
}

+ (void)variantDeleteIncrement;	// IMP=0x0000000000af44cf
+ (void)showVariantsIncrement;	// IMP=0x0000000000af449b
+ (void)letterCaseToggleIncrement;	// IMP=0x0000000000af4467
+ (void)keyboardSupportsTouch:(_Bool)arg1;	// IMP=0x0000000000af442e
+ (void)signupPasswordFromKeyboardIncrement;	// IMP=0x0000000000af43fa
+ (void)signupPasswordFromAutofillIncrement;	// IMP=0x0000000000af43c6
+ (void)loginPasswordFromKeyboardIncrement;	// IMP=0x0000000000af4343
+ (void)loginPasswordFromAutofillIncrement;	// IMP=0x0000000000af42c0
+ (void)appAutofillCredentialFromSafariUI;	// IMP=0x0000000000af428c
+ (void)appAutofillExtraKeyTapped;	// IMP=0x0000000000af4258
+ (void)appAutofillFilled;	// IMP=0x0000000000af41d5
+ (void)appAutofillDetectedDecrement;	// IMP=0x0000000000af4152
+ (void)appAutofillDetectedIncrement;	// IMP=0x0000000000af40cf
+ (void)countReachableKeyboardHandBiasChangeToBias:(long long)arg1;	// IMP=0x0000000000af409b
+ (void)countKeystrokeForReachableKeyboardWithBias:(long long)arg1;	// IMP=0x0000000000af404c
+ (void)restAndTypeTriggered;	// IMP=0x0000000000af4018
+ (void)normalPunctuationKeyCount;	// IMP=0x0000000000af3fbd
+ (void)undoKeyCount;	// IMP=0x0000000000af3f62
+ (void)redoKeyCount;	// IMP=0x0000000000af3f07
+ (void)panAlternateKeyFlickDownCount;	// IMP=0x0000000000af3eac
+ (void)singleStringKeyFlickUpCount;	// IMP=0x0000000000af3e51
+ (void)dualStringsKeyFlickUpCount;	// IMP=0x0000000000af3df6
+ (void)keyboardReachabilityDistribution:(double)arg1;	// IMP=0x0000000000af3d2e
+ (void)keyboardTotalOnScreenTime:(double)arg1 orientation:(long long)arg2;	// IMP=0x0000000000af3c53
+ (void)keyboardPerformanceFromTouchRelease:(double)arg1 until:(double)arg2;	// IMP=0x0000000000af3bed
+ (void)keyboardPerformanceFromTouchStart:(double)arg1 until:(double)arg2;	// IMP=0x0000000000af3b46
+ (void)keyboardGestureOneFingerForcePress:(_Bool)arg1 withPressCount:(int)arg2;	// IMP=0x0000000000af3ad3
+ (void)keyboardGestureOneFingerForcePan:(_Bool)arg1;	// IMP=0x0000000000af3a92
+ (void)keyboardGestureTwoFingerTap:(_Bool)arg1 withTapCount:(int)arg2;	// IMP=0x0000000000af3a2f
+ (void)showLowercaseKeyplanePreference:(_Bool)arg1;	// IMP=0x0000000000af39f3
+ (void)showCharacterPreviewPreference:(_Bool)arg1;	// IMP=0x0000000000af39b7
+ (void)selectedPredictiveInputCandidate:(id)arg1 isAutocorrection:(_Bool)arg2 index:(unsigned long long)arg3;	// IMP=0x0000000000af36a0
+ (void)keyboardGestureSelectedPredictiveInputCandidate;	// IMP=0x0000000000af3669
+ (void)keyboardGestureSetPredictionPreference:(_Bool)arg1;	// IMP=0x0000000000af3625
+ (void)inputSwitcherSetPredictionPreference:(_Bool)arg1;	// IMP=0x0000000000af35e1
+ (void)predictionViewState:(_Bool)arg1 forInputMode:(id)arg2;	// IMP=0x0000000000af34a0
+ (void)keyboardExtensionsOnDevice;	// IMP=0x0000000000af30bb
+ (void)keyboardExtensionCrashed;	// IMP=0x0000000000af3084
+ (void)keyboardExtensionPrimaryLanguageChanged;	// IMP=0x0000000000af304d
+ (void)keyboardSetToInputMode:(id)arg1 fromPrevious:(id)arg2;	// IMP=0x0000000000af2e45

@end
