//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NPSManager, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface BPSNotificationMuteSettingsManager : NSObject
{
    NSMutableDictionary *_mutedSectionIdentifiersForDay;	// 8 = 0x8
    NPSManager *_npsManager;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
}

+ (id)sharedNotificationMuteSettingsManager;	// IMP=0x0000000000013756
- (void).cxx_destruct;	// IMP=0x000000000001474b
- (void)removeSectionIdentifiers:(id)arg1;	// IMP=0x00000000000145a6
- (void)addSectionIdentifiers:(id)arg1;	// IMP=0x000000000001430a
- (_Bool)isMutedForTodaySectionIdentifier:(id)arg1;	// IMP=0x000000000001415f
- (id)mutedForTodaySectionIdentifiers;	// IMP=0x0000000000014111
- (void)_queue_sync;	// IMP=0x0000000000013d67
- (void)_loadMutedSectionIdentifiers;	// IMP=0x0000000000013929
- (void)_updateObservers;	// IMP=0x00000000000138dc
- (void)dealloc;	// IMP=0x0000000000013892
- (id)init;	// IMP=0x00000000000137e7

@end

