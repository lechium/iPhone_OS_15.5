//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKitUI/SKUIViewElementView-Protocol.h>

@class NSNumberFormatter, NSObject, NSString, SKUICounterTimeView, SKUICounterViewElement, SKUIImageView, UILabel;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SKUICounterView <SKUIViewElementView>
{
    struct UIEdgeInsets _contentInset;	// 8 = 0x8
    SKUICounterViewElement *_counterElement;	// 40 = 0x28
    SKUIImageView *_imageView;	// 48 = 0x30
    NSNumberFormatter *_numberFormatter;	// 56 = 0x38
    UILabel *_numberView;	// 64 = 0x40
    SKUICounterTimeView *_timeView;	// 72 = 0x48
    NSObject<OS_dispatch_source> *_updateTimer;	// 80 = 0x50
}

+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;	// IMP=0x00000000002c6002
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x00000000002c5ffc
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;	// IMP=0x00000000002c5f5f
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x00000000002c5ee5
- (void).cxx_destruct;	// IMP=0x00000000002c70d7
- (unsigned long long)_visibleTimeFieldsForDateFormat:(long long)arg1;	// IMP=0x00000000002c70bb
- (void)_updateTimerAction;	// IMP=0x00000000002c7045
- (void)_stopUpdateTimer;	// IMP=0x00000000002c700b
- (void)_startUpdateTimer;	// IMP=0x00000000002c6e77
- (void)_reloadUpdateTimer;	// IMP=0x00000000002c6de5
- (void)_reloadNumberValue;	// IMP=0x00000000002c6cb4
- (void)_addTimeViewWithViewElement:(id)arg1 context:(id)arg2;	// IMP=0x00000000002c6a5d
- (void)_addNumberViewWithViewElement:(id)arg1 context:(id)arg2;	// IMP=0x00000000002c68a3
- (void)setHidden:(_Bool)arg1;	// IMP=0x00000000002c6862
- (void)setAlpha:(double)arg1;	// IMP=0x00000000002c6821
- (void)layoutSubviews;	// IMP=0x00000000002c6454
- (void)didMoveToSuperview;	// IMP=0x00000000002c6413
- (void)didMoveToWindow;	// IMP=0x00000000002c63d2
- (id)viewForElementIdentifier:(id)arg1;	// IMP=0x00000000002c63ca
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000000002c63c2
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x00000000002c6296
- (void)setContentInset:(struct UIEdgeInsets)arg1;	// IMP=0x00000000002c622c
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x00000000002c6014
- (void)dealloc;	// IMP=0x00000000002c5e9f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
