//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HFItemManager, NAFuture, NSDictionary;

@interface HFItem : NSObject
{
    _Bool __debug_isChildItem;	// 8 = 0x8
    NSDictionary *_latestResults;	// 16 = 0x10
    unsigned long long _loadingState;	// 24 = 0x18
    NAFuture *_cancellableInFlightUpdateFuture;	// 32 = 0x20
    HFItemManager *__debug_owningItemManager;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000ea5a1
@property(nonatomic) _Bool _debug_isChildItem; // @synthesize _debug_isChildItem=__debug_isChildItem;
@property(nonatomic) __weak HFItemManager *_debug_owningItemManager; // @synthesize _debug_owningItemManager=__debug_owningItemManager;
@property(nonatomic) __weak NAFuture *cancellableInFlightUpdateFuture; // @synthesize cancellableInFlightUpdateFuture=_cancellableInFlightUpdateFuture;
@property(nonatomic) unsigned long long loadingState; // @synthesize loadingState=_loadingState;
@property(retain, nonatomic) NSDictionary *latestResults; // @synthesize latestResults=_latestResults;
- (id)_finalOutcomeForSubclassOutcome:(id)arg1 previousResults:(id)arg2 updateOptions:(id)arg3;	// IMP=0x00000000000ea3db
- (id)description;	// IMP=0x00000000000ea222
- (id)debugDescription;	// IMP=0x00000000000ea180
- (_Bool)resultsContainRequiredProperties:(id)arg1;	// IMP=0x00000000000e9fb4
- (id)_subclass_updateWithOptions:(id)arg1;	// IMP=0x00000000000e9ec8
- (unsigned long long)_effectiveLoadingStateForSuggestedLoadingState:(unsigned long long)arg1;	// IMP=0x00000000000e9e3a
- (void)copyLatestResultsFromItem:(id)arg1;	// IMP=0x00000000000e9b27
- (id)updateWithOptions:(id)arg1;	// IMP=0x00000000000e8f92

@end

