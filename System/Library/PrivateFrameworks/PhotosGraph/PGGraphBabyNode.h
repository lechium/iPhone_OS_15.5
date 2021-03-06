//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, PGGraphBabyNodeCollection;

@interface PGGraphBabyNode
{
    NSString *_uuid;	// 8 = 0x8
}

+ (id)caretakerOfBaby;	// IMP=0x0000000000401756
+ (id)momentOfBaby;	// IMP=0x00000000004016ff
+ (id)filter;	// IMP=0x00000000004016ca
- (void).cxx_destruct;	// IMP=0x00000000004015c8
@property(readonly, nonatomic) PGGraphBabyNodeCollection *collection;
- (unsigned short)domain;	// IMP=0x0000000000401587
- (id)label;	// IMP=0x0000000000401568
- (id)description;	// IMP=0x0000000000401538
- (id)propertyDictionary;	// IMP=0x00000000004014be
- (_Bool)hasProperties:(id)arg1;	// IMP=0x000000000040141b
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4;	// IMP=0x00000000004013be
- (id)initWithUUID:(id)arg1;	// IMP=0x0000000000401350

@end

