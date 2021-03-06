//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface FedStatsCategoricalType
{
    NSArray *_categories;	// 16 = 0x10
}

+ (id)createFromDict:(id)arg1 possibleError:(id *)arg2;	// IMP=0x000000000001b5dd
- (void).cxx_destruct;	// IMP=0x000000000001bb68
@property(retain, nonatomic) NSArray *categories; // @synthesize categories=_categories;
- (id)sampleForIndex:(unsigned long long)arg1;	// IMP=0x000000000001bac2
- (id)kOutOfCategories;	// IMP=0x000000000001bab5
- (long long)dataType;	// IMP=0x000000000001baaa
- (id)decodeFromIndex:(id)arg1 possibleError:(id *)arg2;	// IMP=0x000000000001b8ac
- (id)encodeToIndex:(id)arg1 possibleError:(id *)arg2;	// IMP=0x000000000001b800
- (id)initWithCategories:(id)arg1;	// IMP=0x000000000001b55c

@end

