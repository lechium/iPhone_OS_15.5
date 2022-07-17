//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/MKFAccessorySettingPublicExtensions-Protocol.h>
#import <HomeKitDaemon/MKFModel-Protocol.h>

@class MKFAccessorySettingDatabaseID, NSArray, NSData, NSNumber, NSString, NSUUID;
@protocol MKFAccessorySettingConstraint, MKFAccessorySettingGroup, MKFHome;

@protocol MKFAccessorySetting <MKFModel, MKFAccessorySettingPublicExtensions>
@property(readonly) id <MKFHome> home;
@property(readonly, copy, nonatomic) MKFAccessorySettingDatabaseID *databaseID;
@property(readonly, retain, nonatomic) id <MKFAccessorySettingGroup> group;
@property(readonly, retain, nonatomic) NSArray *constraints;
@property(retain, nonatomic) NSData *value;
@property(copy, nonatomic) NSNumber *type;
@property(copy, nonatomic) NSNumber *properties;
@property(copy, nonatomic) NSString *name;
@property(copy, nonatomic) NSNumber *configurationVersion;
- (void)synchronizeConstraintsRelationWith:(NSArray *)arg1;
- (id <MKFAccessorySettingConstraint>)findConstraintsRelationWithModelID:(NSUUID *)arg1;
- (id <MKFAccessorySettingConstraint>)materializeOrCreateConstraintsRelationWithModelID:(NSUUID *)arg1 createdNew:(_Bool *)arg2;
@end
