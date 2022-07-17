//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMDNSManagedObjectBackingStoreModelObjectRepresentable-Protocol.h>
#import <HomeKitDaemon/MKFSignificantTimeEvent-Protocol.h>
#import <HomeKitDaemon/MKFSignificantTimeEventPrivateExtensions-Protocol.h>

@class MKFSignificantTimeEventDatabaseID, NSData, NSDate, NSNumber, NSString, NSUUID;
@protocol MKFEventTrigger, MKFHome;

@interface _MKFSignificantTimeEvent <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFSignificantTimeEvent, MKFSignificantTimeEventPrivateExtensions>
{
}

+ (Class)backingModelClass;	// IMP=0x0000000000245df9
+ (id)backingModelProtocol;	// IMP=0x0000000000245de8
+ (id)modelIDForParentRelationshipTo:(id)arg1;	// IMP=0x0000000000245d32
+ (Class)cd_modelClass;	// IMP=0x00000000006b4588
+ (id)fetchRequest;	// IMP=0x0000000000b927e6
@property(readonly) id <MKFHome> home;
- (id)castIfSignificantTimeEvent;	// IMP=0x0000000000245cd9
@property(readonly, copy, nonatomic) MKFSignificantTimeEventDatabaseID *databaseID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSNumber *endEvent;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property(readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property(readonly, copy, nonatomic) NSUUID *modelID;
@property(retain, nonatomic) NSData *offset; // @dynamic offset;
@property(copy, nonatomic) NSString *significantEvent; // @dynamic significantEvent;
@property(readonly) Class superclass;
@property(readonly, retain, nonatomic) id <MKFEventTrigger> trigger;
@property(copy, nonatomic) NSDate *writerTimestamp;

@end
