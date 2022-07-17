//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData, NSDictionary, NSNumber, NSSet;

@interface VNClusterObservation
{
    NSArray *_clusters;	// 80 = 0x50
    NSArray *_suggestionsForCluster;	// 88 = 0x58
    NSData *_clusterState;	// 96 = 0x60
    NSSet *_clusteredFaceIds;	// 104 = 0x68
    NSArray *_groupedClusteredFaceIdsForCluster;	// 112 = 0x70
    NSNumber *_distance;	// 120 = 0x78
    NSDictionary *_distancesById;	// 128 = 0x80
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000013335b
- (void).cxx_destruct;	// IMP=0x00000000001332d5
@property(retain, nonatomic) NSDictionary *distancesById; // @synthesize distancesById=_distancesById;
@property(retain, nonatomic) NSNumber *distance; // @synthesize distance=_distance;
@property(retain, nonatomic) NSArray *groupedClusteredFaceIdsForCluster; // @synthesize groupedClusteredFaceIdsForCluster=_groupedClusteredFaceIdsForCluster;
@property(retain, nonatomic) NSSet *clusteredFaceIds; // @synthesize clusteredFaceIds=_clusteredFaceIds;
@property(retain, nonatomic) NSData *clusterState; // @synthesize clusterState=_clusterState;
@property(retain, nonatomic) NSArray *suggestionsForCluster; // @synthesize suggestionsForCluster=_suggestionsForCluster;
@property(retain, nonatomic) NSArray *clusters; // @synthesize clusters=_clusters;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000132d40
- (id)vn_cloneObject;	// IMP=0x0000000000132bdf
- (unsigned long long)hash;	// IMP=0x00000000001329bb
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000013287d
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001324cb

@end
