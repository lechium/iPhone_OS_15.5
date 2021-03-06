//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <PassKitUI/PKEnterCurrencyAmountViewDelegate-Protocol.h>
#import <PassKitUI/PKNumberPadSuggestionsViewDelegate-Protocol.h>

@class NSDecimalNumber, NSLayoutConstraint, NSString, PKEnterCurrencyAmountView, PKNumberPadSuggestionsView, PKNumericSuggestionsEnterValueAlgorithm, PKPaymentProvisioningMethodMetadata, PKPaymentSetupProduct, UIButton, UILabel, UIStackView, UITextField;
@protocol PKPaymentSetupPurchaseAmountViewDelegate;

@interface PKPaymentSetupPurchaseAmountView : UIView <PKEnterCurrencyAmountViewDelegate, PKNumberPadSuggestionsViewDelegate>
{
    _Bool _transferButtonEnabled;	// 8 = 0x8
    _Bool _displayingBalanceErrorMessage;	// 9 = 0x9
    _Bool _showTransferButton;	// 10 = 0xa
    id <PKPaymentSetupPurchaseAmountViewDelegate> _delegate;	// 16 = 0x10
    PKPaymentSetupProduct *_product;	// 24 = 0x18
    PKPaymentProvisioningMethodMetadata *_provisioningMethodMetadata;	// 32 = 0x20
    NSString *_currency;	// 40 = 0x28
    NSDecimalNumber *_depositAmount;	// 48 = 0x30
    NSDecimalNumber *_minLoadedBalance;	// 56 = 0x38
    NSDecimalNumber *_maxLoadedBalance;	// 64 = 0x40
    UIStackView *_amountStackView;	// 72 = 0x48
    PKEnterCurrencyAmountView *_enterCurrencyAmountView;	// 80 = 0x50
    NSDecimalNumber *_currentAmount;	// 88 = 0x58
    UILabel *_messageLabel;	// 96 = 0x60
    UIView *_centeringView;	// 104 = 0x68
    NSLayoutConstraint *_fixedConstraint;	// 112 = 0x70
    NSLayoutConstraint *_centeringConstraint;	// 120 = 0x78
    UIButton *_transferBalanceButton;	// 128 = 0x80
    PKNumberPadSuggestionsView *_suggestionView;	// 136 = 0x88
    PKNumericSuggestionsEnterValueAlgorithm *_suggestionGenerator;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x00000000000bf543
@property(nonatomic) _Bool showTransferButton; // @synthesize showTransferButton=_showTransferButton;
@property(retain, nonatomic) PKNumericSuggestionsEnterValueAlgorithm *suggestionGenerator; // @synthesize suggestionGenerator=_suggestionGenerator;
@property(retain, nonatomic) PKNumberPadSuggestionsView *suggestionView; // @synthesize suggestionView=_suggestionView;
@property(retain, nonatomic) UIButton *transferBalanceButton; // @synthesize transferBalanceButton=_transferBalanceButton;
@property(nonatomic) _Bool displayingBalanceErrorMessage; // @synthesize displayingBalanceErrorMessage=_displayingBalanceErrorMessage;
@property(retain, nonatomic) NSLayoutConstraint *centeringConstraint; // @synthesize centeringConstraint=_centeringConstraint;
@property(retain, nonatomic) NSLayoutConstraint *fixedConstraint; // @synthesize fixedConstraint=_fixedConstraint;
@property(retain, nonatomic) UIView *centeringView; // @synthesize centeringView=_centeringView;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) NSDecimalNumber *currentAmount; // @synthesize currentAmount=_currentAmount;
@property(retain, nonatomic) PKEnterCurrencyAmountView *enterCurrencyAmountView; // @synthesize enterCurrencyAmountView=_enterCurrencyAmountView;
@property(retain, nonatomic) UIStackView *amountStackView; // @synthesize amountStackView=_amountStackView;
@property(copy, nonatomic) NSDecimalNumber *maxLoadedBalance; // @synthesize maxLoadedBalance=_maxLoadedBalance;
@property(copy, nonatomic) NSDecimalNumber *minLoadedBalance; // @synthesize minLoadedBalance=_minLoadedBalance;
@property(copy, nonatomic) NSDecimalNumber *depositAmount; // @synthesize depositAmount=_depositAmount;
@property(copy, nonatomic) NSString *currency; // @synthesize currency=_currency;
@property(copy, nonatomic) PKPaymentProvisioningMethodMetadata *provisioningMethodMetadata; // @synthesize provisioningMethodMetadata=_provisioningMethodMetadata;
@property(copy, nonatomic) PKPaymentSetupProduct *product; // @synthesize product=_product;
@property(nonatomic) __weak id <PKPaymentSetupPurchaseAmountViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_transferBalanceButtonTapped:(id)arg1;	// IMP=0x00000000000bf264
- (void)_updateMessageLabelForAmount:(id)arg1;	// IMP=0x00000000000bee22
- (void)_updateCurrentAmount:(id)arg1;	// IMP=0x00000000000bed35
- (_Bool)_shouldShakeCard:(id)arg1;	// IMP=0x00000000000bed07
- (_Bool)_isAmountValid:(id)arg1;	// IMP=0x00000000000bebf1
- (id)_defaultSuggestions;	// IMP=0x00000000000bea9b
- (double)_transferButtonBottomOffset;	// IMP=0x00000000000bea2f
- (id)_defaultValues;	// IMP=0x00000000000be8c1
- (void)_createConstraints;	// IMP=0x00000000000be21e
- (void)_createSubviews;	// IMP=0x00000000000bda70
- (void)numberPadSuggestionsView:(id)arg1 didSelectSuggestion:(id)arg2;	// IMP=0x00000000000bd9ca
- (void)enterCurrencyAmountViewDidLayoutKeyboard:(id)arg1;	// IMP=0x00000000000bd98e
- (void)enterCurrencyAmountViewDidChangeAmount:(id)arg1;	// IMP=0x00000000000bd93f
- (_Bool)enterCurrencyAmountView:(id)arg1 shouldChangeAmountFrom:(id)arg2 to:(id)arg3;	// IMP=0x00000000000bd866
@property(readonly, nonatomic) struct CGSize defaultKeyboardSize;
@property(readonly, nonatomic) UITextField *amountTextField;
- (void)updateConstraints;	// IMP=0x00000000000bd5be
- (void)layoutSubviews;	// IMP=0x00000000000bd511
@property(nonatomic, getter=isTransferButtonEnabled) _Bool transferButtonEnabled;
- (id)initWithProduct:(id)arg1 provisioningMethodMetadata:(id)arg2 showTransferButton:(_Bool)arg3;	// IMP=0x00000000000bd1a7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

