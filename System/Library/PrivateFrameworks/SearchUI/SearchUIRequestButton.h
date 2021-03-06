//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SFCommand, TLKImageView, TLKStackView, TLKStoreButton;

@interface SearchUIRequestButton
{
    int _lastState;	// 8 = 0x8
    TLKStoreButton *_viewButton;	// 16 = 0x10
    TLKImageView *_imageView;	// 24 = 0x18
    TLKStackView *_stackView;	// 32 = 0x20
    SFCommand *_command;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000009c119
@property(retain, nonatomic) SFCommand *command; // @synthesize command=_command;
@property int lastState; // @synthesize lastState=_lastState;
@property(retain, nonatomic) TLKStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) TLKImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) TLKStoreButton *viewButton; // @synthesize viewButton=_viewButton;
- (void)updateButtonState:(_Bool)arg1 withState:(int)arg2;	// IMP=0x000000000009bfd8
- (void)_updateButtonState:(int)arg1;	// IMP=0x000000000009bdbf
- (id)imageWithSymbolName:(id)arg1 accessibilityDescription:(id)arg2;	// IMP=0x000000000009bd1e
- (id)setupView;	// IMP=0x000000000009bb52
- (void)buttonPressed;	// IMP=0x000000000009b977
- (_Bool)shouldTopAlignForAccessibilityContentSizes;	// IMP=0x000000000009b96f

@end

