//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContentKit/WFContentItemClass-Protocol.h>

@class WFTimeInterval;

@interface WFTimeIntervalContentItem <WFContentItemClass>
{
}

+ (id)countDescription;	// IMP=0x000000000003b79d
+ (id)pluralTypeDescription;	// IMP=0x000000000003b78c
+ (id)typeDescription;	// IMP=0x000000000003b77b
+ (id)contentCategories;	// IMP=0x000000000003b714
+ (id)outputTypes;	// IMP=0x000000000003b619
+ (id)ownedTypes;	// IMP=0x000000000003b59d
- (id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000003b7dc
@property(readonly, nonatomic) WFTimeInterval *timeInterval;

@end
