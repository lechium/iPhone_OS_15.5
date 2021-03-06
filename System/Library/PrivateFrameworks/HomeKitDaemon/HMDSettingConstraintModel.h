//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitBackingStore/HMBModel.h>

#import <HomeKitDaemon/HMDSettingConstraintModelProtocol-Protocol.h>

@class NSData, NSNumber, NSString, NSUUID;

@interface HMDSettingConstraintModel : HMBModel <HMDSettingConstraintModelProtocol>
{
}

+ (id)hmbProperties;	// IMP=0x0000000000443994
- (id)copyWithNewParentModelID:(id)arg1;	// IMP=0x0000000000443846
@property(readonly, nonatomic) NSString *nameForKeyPath;

// Remaining properties
@property(copy, nonatomic) NSData *dataValue; // @dynamic dataValue;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSUUID *hmbModelID;
@property(readonly, nonatomic) NSUUID *hmbParentModelID;
@property(copy, nonatomic) NSNumber *numberValue; // @dynamic numberValue;
@property(copy, nonatomic) NSString *stringValue; // @dynamic stringValue;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSNumber *type; // @dynamic type;

@end

