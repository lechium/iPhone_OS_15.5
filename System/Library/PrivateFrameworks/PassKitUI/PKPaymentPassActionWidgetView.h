//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, NSString, PKAccount, PKFamilyMember, PKPaymentPass, PKPeerPaymentAccount;
@protocol PKPaymentPassActionWidgetViewDelegate;

@interface PKPaymentPassActionWidgetView : UIView
{
    NSArray *_displayableWidgets;	// 8 = 0x8
    NSString *_phoneNumber;	// 16 = 0x10
    NSString *_website;	// 24 = 0x18
    NSString *_email;	// 32 = 0x20
    PKFamilyMember *_currentUser;	// 40 = 0x28
    unsigned long long _widgetViewStyle;	// 48 = 0x30
    _Bool _usesAccessibilityLayout;	// 56 = 0x38
    unsigned long long _numberOfWidgetsPerRow;	// 64 = 0x40
    PKAccount *_account;	// 72 = 0x48
    PKPeerPaymentAccount *_peerPaymentAccount;	// 80 = 0x50
    PKPaymentPass *_paymentPass;	// 88 = 0x58
    id <PKPaymentPassActionWidgetViewDelegate> _delegate;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000000001d0b76
@property(retain, nonatomic) PKFamilyMember *currentUser; // @synthesize currentUser=_currentUser;
@property(nonatomic) __weak id <PKPaymentPassActionWidgetViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PKPaymentPass *paymentPass; // @synthesize paymentPass=_paymentPass;
@property(retain, nonatomic) PKPeerPaymentAccount *peerPaymentAccount; // @synthesize peerPaymentAccount=_peerPaymentAccount;
@property(retain, nonatomic) PKAccount *account; // @synthesize account=_account;
- (void)cleanUpExistingWidgets;	// IMP=0x00000000001d09c3
- (void)updateWidgetsAccessibilityLayoutState;	// IMP=0x00000000001d0875
- (unsigned long long)numberOfRowsWithWidgetsPerRow:(unsigned long long)arg1;	// IMP=0x00000000001d0832
- (unsigned long long)numberOfRows;	// IMP=0x00000000001d0815
- (unsigned long long)numberOfWidgetsPerRowWithSize:(struct CGSize)arg1;	// IMP=0x00000000001d066d
- (void)updateNumberOfWidgetsPerRow;	// IMP=0x00000000001d0603
- (_Bool)hasSingleColumnLayout;	// IMP=0x00000000001d05df
- (void)updateUseAccessibilityLayout;	// IMP=0x00000000001d056a
- (id)_createButtonForTitle:(id)arg1 image:(id)arg2;	// IMP=0x00000000001d0462
- (_Bool)hasEnabledWidgets;	// IMP=0x00000000001d0429
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000001d007a
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000001cff86
- (void)_determineWidgetContentWithAvailableWidgets;	// IMP=0x00000000001ce7df
- (id)_titleForAddMoneyWidgetForActions:(id)arg1;	// IMP=0x00000000001ce4f8
- (void)layoutSubviews;	// IMP=0x00000000001ce17c
- (double)targetWidgetWidthForRowWithNumberOfWidgets:(unsigned long long)arg1 rowBounds:(struct CGRect)arg2;	// IMP=0x00000000001ce0e2
- (double)targetWidgetWidthForRowWithNumberOfWidgets:(unsigned long long)arg1 rowSize:(struct CGSize)arg2;	// IMP=0x00000000001ce0a5
- (double)targetWidgetWidthForRowWithNumberOfWidgets:(unsigned long long)arg1;	// IMP=0x00000000001ce04c
- (struct CGRect)widgetBoundsForRowWithBounds:(struct CGRect)arg1;	// IMP=0x00000000001ce012
- (id)initWithWidgetViewStyle:(unsigned long long)arg1;	// IMP=0x00000000001cdf69

@end

