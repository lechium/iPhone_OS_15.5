//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <CoreSuggestionsUI/SGBannerProtocol-Protocol.h>

@class NSArray, NSAttributedString, NSLayoutXAxisAnchor, NSString, SGSuggestionStore, _TtC17CoreSuggestionsUI15SGBannerContent, _TtC17CoreSuggestionsUI26SGBannerContentHostingView;
@protocol SGSuggestion, SGSuggestionDelegate;

@interface SGBannerView : UIView <SGBannerProtocol>
{
    _TtC17CoreSuggestionsUI26SGBannerContentHostingView *_bannerHostingView;	// 8 = 0x8
    _TtC17CoreSuggestionsUI15SGBannerContent *_banner;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000297b3
@property(retain, nonatomic) _TtC17CoreSuggestionsUI15SGBannerContent *banner; // @synthesize banner=_banner;
@property(readonly, nonatomic) _TtC17CoreSuggestionsUI26SGBannerContentHostingView *bannerHostingView; // @synthesize bannerHostingView=_bannerHostingView;
- (double)actionButtonLeadingEdgeOffset;	// IMP=0x0000000000029760
- (struct CGRect)popoverSourceRect;	// IMP=0x0000000000029741
- (void)invalidateBannerView;	// IMP=0x0000000000029724
- (void)reload;	// IMP=0x00000000000296d0
@property(retain, nonatomic) NSLayoutXAxisAnchor *closeButtonCenterXAnchor;
@property(copy, nonatomic) SGSuggestionStore *suggestionStore;
@property(copy, nonatomic) id <SGSuggestion> suggestion;
@property(copy, nonatomic) NSArray *images;
@property(copy, nonatomic) NSString *actionTitle;
@property(nonatomic) long long actionButtonType;
@property(nonatomic) long long accessoryType;
@property(copy, nonatomic) NSAttributedString *attributedSubtitle;
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSString *title;
@property(nonatomic) __weak id <SGSuggestionDelegate> delegate;
- (void)invalidateReloadBannerView:(id)arg1;	// IMP=0x00000000000292b7
- (id)init;	// IMP=0x0000000000028ef6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
