//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface SKUIPropertyPredicateViewElement
{
    long long _comparisonType;	// 8 = 0x8
    NSString *_property;	// 16 = 0x10
    NSString *_value;	// 24 = 0x18
}

+ (_Bool)shouldParseChildDOMElements;	// IMP=0x000000000016e79d
- (void).cxx_destruct;	// IMP=0x000000000016ebc1
@property(readonly, copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(readonly, copy, nonatomic) NSString *property; // @synthesize property=_property;
@property(readonly, nonatomic) long long comparisonType; // @synthesize comparisonType=_comparisonType;
- (id)entityValuePredicate;	// IMP=0x000000000016e8cb
- (id)applyUpdatesWithElement:(id)arg1;	// IMP=0x000000000016e7a5
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;	// IMP=0x000000000016e54c

@end
