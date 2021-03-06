//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface PHAssetGridMetadataProperties
{
    NSString *_title;	// 16 = 0x10
    NSString *_originalFilename;	// 24 = 0x18
}

+ (id)propertiesToFetch;	// IMP=0x00000000001088d6
+ (id)propertySetName;	// IMP=0x00000000001088c9
- (void).cxx_destruct;	// IMP=0x0000000000108898
@property(readonly, copy, nonatomic) NSString *originalFilename; // @synthesize originalFilename=_originalFilename;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(_Bool)arg3;	// IMP=0x000000000010875a

@end

