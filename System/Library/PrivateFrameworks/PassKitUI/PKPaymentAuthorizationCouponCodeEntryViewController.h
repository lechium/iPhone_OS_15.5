//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <PassKitUI/UITextFieldDelegate-Protocol.h>

@class NSError, NSString, UIScrollView, UIStackView, UITextField, UIView;
@protocol PKPaymentAuthorizationCouponCodeEntryViewControllerDelegate;

@interface PKPaymentAuthorizationCouponCodeEntryViewController : UIViewController <UITextFieldDelegate>
{
    NSString *_couponCode;	// 8 = 0x8
    _Bool _awaitingCouponCodeUpdate;	// 16 = 0x10
    NSError *_firstError;	// 24 = 0x18
    UIScrollView *_scrollView;	// 32 = 0x20
    UIStackView *_stackView;	// 40 = 0x28
    UITextField *_textField;	// 48 = 0x30
    UIView *_accessoryView;	// 56 = 0x38
    _Bool _active;	// 64 = 0x40
    _Bool _finishing;	// 65 = 0x41
    long long _style;	// 72 = 0x48
    id <PKPaymentAuthorizationCouponCodeEntryViewControllerDelegate> _delegate;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000000d7990
@property(nonatomic) __weak id <PKPaymentAuthorizationCouponCodeEntryViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
- (void)keyboardWillHide:(id)arg1;	// IMP=0x00000000000d78d0
- (void)keyboardDidShow:(id)arg1;	// IMP=0x00000000000d766d
- (void)updatePreferredContentSize;	// IMP=0x00000000000d75cf
- (_Bool)shouldUpdatePreferredContentSize;	// IMP=0x00000000000d755e
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x00000000000d7430
- (void)textFieldDidEditingChanged:(id)arg1;	// IMP=0x00000000000d741e
- (void)viewDidLayoutSubviews;	// IMP=0x00000000000d73dd
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000000d735c
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000000d7308
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000d71ff
- (void)viewDidLoad;	// IMP=0x00000000000d65de
- (void)updateAccessoryView;	// IMP=0x00000000000d648b
- (void)clearAccessoryView;	// IMP=0x00000000000d6453
- (void)setAccessoryViewToCheckmark;	// IMP=0x00000000000d633a
- (void)setAccessoryViewToError:(id)arg1;	// IMP=0x00000000000d61ef
- (void)setAccessoryViewToActivityIndicator;	// IMP=0x00000000000d6113
- (id)canonicalizedText;	// IMP=0x00000000000d60c2
- (void)reloadDataItem;	// IMP=0x00000000000d5e6f
- (_Bool)isViewTranslucent;	// IMP=0x00000000000d5e4a
- (_Bool)isPaymentStyle;	// IMP=0x00000000000d5e32
- (id)initWithStyle:(long long)arg1;	// IMP=0x00000000000d5dee

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

