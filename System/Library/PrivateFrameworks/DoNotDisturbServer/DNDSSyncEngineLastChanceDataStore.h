//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/DNDSSyncEngineLastChanceDataStoring-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface DNDSSyncEngineLastChanceDataStore : NSObject <DNDSSyncEngineLastChanceDataStoring>
{
    NSMutableDictionary *_queue_recordsByID;	// 8 = 0x8
    NSURL *_url;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000004b385
- (id)_decodeRecordFromData:(id)arg1;	// IMP=0x000000000004b301
- (id)_encodedDataFromRecord:(id)arg1;	// IMP=0x000000000004b274
- (void)_queue_write;	// IMP=0x000000000004af64
- (void)_queue_read;	// IMP=0x000000000004ad13
- (void)purge;	// IMP=0x000000000004ac3c
- (void)removeRecordsWithZoneID:(id)arg1;	// IMP=0x000000000004a88d
- (void)removeRecordWithID:(id)arg1;	// IMP=0x000000000004a78d
- (void)addRecord:(id)arg1;	// IMP=0x000000000004a689
- (id)recordWithID:(id)arg1;	// IMP=0x000000000004a548
- (id)recordsWithZoneID:(id)arg1;	// IMP=0x000000000004a216
@property(readonly, copy, nonatomic) NSDictionary *records;
- (id)init;	// IMP=0x000000000004a0ea
- (id)initWithURL:(id)arg1;	// IMP=0x0000000000049fc0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

