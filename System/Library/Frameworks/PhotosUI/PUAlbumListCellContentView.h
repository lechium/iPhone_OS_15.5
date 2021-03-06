//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <PhotosUI/UIGestureRecognizerDelegate-Protocol.h>
#import <PhotosUI/UITextFieldDelegate-Protocol.h>

@class NSString, PUPeopleAvatarView, PUStackView, PXFocusInfo, PXUIButton, UIFont, UILabel, UITextField;
@protocol PUAlbumListCellDelegate;

@interface PUAlbumListCellContentView : UIView <UITextFieldDelegate, UIGestureRecognizerDelegate>
{
    _Bool _combinesPhotoDecorations;	// 8 = 0x8
    _Bool _topInsetEnabled;	// 9 = 0x9
    _Bool _showsAvatarView;	// 10 = 0xa
    _Bool _shouldCenterTextHorizontally;	// 11 = 0xb
    _Bool _editing;	// 12 = 0xc
    _Bool _enabled;	// 13 = 0xd
    _Bool _showsDeleteButtonWhenEditing;	// 14 = 0xe
    _Bool _highlighted;	// 15 = 0xf
    _Bool __showsTitleAndSubtitle;	// 16 = 0x10
    _Bool _usesLabelForTitle;	// 17 = 0x11
    id <PUAlbumListCellDelegate> _delegate;	// 24 = 0x18
    PUStackView *_stackView;	// 32 = 0x20
    PUPeopleAvatarView *_avatarView;	// 40 = 0x28
    UIView *_customImageView;	// 48 = 0x30
    NSString *_title;	// 56 = 0x38
    NSString *_subtitle;	// 64 = 0x40
    double _xInset;	// 72 = 0x48
    long long _layout;	// 80 = 0x50
    unsigned long long _editCapabilities;	// 88 = 0x58
    UIFont *_titleFont;	// 96 = 0x60
    UIFont *_subtitleFont;	// 104 = 0x68
    UITextField *__titleTextField;	// 112 = 0x70
    UILabel *__titleLabel;	// 120 = 0x78
    UILabel *__subtitleLabel;	// 128 = 0x80
    PXUIButton *__deleteButton;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x0000000000061dfd
@property(nonatomic) _Bool usesLabelForTitle; // @synthesize usesLabelForTitle=_usesLabelForTitle;
@property(retain, nonatomic, setter=_setDeleteButton:) PXUIButton *_deleteButton; // @synthesize _deleteButton=__deleteButton;
@property(retain, nonatomic, setter=_setSubtitleLabel:) UILabel *_subtitleLabel; // @synthesize _subtitleLabel=__subtitleLabel;
@property(retain, nonatomic, setter=_setTitleLabel:) UILabel *_titleLabel; // @synthesize _titleLabel=__titleLabel;
@property(retain, nonatomic, setter=_setTitleTextField:) UITextField *_titleTextField; // @synthesize _titleTextField=__titleTextField;
@property(nonatomic, setter=_setShowsTitleAndSubtitle:) _Bool _showsTitleAndSubtitle; // @synthesize _showsTitleAndSubtitle=__showsTitleAndSubtitle;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(retain, nonatomic) UIFont *subtitleFont; // @synthesize subtitleFont=_subtitleFont;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(nonatomic) _Bool showsDeleteButtonWhenEditing; // @synthesize showsDeleteButtonWhenEditing=_showsDeleteButtonWhenEditing;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(nonatomic) unsigned long long editCapabilities; // @synthesize editCapabilities=_editCapabilities;
@property(nonatomic) long long layout; // @synthesize layout=_layout;
@property(nonatomic) double xInset; // @synthesize xInset=_xInset;
@property(nonatomic) _Bool shouldCenterTextHorizontally; // @synthesize shouldCenterTextHorizontally=_shouldCenterTextHorizontally;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIView *customImageView; // @synthesize customImageView=_customImageView;
@property(nonatomic) _Bool showsAvatarView; // @synthesize showsAvatarView=_showsAvatarView;
@property(retain, nonatomic) PUPeopleAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(nonatomic) _Bool topInsetEnabled; // @synthesize topInsetEnabled=_topInsetEnabled;
@property(nonatomic) _Bool combinesPhotoDecorations; // @synthesize combinesPhotoDecorations=_combinesPhotoDecorations;
@property(retain, nonatomic, setter=_setStackView:) PUStackView *stackView; // @synthesize stackView=_stackView;
@property(nonatomic) __weak id <PUAlbumListCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateSubtitleLabelStyle;	// IMP=0x0000000000061a8e
- (void)_updateTitleStyle;	// IMP=0x000000000006187b
- (void)handleLabelTap:(id)arg1;	// IMP=0x0000000000061869
- (void)_deleteAction:(id)arg1;	// IMP=0x00000000000617f4
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x0000000000061761
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x0000000000061749
- (void)textFieldDidEndEditing:(id)arg1;	// IMP=0x000000000006160e
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;	// IMP=0x00000000000615e5
- (_Bool)textFieldShouldBeginEditing:(id)arg1;	// IMP=0x0000000000061580
- (void)cancelPerformRetitleAction;	// IMP=0x0000000000061434
- (void)startPerformRetitleAction;	// IMP=0x00000000000613e5
- (void)_updateSubtitleLabelAnimated:(_Bool)arg1;	// IMP=0x00000000000611f5
- (void)_updateTitleFieldAnimated:(_Bool)arg1;	// IMP=0x0000000000060ead
- (double)_titleFieldAlpha;	// IMP=0x0000000000060e01
- (long long)_titleTextFieldClearButtonModeForLayout:(long long)arg1;	// IMP=0x0000000000060df3
- (void)_updateStackViewAnimated:(_Bool)arg1;	// IMP=0x0000000000060bfc
- (void)_updateDeleteButtonAnimated:(_Bool)arg1;	// IMP=0x0000000000060782
- (void)_updateSubviewOrdering;	// IMP=0x0000000000060653
- (void)_updateAvatarView;	// IMP=0x00000000000604e1
- (void)setEditCapabilities:(unsigned long long)arg1 animated:(_Bool)arg2;	// IMP=0x000000000006041c
- (void)setEnabled:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000006039d
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000602b2
- (void)setSubtitle:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000600cc
@property(readonly, nonatomic) UIView *springLoadingTargetView;
- (void)prepareForReuse;	// IMP=0x000000000005fe7e
- (void)handleTransitionFade:(_Bool)arg1 animate:(_Bool)arg2;	// IMP=0x000000000005fe1e
- (void)setShowsTitle:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000005fda6
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000005fba7
@property(readonly, nonatomic) PXFocusInfo *focusInfo;
- (void)layoutSubviews;	// IMP=0x000000000005ee7b
- (struct CGPoint)_deleteButtonCenter;	// IMP=0x000000000005edfa
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000005ecf6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

