//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDEventFlagsStoring-Protocol.h>

@class NSString;

@interface HMDEventFlagsPersistentStore : HMFObject <HMDEventFlagsStoring>
{
    NSString *_eventFlagsStorePath;	// 8 = 0x8
    NSString *_eventFlagsStoreKey;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000b0dbcb
@property(readonly, nonatomic) NSString *eventFlagsStoreKey; // @synthesize eventFlagsStoreKey=_eventFlagsStoreKey;
@property(readonly, nonatomic) NSString *eventFlagsStorePath; // @synthesize eventFlagsStorePath=_eventFlagsStorePath;
- (id)lastSaveTime;	// IMP=0x0000000000b0dab4
- (id)unarchiveEventFlagsPeriods;	// IMP=0x0000000000b0d990
- (id)unarchiveEventFlagsValues;	// IMP=0x0000000000b0d86c
- (void)archiveEventFlagsValues:(id)arg1 withDefinedEventFlagPeriods:(id)arg2;	// IMP=0x0000000000b0d6f6
- (id)initWithDataStorePath:(id)arg1 dataStoreKey:(id)arg2;	// IMP=0x0000000000b0d654

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

