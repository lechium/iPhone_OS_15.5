//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosGraph/PGAssetCollectionFeature-Protocol.h>

@class NSString, PGGraphAudioFeatureNodeCollection;

@interface PGGraphAudioFeatureNode <PGAssetCollectionFeature>
{
    NSString *_label;	// 8 = 0x8
}

+ (id)momentOfAudioFeature;	// IMP=0x000000000042bbe3
+ (id)filterForAudioFeatureLabel:(id)arg1;	// IMP=0x000000000042bb91
+ (id)filter;	// IMP=0x000000000042bb61
- (void).cxx_destruct;	// IMP=0x000000000042ba20
- (id)label;	// IMP=0x000000000042ba0f
@property(readonly, nonatomic) NSString *featureIdentifier;
@property(readonly, nonatomic) unsigned long long featureType;
@property(readonly, nonatomic) PGGraphAudioFeatureNodeCollection *collection;
- (unsigned short)domain;	// IMP=0x000000000042b92d
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4;	// IMP=0x000000000042b91b
- (id)initWithLabel:(id)arg1;	// IMP=0x000000000042b8a1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
