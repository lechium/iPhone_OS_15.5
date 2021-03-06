//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CHSProactiveService, SBSWidgetMetricsService, _PASQueueLock;
@protocol ATXChronoServicesProviderDelegate;

@interface ATXChronoServicesProvider : NSObject
{
    CHSProactiveService *_proactiveService;	// 8 = 0x8
    SBSWidgetMetricsService *_widgetMetricService;	// 16 = 0x10
    _PASQueueLock *_lock;	// 24 = 0x18
    id <ATXChronoServicesProviderDelegate> _delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000a1102
@property(nonatomic) __weak id <ATXChronoServicesProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_recordFromSuggestionLayout:(id)arg1 guardedData:(id)arg2;	// IMP=0x00000000000a1054
- (void)_updateAndSendHomeScreenSuggestionsToDelegateWithGuardedData:(id)arg1;	// IMP=0x00000000000a0750
- (_Bool)_allReloadsAreCompletedInGuardedData:(id)arg1;	// IMP=0x00000000000a05e8
- (_Bool)_isCurrentTimelineRelevanceScoreNonPositiveForEntries:(id)arg1;	// IMP=0x00000000000a0179
- (_Bool)_shouldBlockSuggestionForWidget:(id)arg1 entries:(id)arg2;	// IMP=0x00000000000a0164
- (void)_chronoDidReplyHandle:(id)arg1 timelineEntries:(id)arg2 forWidget:(id)arg3 withError:(id)arg4;	// IMP=0x000000000009fa16
- (void)_requestChronoToLoadWidget:(id)arg1 inGuardedData:(id)arg2;	// IMP=0x000000000009f733
- (id)_widgetFromSuggestionLayout:(id)arg1;	// IMP=0x000000000009f601
- (void)_updateGuardedData:(id)arg1 withNewCachedSuggestions:(id)arg2;	// IMP=0x000000000009f0eb
- (void)_removeOudatedFailureEntriesInGuardedData:(id)arg1;	// IMP=0x000000000009ef26
- (void)resetToPrewarmWidgetsInSuggestions:(id)arg1;	// IMP=0x000000000009eb7a
- (id)initWithProactiveService:(id)arg1 widgetMetricsService:(id)arg2;	// IMP=0x000000000009ea1c
- (id)init;	// IMP=0x000000000009e9b8

@end

