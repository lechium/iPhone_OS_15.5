//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

#import <MediaControls/MRUVisualStylingProviderObserver-Protocol.h>
#import <MediaControls/UIPointerInteractionDelegate-Protocol.h>

@class MRUArtworkView, MRUVisualStylingProvider, NSString, UIActivityIndicatorView, UILabel;

__attribute__((visibility("hidden")))
@interface MRUMediaSuggestionCollectionViewCell : UICollectionViewCell <MRUVisualStylingProviderObserver, UIPointerInteractionDelegate>
{
    _Bool _showActivityIndicator;	// 8 = 0x8
    MRUArtworkView *_artworkView;	// 16 = 0x10
    NSString *_title;	// 24 = 0x18
    NSString *_subtitle;	// 32 = 0x20
    MRUVisualStylingProvider *_stylingProvider;	// 40 = 0x28
    long long _layout;	// 48 = 0x30
    UIActivityIndicatorView *_activityView;	// 56 = 0x38
    UILabel *_titleLabel;	// 64 = 0x40
    UILabel *_subtitleLabel;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000007e97f
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIActivityIndicatorView *activityView; // @synthesize activityView=_activityView;
@property(nonatomic) _Bool showActivityIndicator; // @synthesize showActivityIndicator=_showActivityIndicator;
@property(nonatomic) long long layout; // @synthesize layout=_layout;
@property(retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // @synthesize stylingProvider=_stylingProvider;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) MRUArtworkView *artworkView; // @synthesize artworkView=_artworkView;
- (void)updateVisiblity;	// IMP=0x000000000007e812
- (void)updateContentSizeCategory;	// IMP=0x000000000007e770
- (void)updateVisualStyling;	// IMP=0x000000000007e6cd
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;	// IMP=0x000000000007e6b0
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;	// IMP=0x000000000007e63a
- (void)visualStylingProviderDidChange:(id)arg1;	// IMP=0x000000000007e628
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x000000000007e5e7
- (void)prepareForReuse;	// IMP=0x000000000007e369
- (void)layoutSubviews;	// IMP=0x000000000007e018
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000007dcf7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
