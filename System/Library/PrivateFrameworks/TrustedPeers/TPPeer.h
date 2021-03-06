//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, NSString, TPPeerDynamicInfo, TPPeerPermanentInfo, TPPeerStableInfo;

@interface TPPeer : NSObject
{
    TPPeerPermanentInfo *_permanentInfo;	// 8 = 0x8
    TPPeerStableInfo *_stableInfo;	// 16 = 0x10
    TPPeerDynamicInfo *_dynamicInfo;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000020688
@property(readonly, nonatomic) TPPeerDynamicInfo *dynamicInfo; // @synthesize dynamicInfo=_dynamicInfo;
@property(readonly, nonatomic) TPPeerStableInfo *stableInfo; // @synthesize stableInfo=_stableInfo;
@property(readonly, nonatomic) TPPeerPermanentInfo *permanentInfo; // @synthesize permanentInfo=_permanentInfo;
- (id)description;	// IMP=0x00000000000204cb
@property(readonly, nonatomic) NSSet *trustedPeerIDs;
- (id)peerWithUpdatedDynamicInfo:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002016f
- (id)peerWithUpdatedStableInfo:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001fed6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001fe23
- (id)initWithPermanentInfo:(id)arg1 stableInfo:(id)arg2 dynamicInfo:(id)arg3;	// IMP=0x000000000001fd6c
- (id)initWithPermanentInfo:(id)arg1;	// IMP=0x000000000001fcdd
@property(readonly, nonatomic) NSString *peerID;

@end

