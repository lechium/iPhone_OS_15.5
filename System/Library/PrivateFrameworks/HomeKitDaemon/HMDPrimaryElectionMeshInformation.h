//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDResidentDevice;

@interface HMDPrimaryElectionMeshInformation : NSObject
{
    HMDResidentDevice *_responder;	// 8 = 0x8
    HMDResidentDevice *_leader;	// 16 = 0x10
    HMDResidentDevice *_primary;	// 24 = 0x18
    unsigned long long _reachableIPAccessories;	// 32 = 0x20
    unsigned long long _residentsInMesh;	// 40 = 0x28
}

+ (id)meshInformationFromMessagePayload:(id)arg1 home:(id)arg2;	// IMP=0x000000000073b911
+ (id)meshInformationWithMeshController:(id)arg1 home:(id)arg2;	// IMP=0x000000000073b692
- (void).cxx_destruct;	// IMP=0x000000000073b65f
@property(readonly, nonatomic) unsigned long long residentsInMesh; // @synthesize residentsInMesh=_residentsInMesh;
@property(readonly, nonatomic) unsigned long long reachableIPAccessories; // @synthesize reachableIPAccessories=_reachableIPAccessories;
@property(readonly, nonatomic) HMDResidentDevice *primary; // @synthesize primary=_primary;
@property(readonly, nonatomic) HMDResidentDevice *leader; // @synthesize leader=_leader;
@property(readonly, nonatomic) HMDResidentDevice *responder; // @synthesize responder=_responder;
- (id)description;	// IMP=0x000000000073b4b9
- (id)toMessagePayload;	// IMP=0x000000000073b1b3
- (id)initWithResponder:(id)arg1 leader:(id)arg2 primary:(id)arg3 reachableIPAccessories:(unsigned long long)arg4 residentsInMesh:(unsigned long long)arg5;	// IMP=0x000000000073b0dc

@end
