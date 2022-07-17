//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>

@class HMBLocalZoneLocalInput, NSString, NSUUID;

@interface HMDPersonDataBatchChange : HMFObject <HMFLogging>
{
    NSUUID *_UUID;	// 8 = 0x8
    HMBLocalZoneLocalInput *_localInput;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x00000000007e0be3
- (void).cxx_destruct;	// IMP=0x00000000007e0bb2
@property(readonly) HMBLocalZoneLocalInput *localInput; // @synthesize localInput=_localInput;
@property(readonly, copy) NSUUID *UUID; // @synthesize UUID=_UUID;
- (id)attributeDescriptions;	// IMP=0x00000000007e0aba
- (id)logIdentifier;	// IMP=0x00000000007e0a6a
- (void)commit;	// IMP=0x00000000007e0800
- (void)removeFaceCropWithUUID:(id)arg1;	// IMP=0x00000000007e06da
- (void)removePersonWithUUID:(id)arg1;	// IMP=0x00000000007e05b4
- (void)addOrUpdateFaceCrop:(id)arg1;	// IMP=0x00000000007e03fa
- (void)addOrUpdatePerson:(id)arg1;	// IMP=0x00000000007e0361
- (id)initWithLocalInput:(id)arg1;	// IMP=0x00000000007e02ad

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
