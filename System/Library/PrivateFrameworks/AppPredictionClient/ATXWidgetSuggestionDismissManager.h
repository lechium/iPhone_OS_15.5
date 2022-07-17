//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ATXInformationStore;

@interface ATXWidgetSuggestionDismissManager : NSObject
{
    ATXInformationStore *_store;	// 8 = 0x8
}

+ (id)startDateOfDismissHistoryConsidered;	// IMP=0x000000000008bc35
- (void).cxx_destruct;	// IMP=0x000000000008bc56
- (unsigned long long)userDismissCountForWidgetSuggestionWithBundleId:(id)arg1;	// IMP=0x000000000008bbed
- (_Bool)_shouldBlockSuggestionByRelatedDismissDates:(id)arg1;	// IMP=0x000000000008b89e
- (_Bool)shouldBlockSuggestionWithIntent:(id)arg1;	// IMP=0x000000000008b847
- (_Bool)shouldBlockWidgetSuggestionBecauseOfPreviousDismiss:(id)arg1 kind:(id)arg2 intent:(id)arg3;	// IMP=0x000000000008b7f0
- (void)userDidDismissSuggestionForWidget:(id)arg1 kind:(id)arg2 intent:(id)arg3 atDate:(id)arg4 duration:(double)arg5;	// IMP=0x000000000008b7d7
- (id)initWithStore:(id)arg1;	// IMP=0x000000000008b76c
- (id)init;	// IMP=0x000000000008b6c2

@end
