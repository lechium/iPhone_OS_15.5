//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/MKFStringCharacteristic-Protocol.h>
#import <HomeKitDaemon/MKFStringCharacteristicPrivateExtensions-Protocol.h>

@class HMDCharacteristicMetadata, MKFStringCharacteristicDatabaseID, NSArray, NSData, NSDictionary, NSNumber, NSString, NSUUID;
@protocol MKFHome, MKFService;

@interface _MKFStringCharacteristic <MKFStringCharacteristic, MKFStringCharacteristicPrivateExtensions>
{
}

+ (Class)backingModelClass;	// IMP=0x000000000071686f
+ (id)backingModelProtocol;	// IMP=0x000000000071685e
+ (id)fetchRequest;	// IMP=0x0000000000b92826
@property(readonly) id <MKFHome> home;
- (id)castIfStringCharacteristic;	// IMP=0x0000000000716805
@property(readonly, copy, nonatomic) MKFStringCharacteristicDatabaseID *databaseID;
- (void)pr_updateWithHAPMetadata:(id)arg1;	// IMP=0x0000000000716735
@property(readonly, copy) HMDCharacteristicMetadata *pr_hapMetadata;

// Remaining properties
@property(retain, nonatomic) NSData *authorizationData;
@property(readonly, retain, nonatomic) NSArray *bulletinRegistrations;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSString *format;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSNumber *instanceID;
@property(copy, nonatomic) NSString *manufacturerDescription;
@property(copy, nonatomic) NSNumber *maximumLength; // @dynamic maximumLength;
@property(readonly, copy) NSDictionary *pr_dictionaryRepresentation;
@property(copy, nonatomic) NSNumber *properties;
@property(readonly, retain, nonatomic) id <MKFService> service;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSUUID *type;
@property(copy, nonatomic) NSString *units;

@end
