//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, _IKDOMPrototypeDerivationRules;

@interface IKDOMPrototype
{
    struct {
        _Bool parsedGrouping;
    } _flags;	// 8 = 0x8
    NSArray *_grouping;	// 16 = 0x10
    NSString *_type;	// 24 = 0x18
    NSString *_selector;	// 32 = 0x20
    _IKDOMPrototypeDerivationRules *_rules;	// 40 = 0x28
}

+ (id)_groupingForDOMElement:(id)arg1;	// IMP=0x0000000000076169
+ (id)prototypeWithDOMElement:(id)arg1;	// IMP=0x0000000000075d1f
- (void).cxx_destruct;	// IMP=0x0000000000076deb
@property(readonly, copy, nonatomic) _IKDOMPrototypeDerivationRules *rules; // @synthesize rules=_rules;
@property(readonly, copy, nonatomic) NSString *selector; // @synthesize selector=_selector;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
- (id)_derivativeWithDataItem:(id)arg1;	// IMP=0x000000000007652c
- (id)instantiateDOMElement;	// IMP=0x0000000000076112
- (id)variantForDataItem:(id)arg1;	// IMP=0x0000000000076036
@property(readonly, copy, nonatomic) NSArray *grouping; // @synthesize grouping=_grouping;
- (id)initWithDOMElement:(id)arg1 selector:(id)arg2;	// IMP=0x0000000000075e00

@end
