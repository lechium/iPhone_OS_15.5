//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapKit/MKAutocompleteAnalyticsProvider-Protocol.h>
#import <MapKit/MKAutocompleteAnalyticsState-Protocol.h>

@class MKAutocompleteAnalyticsState;
@protocol OS_dispatch_queue;

@interface MKAutocompleteAnalyticsProvider : NSObject <MKAutocompleteAnalyticsState, MKAutocompleteAnalyticsProvider>
{
    NSObject<OS_dispatch_queue> *_isolationQueue;	// 8 = 0x8
    MKAutocompleteAnalyticsState *_currentState;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000026de56
@property(retain, nonatomic) MKAutocompleteAnalyticsState *currentState; // @synthesize currentState=_currentState;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *isolationQueue; // @synthesize isolationQueue=_isolationQueue;
- (id)captureNewMetrics;	// IMP=0x000000000026db73
- (void)updateStateWithQuery:(id)arg1 queryTokens:(id)arg2 visibleSuggestionEntries:(id)arg3;	// IMP=0x000000000026da09
- (id)init;	// IMP=0x000000000026d8da

@end

