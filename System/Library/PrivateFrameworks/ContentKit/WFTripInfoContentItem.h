//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContentKit/WFContentItemClass-Protocol.h>

@class WFTripInfo;

@interface WFTripInfoContentItem <WFContentItemClass>
{
}

+ (id)countDescription;	// IMP=0x000000000002790a
+ (id)pluralTypeDescription;	// IMP=0x00000000000278f2
+ (id)typeDescription;	// IMP=0x00000000000278da
+ (id)contentCategories;	// IMP=0x0000000000027873
+ (id)outputTypes;	// IMP=0x0000000000027778
+ (id)ownedTypes;	// IMP=0x00000000000276fc
+ (id)stringConversionBehavior;	// IMP=0x0000000000027692
+ (id)propertyBuilders;	// IMP=0x0000000000027439
- (id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000027aa6
- (id)distance;	// IMP=0x0000000000027a56
- (id)routeName;	// IMP=0x0000000000027a06
- (id)arrivalTime;	// IMP=0x0000000000027999
- (id)travelTime;	// IMP=0x0000000000027949
@property(readonly, nonatomic) WFTripInfo *tripInfo;

@end

