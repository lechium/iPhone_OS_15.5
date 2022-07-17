//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSLayoutConstraint.h>

@class MPUNotificationObserver, NSString, UILabel;

@interface MPUContentSizeLayoutConstraint : NSLayoutConstraint
{
    MPUNotificationObserver *_preferredContentSizeDidChangeObserver;	// 8 = 0x8
    double _textStyleDefaultLeading;	// 16 = 0x10
    _Bool _isBaselineConstraint;	// 24 = 0x18
    _Bool _isLineNumberConstraint;	// 25 = 0x19
    unsigned long long _numberOfLines;	// 32 = 0x20
    UILabel *_targetLabel;	// 40 = 0x28
    double _fontSizeMultiplier;	// 48 = 0x30
    double _defaultSizeConstant;	// 56 = 0x38
    NSString *_textStyle;	// 64 = 0x40
}

+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 autoupdatingConstantFromLabel:(id)arg7 textStyle:(id)arg8 numberOfLines:(unsigned long long)arg9;	// IMP=0x000000000001a746
+ (id)constraintWithAutoupdatingBaselineOfView:(id)arg1 relation:(long long)arg2 toView:(id)arg3 attribute:(long long)arg4 withTextStyle:(id)arg5 multiplier:(double)arg6 nonStandardLeading:(double)arg7;	// IMP=0x000000000001a71d
+ (id)constraintWithAutoupdatingBaselineOfView:(id)arg1 relation:(long long)arg2 toView:(id)arg3 attribute:(long long)arg4 withTextStyle:(id)arg5 nonStandardLeading:(double)arg6;	// IMP=0x000000000001a6fd
+ (id)constraintWithAutoupdatingBaselineOfView:(id)arg1 toView:(id)arg2 attribute:(long long)arg3 withTextStyle:(id)arg4 nonStandardLeading:(double)arg5;	// IMP=0x000000000001a6d3
+ (id)contentSizeAutoupdatingConstraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 textStyle:(id)arg7 defaultSizeConstant:(double)arg8;	// IMP=0x000000000001a612
- (void).cxx_destruct;	// IMP=0x000000000001afff
@property(copy, nonatomic) NSString *textStyle; // @synthesize textStyle=_textStyle;
@property(nonatomic) double defaultSizeConstant; // @synthesize defaultSizeConstant=_defaultSizeConstant;
@property(nonatomic) double fontSizeMultiplier; // @synthesize fontSizeMultiplier=_fontSizeMultiplier;
- (void)_updatePreferredContentSize;	// IMP=0x000000000001ab04

@end
