//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSString, UIAlertController, UIViewController, _UIAlertControllerShimPresenter;

@interface UIAlertView
{
    UIAlertController *_alertController;	// 8 = 0x8
    _UIAlertControllerShimPresenter *_presenter;	// 16 = 0x10
    id _retainedSelf;	// 24 = 0x18
    NSMutableArray *_actions;	// 32 = 0x20
    long long _cancelIndex;	// 40 = 0x28
    long long _defaultButtonIndex;	// 48 = 0x30
    long long _firstOtherButtonIndex;	// 56 = 0x38
    NSString *_message;	// 64 = 0x40
    NSString *_subtitle;	// 72 = 0x48
    long long _alertViewStyle;	// 80 = 0x50
    _Bool _hasPreparedAlertActions;	// 88 = 0x58
    _Bool _isPresented;	// 89 = 0x59
    _Bool _alertControllerShouldDismiss;	// 90 = 0x5a
    _Bool _handlingAlertActionShouldDismiss;	// 91 = 0x5b
    _Bool _dismissingAlertController;	// 92 = 0x5c
    id _delegate;	// 96 = 0x60
    id _context;	// 104 = 0x68
    UIViewController *_externalViewControllerForPresentation;	// 112 = 0x70
}

+ (id)_alertViewForWindow:(id)arg1;	// IMP=0x0000000001152848
+ (id)_alertViewForSessionWithRemoteViewController:(id)arg1;	// IMP=0x000000000115275e
+ (id)_remoteAlertViewWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000011526b9
- (void).cxx_destruct;	// IMP=0x000000000001f961
@property(retain, nonatomic, getter=_externalViewControllerForPresentation, setter=_setExternalViewControllerForPresentation:) UIViewController *externalViewControllerForPresentation; // @synthesize externalViewControllerForPresentation=_externalViewControllerForPresentation;
@property(retain, nonatomic) id context; // @synthesize context=_context;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (id)_alertController;	// IMP=0x000000000001f8d5
- (void)setTableShouldShowMinimumContent:(_Bool)arg1;	// IMP=0x000000000001f8cf
- (id)_addButtonWithTitle:(id)arg1;	// IMP=0x000000000001f8ba
- (id)tableView;	// IMP=0x000000000001f8b2
- (id)keyboard;	// IMP=0x000000000001f8aa
- (id)titleLabel;	// IMP=0x000000000001f8a2
- (id)_titleLabel;	// IMP=0x000000000001f890
- (void)layout;	// IMP=0x000000000001f88a
- (void)dismiss;	// IMP=0x000000000001f873
@property(retain, nonatomic) NSString *bodyText;
@property(nonatomic) _Bool groupsTextFields;
- (void)_setAccessoryView:(id)arg1;	// IMP=0x000000000001f76d
@property(nonatomic) long long numberOfRows;
- (struct CGSize)backgroundSize;	// IMP=0x000000000001f749
- (_Bool)_isAnimating;	// IMP=0x000000000001f707
- (void)_performPresentationDismissalWithClickedButtonIndex:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x000000000001f5ce
- (void)dismissWithClickedButtonIndex:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x000000000001f50c
- (void)dismissAnimated:(_Bool)arg1;	// IMP=0x000000000001f4cc
- (void)show;	// IMP=0x000000000001f4b5
- (void)_showAnimated:(_Bool)arg1;	// IMP=0x000000000001f2e1
- (id)textFieldAtIndex:(long long)arg1;	// IMP=0x000000000001f240
- (id)textField;	// IMP=0x000000000001f1c6
- (int)textFieldCount;	// IMP=0x000000000001f158
- (void)_textDidChangeInTextField:(id)arg1;	// IMP=0x000000000001f146
- (id)addTextFieldWithValue:(id)arg1 label:(id)arg2;	// IMP=0x000000000001f134
- (id)_addTextFieldWithValue:(id)arg1 label:(id)arg2;	// IMP=0x000000000001ee3d
- (long long)_maximumNumberOfTextFieldsForCurrentStyle;	// IMP=0x000000000001edea
- (int)buttonCount;	// IMP=0x000000000001edd8
@property(readonly, nonatomic) long long numberOfButtons;
- (id)buttonTitleAtIndex:(long long)arg1;	// IMP=0x000000000001ed9e
- (void)_updateFirstOtherButtonEnabledState;	// IMP=0x000000000001ecf3
@property(readonly, nonatomic) long long firstOtherButtonIndex;
- (void)_setFirstOtherButtonIndex:(long long)arg1;	// IMP=0x000000000001ecd1
@property(nonatomic) long long cancelButtonIndex;
@property(nonatomic) long long defaultButtonIndex;
- (long long)addButtonWithTitle:(id)arg1;	// IMP=0x000000000001ebb3
- (id)addButtonWithTitle:(id)arg1 buttonClass:(Class)arg2;	// IMP=0x000000000001eb9e
- (id)addButtonWithTitle:(id)arg1 label:(id)arg2;	// IMP=0x000000000001eb89
- (void)_setIsPresented:(_Bool)arg1;	// IMP=0x000000000001eade
- (void)_dismissForTappedIndex:(long long)arg1;	// IMP=0x000000000001eac7
- (_Bool)_prepareToDismissForTappedIndex:(long long)arg1;	// IMP=0x000000000001ea0d
- (id)window;	// IMP=0x000000000001e9f0
@property(nonatomic) long long alertViewStyle;
- (void)_updateMessageAndSubtitle;	// IMP=0x000000000001e795
@property(retain, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSString *message;
@property(copy, nonatomic) NSString *title;
@property(readonly, nonatomic, getter=isVisible) _Bool visible;
- (void)_prepareAlertActions;	// IMP=0x000000000001e337
- (id)_preparedAlertActionAtIndex:(unsigned long long)arg1;	// IMP=0x000000000001e2b3
- (void)_updateButtonTitle:(id)arg1 buttonIndex:(unsigned long long)arg2;	// IMP=0x000000000001e213
- (void)dealloc;	// IMP=0x000000000001e19a
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001e16b
- (id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;	// IMP=0x000000000001df00
- (id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 defaultButton:(id)arg4 cancelButton:(id)arg5 otherButtons:(id)arg6;	// IMP=0x000000000001dc98
- (id)initWithTitle:(id)arg1 buttons:(id)arg2 defaultButtonIndex:(int)arg3 delegate:(id)arg4 context:(id)arg5;	// IMP=0x000000000001da4d
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000001d8a5

@end

