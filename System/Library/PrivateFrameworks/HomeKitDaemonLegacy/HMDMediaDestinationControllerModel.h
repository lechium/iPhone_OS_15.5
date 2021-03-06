//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>

@class NSArray, NSNumber, NSString, NSUUID;

@interface HMDMediaDestinationControllerModel <HMFLogging>
{
}

+ (id)logCategory;	// IMP=0x0000000000871801
+ (id)properties;	// IMP=0x00000000008717d1
@property(readonly, copy) NSString *description;
- (id)attributeDescriptions;	// IMP=0x0000000000871b86
- (id)privateDescription;	// IMP=0x0000000000871b74
- (id)logIdentifier;	// IMP=0x0000000000871b24
@property(retain) NSArray *availableDestinationModelIdentifiers;
- (id)initWithData:(id)arg1 changeType:(unsigned long long)arg2;	// IMP=0x00000000008719cd

// Remaining properties
@property(copy) NSArray *availableDestinationModelIdentifierStrings; // @dynamic availableDestinationModelIdentifierStrings;
@property(readonly, copy) NSString *debugDescription;
@property(retain) NSUUID *destinationModelIdentifier; // @dynamic destinationModelIdentifier;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain) NSNumber *type; // @dynamic type;

@end

