//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface GKGameRecommendationInternal
{
    NSString *_reason;	// 112 = 0x70
    NSString *_engineID;	// 120 = 0x78
}

+ (id)secureCodedPropertyKeys;	// IMP=0x002000000015d6aa
+ (id)propertiesToFetch;	// IMP=0x00100000001716a3
- (void).cxx_destruct;	// IMP=0x002000000015d934
@property(retain, nonatomic) NSString *engineID; // @synthesize engineID=_engineID;
@property(retain, nonatomic) NSString *reason; // @synthesize reason=_reason;
- (id)serverRepresentation;	// IMP=0x001000000015d82c
- (id)initWithGame:(id)arg1;	// IMP=0x001000000015d642
- (void)updateWithProperties:(id)arg1;	// IMP=0x00100000001716f3

@end
