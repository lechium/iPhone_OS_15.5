//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class KGEdgeFilter, MARelation;

@interface MAEdgeFilter
{
}

+ (id)edgeFilterWithVisualString:(id)arg1;	// IMP=0x00000000000c4e01
+ (_Bool)scanInstance:(out id *)arg1 withScanner:(id)arg2;	// IMP=0x00000000000c4d5f
- (id)relationWithType:(unsigned long long)arg1;	// IMP=0x00000000000c4d24
@property(readonly, nonatomic) MARelation *anyDirectionRelation;
@property(readonly, nonatomic) MARelation *inRelation;
@property(readonly, nonatomic) MARelation *outRelation;
- (void)appendVisualStringToString:(id)arg1;	// IMP=0x00000000000c4bf0
@property(readonly, nonatomic) KGEdgeFilter *kgEdgeFilter;
- (_Bool)matchesEdge:(id)arg1;	// IMP=0x00000000000c4b0a

@end
