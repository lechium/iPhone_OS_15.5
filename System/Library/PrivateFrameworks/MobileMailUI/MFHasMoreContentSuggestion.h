//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MobileMailUI/SGSuggestion-Protocol.h>

@class MFHasMoreContentBannerView, NSString;
@protocol SGSuggestion, SGSuggestionDelegate;

@interface MFHasMoreContentSuggestion : NSObject <SGSuggestion>
{
    id <SGSuggestionDelegate> suggestionDelegate;	// 8 = 0x8
    MFHasMoreContentBannerView *_moreContentBanner;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001568b
@property __weak MFHasMoreContentBannerView *moreContentBanner; // @synthesize moreContentBanner=_moreContentBanner;
@property(nonatomic) __weak id <SGSuggestionDelegate> suggestionDelegate; // @synthesize suggestionDelegate;
- (id)suggestionTitle;	// IMP=0x0000000000015630
- (id)suggestionCategory;	// IMP=0x0000000000015628
- (id)suggestionPrimaryAction;	// IMP=0x000000000001555f
@property(readonly, nonatomic) id <SGSuggestion> suggestion;
- (id)initWithBlockedContentBanner:(id)arg1;	// IMP=0x00000000000154de

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
