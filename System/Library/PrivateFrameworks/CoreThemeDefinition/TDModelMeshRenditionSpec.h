//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSOrderedSet;

@interface TDModelMeshRenditionSpec
{
}

+ (id)fetchRequest;	// IMP=0x00000000000702e9
- (id)createCSIRepresentationWithCompression:(_Bool)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3;	// IMP=0x0000000000060b05
- (void)processSubMesh:(id)arg1 withAssetSubmeshIndex:(unsigned int *)arg2 assetKeySpec:(id)arg3 inDocument:(id)arg4;	// IMP=0x000000000006059f

// Remaining properties
@property(retain, nonatomic) NSOrderedSet *submeshes; // @dynamic submeshes;

@end
