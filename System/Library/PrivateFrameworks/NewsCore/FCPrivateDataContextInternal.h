//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/FCPrivateDataContextInternal-Protocol.h>

@class FCCKPrivateDatabase, FCCKRecordZone, FCCKRecordZoneManager, NSString;
@protocol FCAppActivityMonitor;

@interface FCPrivateDataContextInternal : NSObject <FCPrivateDataContextInternal>
{
    FCCKPrivateDatabase *_privateDatabase;	// 8 = 0x8
    id <FCAppActivityMonitor> _appActivityMonitor;	// 16 = 0x10
    FCCKRecordZoneManager *_recordZoneManager;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000ee108
@property(retain, nonatomic) FCCKRecordZoneManager *recordZoneManager; // @synthesize recordZoneManager=_recordZoneManager;
@property(retain, nonatomic) id <FCAppActivityMonitor> appActivityMonitor; // @synthesize appActivityMonitor=_appActivityMonitor;
@property(retain, nonatomic) FCCKPrivateDatabase *privateDatabase; // @synthesize privateDatabase=_privateDatabase;
- (void)prepareRecordZonesForUseWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ee075
- (id)recordZoneWithName:(id)arg1;	// IMP=0x00000000000ee004
@property(readonly, nonatomic) FCCKRecordZone *userInfoRecordZone;
@property(readonly, nonatomic) FCCKRecordZone *channelMembershipsRecordZone;
@property(readonly, nonatomic) FCCKRecordZone *readingHistoryRecordZone;
@property(readonly, nonatomic) FCCKRecordZone *sensitiveSubscriptionsRecordZone;
@property(readonly, nonatomic) FCCKRecordZone *subscriptionsRecordZone;
@property(readonly, nonatomic) FCCKRecordZone *readingListRecordZone;
@property(readonly, nonatomic) FCCKRecordZone *issueReadingHistoryRecordZone;
- (id)init;	// IMP=0x00000000000eda80

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
