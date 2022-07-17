//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/PHAssetResource.h>

@interface PHAssetResource (MediaAnalysis)
+ (CDUnknownBlockType)vcp_descendingSizeComparator;	// IMP=0x000000000014c114
+ (CDUnknownBlockType)vcp_ascendingSizeComparator;	// IMP=0x000000000014bf50
+ (id)vcp_allAcceptableResourcesForAsset:(id)arg1;	// IMP=0x000000000014b6ef
+ (id)vcp_allResourcesForAsset:(id)arg1;	// IMP=0x000000000014b6c1
- (struct CGSize)vcp_size;	// IMP=0x000000000014bef9
- (unsigned long long)vcp_fileSize;	// IMP=0x000000000014bded
- (_Bool)vcp_isLocallyAvailable;	// IMP=0x000000000014bcc8
- (_Bool)vcp_isDecodable;	// IMP=0x000000000014bc5d
- (_Bool)vcp_isPhotoResourceUsable:(_Bool)arg1;	// IMP=0x000000000014bbeb
- (_Bool)vcp_isVideoResourceUsable:(_Bool)arg1;	// IMP=0x000000000014bb55
- (_Bool)vcp_isPhoto;	// IMP=0x000000000014baf3
- (_Bool)vcp_isMovie;	// IMP=0x000000000014ba31
- (id)vcp_uniformTypeIdentifier;	// IMP=0x000000000014b9ba
- (id)vcp_avAsset;	// IMP=0x000000000014c2d8
@end
