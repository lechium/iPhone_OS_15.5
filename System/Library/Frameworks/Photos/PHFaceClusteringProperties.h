//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, PHFaceprint;

@interface PHFaceClusteringProperties
{
    PHFaceprint *_faceprint;	// 16 = 0x10
    NSString *_groupingIdentifier;	// 24 = 0x18
}

+ (id)propertiesToFetch;	// IMP=0x0000000000175480
+ (id)entityName;	// IMP=0x0000000000175473
+ (id)keyPathToPrimaryObject;	// IMP=0x000000000017546b
+ (id)keyPathFromPrimaryObject;	// IMP=0x0000000000175463
+ (id)propertySetName;	// IMP=0x0000000000175456
- (void).cxx_destruct;	// IMP=0x0000000000174fc2
@property(readonly, nonatomic) NSString *groupingIdentifier; // @synthesize groupingIdentifier=_groupingIdentifier;
@property(readonly, nonatomic) PHFaceprint *faceprint; // @synthesize faceprint=_faceprint;
- (id)initWithFetchDictionary:(id)arg1 face:(id)arg2 prefetched:(_Bool)arg3;	// IMP=0x0000000000174e29

@end
