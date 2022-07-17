//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AXElement, AXElementGroup, AXElementGroupPruner, AXVisualElementGrouper, NSArray, NSMapTable, NSMutableDictionary;
@protocol AXElementFetcherDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface AXElementFetcher : NSObject
{
    NSObject<OS_dispatch_queue> *_elementFetchQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_elementAccessQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_filterAccessQueue;	// 24 = 0x18
    struct __AXObserver *_axRuntimeNotificationObserver;	// 32 = 0x20
    unsigned long long _scheduledFetchEvent;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_eventCoalesceTimer;	// 48 = 0x30
    AXElementGroupPruner *_elementGroupPruner;	// 56 = 0x38
    _Bool _enabled;	// 64 = 0x40
    _Bool _fetchingElements;	// 65 = 0x41
    _Bool _eventManagementEnabled;	// 66 = 0x42
    _Bool _shouldIncludeNonScannerElements;	// 67 = 0x43
    _Bool _groupingEnabled;	// 68 = 0x44
    _Bool _didSendFakeScreenChangeOnLastFetch;	// 69 = 0x45
    long long _elementGroupingHeuristics;	// 72 = 0x48
    id <AXElementFetcherDelegate> _delegate;	// 80 = 0x50
    NSMapTable *_fetchObservers;	// 88 = 0x58
    unsigned long long _activeFetchEvents;	// 96 = 0x60
    NSArray *_currentApps;	// 104 = 0x68
    NSArray *_elementCache;	// 112 = 0x70
    AXElementGroup *_elementCommunityGroupCache;	// 120 = 0x78
    AXElementGroup *_rootGroupCache;	// 128 = 0x80
    AXElementGroup *_keyboardGroupCache;	// 136 = 0x88
    NSMutableDictionary *_postFetchFilters;	// 144 = 0x90
    AXVisualElementGrouper *_visualElementGrouper;	// 152 = 0x98
    NSArray *_customCurrentApps;	// 160 = 0xa0
}

+ (id)springBoardElement;	// IMP=0x000000000003b561
+ (id)systemWideElement;	// IMP=0x000000000003b548
- (void).cxx_destruct;	// IMP=0x0000000000043fdb
@property(retain, nonatomic) NSArray *customCurrentApps; // @synthesize customCurrentApps=_customCurrentApps;
@property(nonatomic) _Bool didSendFakeScreenChangeOnLastFetch; // @synthesize didSendFakeScreenChangeOnLastFetch=_didSendFakeScreenChangeOnLastFetch;
@property(retain, nonatomic) AXVisualElementGrouper *visualElementGrouper; // @synthesize visualElementGrouper=_visualElementGrouper;
@property(retain, nonatomic) NSMutableDictionary *postFetchFilters; // @synthesize postFetchFilters=_postFetchFilters;
@property(retain, nonatomic) AXElementGroup *keyboardGroupCache; // @synthesize keyboardGroupCache=_keyboardGroupCache;
@property(retain, nonatomic) AXElementGroup *rootGroupCache; // @synthesize rootGroupCache=_rootGroupCache;
@property(retain, nonatomic) AXElementGroup *elementCommunityGroupCache; // @synthesize elementCommunityGroupCache=_elementCommunityGroupCache;
@property(retain, nonatomic) NSArray *elementCache; // @synthesize elementCache=_elementCache;
@property(retain, nonatomic) NSArray *currentApps; // @synthesize currentApps=_currentApps;
@property(nonatomic) unsigned long long activeFetchEvents; // @synthesize activeFetchEvents=_activeFetchEvents;
@property(retain, nonatomic) NSMapTable *fetchObservers; // @synthesize fetchObservers=_fetchObservers;
@property(nonatomic) __weak id <AXElementFetcherDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long elementGroupingHeuristics; // @synthesize elementGroupingHeuristics=_elementGroupingHeuristics;
@property(nonatomic, getter=isGroupingEnabled) _Bool groupingEnabled; // @synthesize groupingEnabled=_groupingEnabled;
@property(nonatomic) _Bool shouldIncludeNonScannerElements; // @synthesize shouldIncludeNonScannerElements=_shouldIncludeNonScannerElements;
@property(nonatomic, getter=isEventManagementEnabled) _Bool eventManagementEnabled; // @synthesize eventManagementEnabled=_eventManagementEnabled;
@property(nonatomic, getter=isFetchingElements) _Bool fetchingElements; // @synthesize fetchingElements=_fetchingElements;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (void)_debugLogElementCache;	// IMP=0x0000000000043c4e
- (id)_debugStringForFetchEvents:(unsigned long long)arg1;	// IMP=0x0000000000043b14
- (void)clearCache;	// IMP=0x0000000000043ac4
- (_Bool)_fetchGroups:(_Bool)arg1;	// IMP=0x000000000004321d
- (id)_fetchUnprocessedAppGroups;	// IMP=0x0000000000042a26
- (id)_processAppGroup:(id)arg1 keyboardGroup:(id *)arg2;	// IMP=0x000000000004256c
@property(readonly, nonatomic) AXElementGroupPruner *elementGroupPruner;
- (id)_filterGroup:(id)arg1 withFilter:(CDUnknownBlockType)arg2;	// IMP=0x00000000000421f2
- (id)_groupWithItems:(id)arg1 groupTraits:(unsigned long long)arg2 scanningBehaviorTraits:(unsigned long long)arg3 label:(id)arg4 identifier:(id)arg5 currentPid:(int)arg6;	// IMP=0x0000000000041ca2
- (id)_groupWithDictionary:(id)arg1 currentPid:(int)arg2;	// IMP=0x0000000000041b49
- (id)findGroupableMatchingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000419ac
- (id)_findGroupableMatchingBlock:(CDUnknownBlockType)arg1 inElementGroup:(id)arg2;	// IMP=0x00000000000417d1
- (id)findGroupableMatchingGroupable:(id)arg1;	// IMP=0x0000000000041634
- (id)_findGroupableMatchingGroupable:(id)arg1 inElementGroup:(id)arg2;	// IMP=0x000000000004142a
- (id)previousSiblingOfGroupable:(id)arg1 didWrap:(_Bool *)arg2;	// IMP=0x0000000000041413
- (id)nextSiblingOfGroupable:(id)arg1 didWrap:(_Bool *)arg2;	// IMP=0x00000000000413f9
- (id)_siblingOfGroupable:(id)arg1 forDirection:(_Bool)arg2 didWrap:(_Bool *)arg3;	// IMP=0x0000000000041306
- (id)previousSiblingOfElement:(id)arg1 didWrap:(_Bool *)arg2;	// IMP=0x000000000004105e
- (id)nextSiblingOfElement:(id)arg1 didWrap:(_Bool *)arg2;	// IMP=0x0000000000040dc6
- (id)lastElement;	// IMP=0x0000000000040c3a
- (id)firstElement;	// IMP=0x0000000000040aae
- (id)closestElementToPoint:(struct CGPoint)arg1;	// IMP=0x0000000000040815
- (id)closestElementToElement:(id)arg1;	// IMP=0x0000000000040729
- (id)_findElementsMatchingBlock:(CDUnknownBlockType)arg1 internalRequest:(_Bool)arg2;	// IMP=0x0000000000040432
- (id)findElementsMatchingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000004041e
- (id)findElementMatchingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000040172
- (id)findElementMatchingElement:(id)arg1;	// IMP=0x000000000003fe72
- (id)_filterElements:(id)arg1 withFilter:(CDUnknownBlockType)arg2;	// IMP=0x000000000003fc87
- (void)removeAllPostFetchFilters;	// IMP=0x000000000003fbfb
- (void)removePostFetchFilterWithIdentifier:(id)arg1;	// IMP=0x000000000003fb1a
- (void)addPostFetchFilter:(CDUnknownBlockType)arg1 withIdentifier:(id)arg2;	// IMP=0x000000000003f9a2
- (id)_fetchUnprocessedElements:(id)arg1;	// IMP=0x000000000003f210
- (_Bool)_fetchElements:(_Bool)arg1;	// IMP=0x000000000003ecc3
- (void)_sendFakeScreenChangeIfNecessaryForGroups:(id)arg1 orElements:(id)arg2 appsDidChange:(_Bool)arg3;	// IMP=0x000000000003e8fb
- (_Bool)_shouldConsiderCacheAsInvalid;	// IMP=0x000000000003e8f3
- (void)disableEventManagement;	// IMP=0x000000000003e6a4
- (void)enableEventManagement;	// IMP=0x000000000003e151
- (id)_axNotificationsForManagedEvents;	// IMP=0x000000000003e144
- (_Bool)_fetchEventCanBeManaged:(unsigned long long)arg1;	// IMP=0x000000000003e10c
- (long long)_priorityForFetchEvent:(unsigned long long)arg1;	// IMP=0x000000000003e05f
- (double)_delayForFetchEvent:(unsigned long long)arg1;	// IMP=0x000000000003dffc
- (void)_scheduleFetchEvent:(unsigned long long)arg1;	// IMP=0x000000000003ddb5
- (void)_tearDownEventCoalesceTimer;	// IMP=0x000000000003dd7f
- (void)_handleMediaDidBegin:(struct __CFData *)arg1;	// IMP=0x000000000003dd13
- (void)_handleScreenWillChange:(struct __CFData *)arg1;	// IMP=0x000000000003dca7
- (void)_handleApplicationWasActivated:(id)arg1;	// IMP=0x000000000003dbe4
- (void)_handleUpdateElementVisuals:(struct __CFData *)arg1;	// IMP=0x000000000003db78
- (void)_handleNativeFocusItemDidChange:(struct __CFData *)arg1;	// IMP=0x000000000003dadb
- (void)_fetchEventOccurred:(unsigned long long)arg1;	// IMP=0x000000000003d9c6
- (void)fetchEventOccurred:(unsigned long long)arg1;	// IMP=0x000000000003d975
- (void)refresh;	// IMP=0x000000000003d95e
- (void)removeFetchEvents:(unsigned long long)arg1;	// IMP=0x000000000003d917
- (void)addFetchEvents:(unsigned long long)arg1;	// IMP=0x000000000003d8d3
- (void)_notifyObserversDidScheduleFetchEvent:(unsigned long long)arg1;	// IMP=0x000000000003d64d
- (void)_notifyObserversDidFetchElementsForEvent:(unsigned long long)arg1 foundNewElements:(_Bool)arg2;	// IMP=0x000000000003d3a8
- (void)_notifyObserversMediaDidBegin:(struct __CFData *)arg1;	// IMP=0x000000000003d122
- (void)_notifyObserversScreenWillChange:(struct __CFData *)arg1;	// IMP=0x000000000003ce76
- (void)_notifyObserversApplicationWasActivated:(id)arg1;	// IMP=0x000000000003cbb1
- (void)_notifyObserversUpdateElementVisuals:(id)arg1;	// IMP=0x000000000003c8ec
- (void)_notifyObserversNativeFocusElementDidChange:(id)arg1;	// IMP=0x000000000003c627
- (void)_notifyObserversWillFetchElementsForEvent:(unsigned long long)arg1;	// IMP=0x000000000003c346
- (void)unregisterAllFetchObservers;	// IMP=0x000000000003c309
- (void)unregisterFetchObserver:(id)arg1;	// IMP=0x000000000003c297
- (void)registerFetchObserver:(id)arg1 targetQueue:(id)arg2;	// IMP=0x000000000003c1e6
@property(readonly, nonatomic) AXElementGroup *elementCommunityGroup;
@property(readonly, nonatomic) AXElementGroup *lastKeyboardRow;
@property(readonly, nonatomic) AXElementGroup *firstKeyboardRow;
@property(readonly, nonatomic) AXElementGroup *keyboardGroup;
@property(readonly, nonatomic) AXElementGroup *rootGroup;
@property(readonly, nonatomic) NSArray *availableElements;
@property(readonly, nonatomic) _Bool willFetchElements;
- (_Bool)_updateCurrentApps;	// IMP=0x000000000003b9f7
@property(readonly, nonatomic) AXElement *nativeFocusElement;
- (void)_setCurrentApplications:(id)arg1;	// IMP=0x000000000003b8ea
- (id)description;	// IMP=0x000000000003b7b8
- (void)dealloc;	// IMP=0x000000000003b758
- (id)initWithDelegate:(id)arg1 fetchEvents:(unsigned long long)arg2 enableEventManagement:(_Bool)arg3 enableGrouping:(_Bool)arg4 shouldIncludeNonScannerElements:(_Bool)arg5 beginEnabled:(_Bool)arg6;	// IMP=0x000000000003b5bd

@end
