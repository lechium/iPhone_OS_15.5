//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSRegularExpression;

@interface _HKCDADocumentSampleComparisonFilter
{
    NSRegularExpression *_comparisonExpression;	// 8 = 0x8
}

+ (_Bool)isAllowedPredicateOperatorType:(unsigned long long)arg1 forKeyPath:(id)arg2;	// IMP=0x0000000000130096
+ (_Bool)areValidTypes:(id)arg1 forKeyPath:(id)arg2 error:(id *)arg3;	// IMP=0x000000000012ff95
+ (id)allowedValueClassesForKeyPath:(id)arg1;	// IMP=0x000000000012ff63
+ (id)allowedDataTypeClassesForKeyPath:(id)arg1;	// IMP=0x000000000012ff31
+ (_Bool)isSupportedKeyPath:(id)arg1;	// IMP=0x000000000012fe93
- (void).cxx_destruct;	// IMP=0x0000000000130232
- (_Bool)acceptsDataObject:(id)arg1;	// IMP=0x0000000000130161
- (void)configureInMemoryFilter;	// IMP=0x00000000001300b9

@end

