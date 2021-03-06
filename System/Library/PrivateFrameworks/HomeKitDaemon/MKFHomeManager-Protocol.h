//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/MKFHomeManagerPublicExtensions-Protocol.h>
#import <HomeKitDaemon/MKFModel-Protocol.h>

@class HAPPairingIdentity, MKFHomeManagerDatabaseID, NSArray, NSDictionary, NSString, NSUUID;
@protocol MKFAccount, MKFHAPMetadata, MKFHomeManagerHome, MKFIncomingInvitation;

@protocol MKFHomeManager <MKFModel, MKFHomeManagerPublicExtensions>
@property(readonly, copy, nonatomic) MKFHomeManagerDatabaseID *databaseID;
@property(retain, nonatomic) id <MKFHomeManagerHome> primaryHome;
@property(retain, nonatomic) id <MKFHAPMetadata> metadata;
@property(readonly, retain, nonatomic) NSArray *incomingInvitations;
@property(readonly, retain, nonatomic) NSArray *homes;
@property(readonly, retain, nonatomic) NSArray *accounts;
@property(retain, nonatomic) NSArray *pairingAppleAccessories;
@property(retain, nonatomic) HAPPairingIdentity *legacyPairingIdentity;
@property(copy, nonatomic) NSString *controllerKeyIdentifier;
@property(retain, nonatomic) NSDictionary *appDataDictionary;
- (id <MKFHAPMetadata>)materializeOrCreateMetadataRelation:(_Bool *)arg1;
- (id <MKFIncomingInvitation>)findIncomingInvitationsRelationWithModelID:(NSUUID *)arg1;
- (id <MKFIncomingInvitation>)materializeOrCreateIncomingInvitationsRelationWithModelID:(NSUUID *)arg1 createdNew:(_Bool *)arg2;
- (id <MKFHomeManagerHome>)findHomesRelationWithModelID:(NSUUID *)arg1;
- (id <MKFHomeManagerHome>)materializeOrCreateHomesRelationWithModelID:(NSUUID *)arg1 createdNew:(_Bool *)arg2;
- (id <MKFAccount>)findAccountsRelationWithModelID:(NSUUID *)arg1;
- (id <MKFAccount>)materializeOrCreateAccountsRelationWithModelID:(NSUUID *)arg1 createdNew:(_Bool *)arg2;
@end

