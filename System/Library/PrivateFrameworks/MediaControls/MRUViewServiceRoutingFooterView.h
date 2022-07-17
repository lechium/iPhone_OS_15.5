//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <MediaControls/MRUVisualStylingProviderObserver-Protocol.h>
#import <MediaControls/UIPointerInteractionDelegate-Protocol.h>

@class MRUVisualStylingProvider, NSString, UIButton;

__attribute__((visibility("hidden")))
@interface MRUViewServiceRoutingFooterView : UIView <MRUVisualStylingProviderObserver, UIPointerInteractionDelegate>
{
    UIButton *_button;	// 8 = 0x8
    MRUVisualStylingProvider *_stylingProvider;	// 16 = 0x10
    UIView *_separatorView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000003d9cc
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // @synthesize stylingProvider=_stylingProvider;
@property(readonly, nonatomic) UIButton *button; // @synthesize button=_button;
- (void)updateContentSizeCategory;	// IMP=0x000000000003d907
- (void)updateVisualStyling;	// IMP=0x000000000003d87f
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;	// IMP=0x000000000003d7e8
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;	// IMP=0x000000000003d7db
- (void)visualStylingProviderDidChange:(id)arg1;	// IMP=0x000000000003d7c9
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000003d69c
- (void)layoutSubviews;	// IMP=0x000000000003d4d3
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000003d223

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
