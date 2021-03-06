//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIButton.h>

@class UIImageView;

@interface MFComposeSMIMELockButton : UIButton
{
    UIImageView *_lockedImageView;	// 8 = 0x8
    UIImageView *_unlockedImageView;	// 16 = 0x10
    _Bool _wantsEncryption;	// 24 = 0x18
    _Bool _canEncrypt;	// 25 = 0x19
    struct UIEdgeInsets touchInsets;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000004a5e7
@property(nonatomic) _Bool canEncrypt; // @synthesize canEncrypt=_canEncrypt;
@property(nonatomic) _Bool wantsEncryption; // @synthesize wantsEncryption=_wantsEncryption;
@property(nonatomic) struct UIEdgeInsets touchInsets; // @synthesize touchInsets;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000000004a3b0
- (void)_closeLock;	// IMP=0x000000000004a35c
- (void)_openLock;	// IMP=0x000000000004a308
- (void)_updateButtonAppearanceAnimated:(_Bool)arg1;	// IMP=0x000000000004a16a
- (void)_updateButtonAppearance;	// IMP=0x000000000004a156
- (void)setWantsEncryption:(_Bool)arg1 canEncrypt:(_Bool)arg2 animated:(_Bool)arg3;	// IMP=0x000000000004a12d
- (void)setEnabled:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000049f29
- (void)setEnabled:(_Bool)arg1;	// IMP=0x0000000000049f15
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000049c33

@end

