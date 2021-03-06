//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitBackingStore/HMBModel.h>

#import <HomeKitDaemonLegacy/HMDSettingModelProtocol-Protocol.h>

@class NSData, NSNumber, NSString, NSUUID;

@interface HMDSettingModel : HMBModel <HMDSettingModelProtocol>
{
}

+ (id)hmbProperties;	// IMP=0x000000000030d554
- (id)copyWithNewParentModelID:(id)arg1;	// IMP=0x000000000030d34e
@property(readonly, nonatomic) NSString *nameForKeyPath;
- (_Bool)setSettingValue:(id)arg1;	// IMP=0x000000000030d1c9

// Remaining properties
@property(copy, nonatomic) NSData *dataValue; // @dynamic dataValue;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSUUID *hmbModelID;
@property(readonly, nonatomic) NSUUID *hmbParentModelID;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(copy, nonatomic) NSNumber *numberValue; // @dynamic numberValue;
@property(copy, nonatomic) NSNumber *properties; // @dynamic properties;
@property(copy, nonatomic) NSUUID *selectionIdentifier; // @dynamic selectionIdentifier;
@property(copy, nonatomic) NSString *selectionValue; // @dynamic selectionValue;
@property(copy, nonatomic) NSString *stringValue; // @dynamic stringValue;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSNumber *type; // @dynamic type;

@end

