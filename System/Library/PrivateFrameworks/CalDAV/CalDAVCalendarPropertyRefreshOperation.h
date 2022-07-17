//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CalDAV/CoreDAVContainerInfoSyncProvider-Protocol.h>
#import <CalDAV/CoreDAVContainerInfoTaskGroupDelegate-Protocol.h>
#import <CalDAV/CoreDAVPropPatchTaskDelegate-Protocol.h>
#import <CalDAV/CoreDAVTaskGroupDelegate-Protocol.h>

@class NSError, NSMutableDictionary, NSMutableSet, NSObject, NSString;
@protocol CalDAVCalendarPropertyRefreshDelegate, OS_dispatch_group;

@interface CalDAVCalendarPropertyRefreshOperation <CoreDAVContainerInfoTaskGroupDelegate, CoreDAVContainerInfoSyncProvider, CoreDAVPropPatchTaskDelegate, CoreDAVTaskGroupDelegate>
{
    NSError *_savedError;	// 88 = 0x58
    NSMutableDictionary *_ctags;	// 96 = 0x60
    NSMutableDictionary *_syncTokens;	// 104 = 0x68
    NSMutableDictionary *_pathToLocalCalendar;	// 112 = 0x70
    NSMutableSet *_localCalendarsWithNoPath;	// 120 = 0x78
    NSMutableSet *_updatedCalendars;	// 128 = 0x80
    _Bool _didFinish;	// 136 = 0x88
    _Bool _didMakeCalendars;	// 137 = 0x89
    _Bool _isSecondRefresh;	// 138 = 0x8a
    int _nextCalendarOrder;	// 140 = 0x8c
    _Bool _useCalendarHomeSyncReport;	// 144 = 0x90
    _Bool _forceClearCalendarHomeSyncToken;	// 145 = 0x91
    NSString *_calendarHomeSyncToken;	// 152 = 0x98
    NSObject<OS_dispatch_group> *_outstandingTasksGroup;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x000000000002d6c9
@property(nonatomic) _Bool forceClearCalendarHomeSyncToken; // @synthesize forceClearCalendarHomeSyncToken=_forceClearCalendarHomeSyncToken;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *outstandingTasksGroup; // @synthesize outstandingTasksGroup=_outstandingTasksGroup;
@property(retain, nonatomic) NSString *calendarHomeSyncToken; // @synthesize calendarHomeSyncToken=_calendarHomeSyncToken;
@property(nonatomic) _Bool useCalendarHomeSyncReport; // @synthesize useCalendarHomeSyncReport=_useCalendarHomeSyncReport;
- (void)containerInfoSyncTask:(id)arg1 completedWithNewSyncToken:(id)arg2 error:(id)arg3;	// IMP=0x000000000002d280
- (void)containerInfoSyncTask:(id)arg1 retrievedAddedOrModifiedContainers:(id)arg2 removedContainerURLs:(id)arg3;	// IMP=0x000000000002c9ba
- (void)containerInfoTask:(id)arg1 completedWithContainers:(id)arg2 error:(id)arg3;	// IMP=0x000000000002c273
- (void)_getDefaultCalendarsTasksIfNeededForPrincipal:(id)arg1;	// IMP=0x000000000002bd24
- (id)_getDefaultMkCalendarForPrincipalTaskGroup:(id)arg1 isEventCalendar:(_Bool)arg2;	// IMP=0x000000000002b9a2
- (void)_continueHandleContainerInfoTask:(id)arg1 completedWithContainers:(id)arg2 error:(id)arg3;	// IMP=0x000000000002aa56
- (_Bool)_handleUpdateForCalendar:(id)arg1;	// IMP=0x0000000000026123
- (void)_initializePrincipalCalendarCache;	// IMP=0x0000000000025d66
- (void)_retryMkCalForCalendar:(id)arg1;	// IMP=0x0000000000025bbb
- (_Bool)_handleMkCalTaskGroupError:(id)arg1 forCalendar:(id)arg2;	// IMP=0x0000000000025969
- (id)_getMkcalendarTaskGroupForCalendar:(id)arg1;	// IMP=0x00000000000246b5
- (id)_generateTimeZoneString:(id)arg1;	// IMP=0x00000000000244d0
- (id)_getSetPropertiesTaskWithItemsToSet:(id)arg1 itemsToRemove:(id)arg2 atURL:(id)arg3;	// IMP=0x00000000000241c9
- (id)_getSetPropertyTaskWithCoreDAVItem:(id)arg1 atURL:(id)arg2;	// IMP=0x0000000000023e8d
- (id)_getSetIsAffectingAvailabilityTask:(_Bool)arg1 forCalendar:(id)arg2 atURL:(id)arg3;	// IMP=0x0000000000023e01
- (id)_getIsAffectingAvailabilityCoreDAVItem:(id)arg1;	// IMP=0x0000000000023c0b
- (id)_getSetPropertyStringTask:(id)arg1 forName:(id)arg2 andNamespace:(id)arg3 atURL:(id)arg4;	// IMP=0x0000000000023b1a
- (int)_sharingStatusForContainer:(id)arg1;	// IMP=0x0000000000023a93
- (void)refreshCalendarProperties;	// IMP=0x0000000000023721
- (void)_sendShareActionTasks;	// IMP=0x0000000000022283
- (void)_prepareCalendarsBeforeRefresh;	// IMP=0x0000000000021fc9
- (void)_handleCalendarPublish;	// IMP=0x0000000000020fd5
- (void)_sendAddsForCalendars;	// IMP=0x00000000000209c1
- (void)_sendDeletesForCalendars;	// IMP=0x0000000000020171
- (void)_reallyRefreshCalendarProperties;	// IMP=0x000000000001fa2b
- (void)_finishRefresh;	// IMP=0x000000000001f768
- (id)initWithPrincipal:(id)arg1;	// IMP=0x000000000001f6ec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) id <CalDAVCalendarPropertyRefreshDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
