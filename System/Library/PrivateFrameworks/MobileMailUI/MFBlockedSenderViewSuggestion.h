//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MobileMailUI/SGSuggestion-Protocol.h>

@class MFBlockedSenderBannerView, NSString;
@protocol SGSuggestion, SGSuggestionDelegate;

@interface MFBlockedSenderViewSuggestion : NSObject <SGSuggestion>
{
    id <SGSuggestionDelegate> suggestionDelegate;	// 8 = 0x8
    MFBlockedSenderBannerView *_blockedSenderView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000011ba1
@property __weak MFBlockedSenderBannerView *blockedSenderView; // @synthesize blockedSenderView=_blockedSenderView;
@property(nonatomic) __weak id <SGSuggestionDelegate> suggestionDelegate; // @synthesize suggestionDelegate;
- (id)suggestionTitle;	// IMP=0x0000000000011b46
- (id)suggestionCategory;	// IMP=0x0000000000011b3e
- (id)suggestionDismissAction;	// IMP=0x0000000000011a75
- (id)suggestionPrimaryAction;	// IMP=0x00000000000119ac
@property(readonly, nonatomic) id <SGSuggestion> suggestion;
- (id)initWithBlockedSenderView:(id)arg1;	// IMP=0x000000000001192b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

