//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/MKFInvitation-Protocol.h>
#import <HomeKitDaemon/MKFInvitationPrivateExtensions-Protocol.h>

@class MKFInvitationDatabaseID, NSDate, NSNumber, NSString, NSUUID;

@interface _MKFInvitation <MKFInvitation, MKFInvitationPrivateExtensions>
{
}

+ (Class)backingModelClass;	// IMP=0x000000000027e531
+ (id)backingModelProtocol;	// IMP=0x000000000027e520
+ (id)fetchRequest;	// IMP=0x0000000000b925a6
- (id)castIfInvitation;	// IMP=0x000000000027e517
@property(readonly, copy, nonatomic) MKFInvitationDatabaseID *databaseID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSDate *expiryDate; // @dynamic expiryDate;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSUUID *idsIdentifier; // @dynamic idsIdentifier;
@property(copy, nonatomic) NSNumber *invitationState; // @dynamic invitationState;
@property(readonly, copy, nonatomic) NSUUID *modelID;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSDate *writerTimestamp;

@end
