//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosGraph/PGGraphLocalizable-Protocol.h>
#import <PhotosGraph/PGGraphPortraitTopic-Protocol.h>
#import <PhotosGraph/PGGraphSynonymSupport-Protocol.h>

@class NSArray, NSString, PGGraphPOINodeCollection;

@interface PGGraphPOINode <PGGraphPortraitTopic, PGGraphLocalizable, PGGraphSynonymSupport>
{
    NSString *_label;	// 8 = 0x8
}

+ (id)momentOfPOI;	// IMP=0x00000000002dc685
+ (id)filterWithLabel:(id)arg1;	// IMP=0x00000000002dc633
+ (id)_localizationKeyForPOINode:(id)arg1;	// IMP=0x00000000002dc50b
+ (id)validPOILabels;	// IMP=0x00000000002dc3c1
+ (id)filter;	// IMP=0x00000000002dc391
- (void).cxx_destruct;	// IMP=0x00000000002dc26c
- (id)label;	// IMP=0x00000000002dc25b
@property(readonly, nonatomic) NSArray *localizedSynonyms;
@property(readonly, nonatomic) NSString *localizedName;
@property(readonly, nonatomic) PGGraphPOINodeCollection *collection;
- (unsigned short)domain;	// IMP=0x00000000002dc10e
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4;	// IMP=0x00000000002dc0fc
- (id)initWithLabel:(id)arg1;	// IMP=0x00000000002dc082
@property(readonly, nonatomic) NSString *pg_topic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

