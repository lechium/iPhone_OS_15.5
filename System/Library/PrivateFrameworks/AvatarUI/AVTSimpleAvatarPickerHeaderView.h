//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionReusableView.h>

@class AVTCircularButton, NSString, UIImageSymbolConfiguration;

@interface AVTSimpleAvatarPickerHeaderView : UICollectionReusableView
{
    AVTCircularButton *_button;	// 8 = 0x8
    CDUnknownBlockType _buttonPressedBlock;	// 16 = 0x10
    NSString *_currentSymbolName;	// 24 = 0x18
    UIImageSymbolConfiguration *_plusSymbolConfiguration;	// 32 = 0x20
    UIImageSymbolConfiguration *_ellipsisSymbolConfiguration;	// 40 = 0x28
}

+ (id)reuseIdentifier;	// IMP=0x00000000000432eb
- (void).cxx_destruct;	// IMP=0x0000000000043c41
@property(retain, nonatomic) UIImageSymbolConfiguration *ellipsisSymbolConfiguration; // @synthesize ellipsisSymbolConfiguration=_ellipsisSymbolConfiguration;
@property(retain, nonatomic) UIImageSymbolConfiguration *plusSymbolConfiguration; // @synthesize plusSymbolConfiguration=_plusSymbolConfiguration;
@property(retain, nonatomic) NSString *currentSymbolName; // @synthesize currentSymbolName=_currentSymbolName;
@property(copy, nonatomic) CDUnknownBlockType buttonPressedBlock; // @synthesize buttonPressedBlock=_buttonPressedBlock;
@property(readonly, nonatomic) AVTCircularButton *button; // @synthesize button=_button;
- (void)buttonPressed:(id)arg1;	// IMP=0x0000000000043b50
- (void)updateWithSymbolNamed:(id)arg1 configuration:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000000004387d
- (void)updateForEditMode:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000437e1
- (void)setupLayout;	// IMP=0x0000000000043417
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000432f8

@end

