//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSuggestionsUI/EKEventEditViewDelegate-Protocol.h>
#import <CoreSuggestionsUI/EKEventViewDelegate-Protocol.h>
#import <CoreSuggestionsUI/EKEventViewDelegatePrivate-Protocol.h>

@class NSString, UIImage;

@interface SGEventSuggestion <EKEventViewDelegate, EKEventEditViewDelegate, EKEventViewDelegatePrivate>
{
    UIImage *_calendarImage;	// 24 = 0x18
}

+ (id)calendarImage;	// IMP=0x000000000001bc4c
- (void).cxx_destruct;	// IMP=0x000000000001c2c9
- (void)preloadPrimaryActionViewController;	// IMP=0x000000000001c2c3
- (id)suggestionImage;	// IMP=0x000000000001c1ce
- (_Bool)eventViewControllerShouldAlwaysShowNavBar:(id)arg1;	// IMP=0x000000000001c1c6
- (void)eventEditViewController:(id)arg1 didCompleteWithAction:(long long)arg2;	// IMP=0x000000000001c115
- (void)eventViewController:(id)arg1 didCompleteWithAction:(long long)arg2;	// IMP=0x000000000001c0f8
- (void)_dismissViewController:(id)arg1 retainBanner:(_Bool)arg2;	// IMP=0x000000000001bf59
- (id)suggestionPrimaryAction;	// IMP=0x000000000001bdde
- (id)suggestionAttributedSubtitle;	// IMP=0x000000000001bcdb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
