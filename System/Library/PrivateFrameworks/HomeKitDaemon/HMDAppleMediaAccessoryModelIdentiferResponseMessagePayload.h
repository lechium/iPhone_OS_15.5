//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMMessageEncoding-Protocol.h>

@class NSString, NSUUID;

@interface HMDAppleMediaAccessoryModelIdentiferResponseMessagePayload : HMFObject <HMMessageEncoding>
{
    NSUUID *_modelIdentifier;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x000000000043b58e
- (void).cxx_destruct;	// IMP=0x000000000043b57b
@property(readonly, copy) NSUUID *modelIdentifier; // @synthesize modelIdentifier=_modelIdentifier;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000043b44d
- (id)attributeDescriptions;	// IMP=0x000000000043b381
- (id)payloadCopy;	// IMP=0x000000000043b2b7
- (id)initWithPayload:(id)arg1;	// IMP=0x000000000043b160
- (id)initWithModelIdentifier:(id)arg1;	// IMP=0x000000000043b0e1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
