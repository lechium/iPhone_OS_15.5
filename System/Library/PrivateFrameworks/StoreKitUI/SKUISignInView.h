//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <StoreKitUI/SKUIViewElementView-Protocol.h>
#import <StoreKitUI/UITextFieldDelegate-Protocol.h>

@class NSMapTable, NSMutableArray, NSString, SKUIShapeView, SKUIViewElement, UIColor;
@protocol SKUISignInViewDelegate;

__attribute__((visibility("hidden")))
@interface SKUISignInView : UIView <UITextFieldDelegate, SKUIViewElementView>
{
    UIColor *_borderColor;	// 8 = 0x8
    SKUIShapeView *_borderView;	// 16 = 0x10
    NSMutableArray *_labels;	// 24 = 0x18
    NSMutableArray *_textFields;	// 32 = 0x20
    SKUIViewElement *_viewElement;	// 40 = 0x28
    NSMapTable *_viewFontDescriptors;	// 48 = 0x30
    id <SKUISignInViewDelegate> _delegate;	// 56 = 0x38
}

+ (id)_textFieldWithViewElement:(id)arg1;	// IMP=0x0000000000335b17
+ (id)_labelWithViewElement:(id)arg1;	// IMP=0x00000000003359b2
+ (id)_fontDescriptorWithViewElement:(id)arg1 defaultTextStyle:(id)arg2 bold:(_Bool)arg3;	// IMP=0x000000000033588f
+ (id)_borderPathWithSize:(struct CGSize)arg1;	// IMP=0x0000000000335624
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;	// IMP=0x0000000000334986
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x0000000000334980
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;	// IMP=0x000000000033496a
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x0000000000334962
- (void).cxx_destruct;	// IMP=0x000000000033686c
@property(nonatomic) __weak id <SKUISignInViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_layoutTextFieldsOffsetX:(double)arg1;	// IMP=0x000000000033645f
- (double)_layoutLabels;	// IMP=0x00000000003360d8
- (void)_clearFieldsAndLabels;	// IMP=0x0000000000335e74
- (id)_applePasswordText;	// IMP=0x0000000000335df8
- (id)_accountNameText;	// IMP=0x0000000000335d7d
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;	// IMP=0x0000000000335491
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000335314
- (void)layoutSubviews;	// IMP=0x0000000000335068
- (_Bool)resignFirstResponder;	// IMP=0x0000000000334ede
- (_Bool)canBecomeFirstResponder;	// IMP=0x0000000000334ed6
- (_Bool)becomeFirstResponder;	// IMP=0x0000000000334ea7
- (id)viewForElementIdentifier:(id)arg1;	// IMP=0x0000000000334e9f
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000334e97
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x0000000000334e8f
- (void)setContentInset:(struct UIEdgeInsets)arg1;	// IMP=0x0000000000334e89
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x0000000000334a8a
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000334857

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

