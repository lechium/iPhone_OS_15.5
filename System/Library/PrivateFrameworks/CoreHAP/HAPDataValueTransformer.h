//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HAPDataValueTransformer
{
}

+ (void)initialize;	// IMP=0x000000000000ef33
+ (id)defaultDataValueTransformer;	// IMP=0x000000000000ef22
+ (_Bool)isValidFormat:(unsigned long long)arg1;	// IMP=0x000000000000ef05
+ (Class)expectedTransformedClassForFormat:(unsigned long long)arg1;	// IMP=0x000000000000eed4
- (id)reverseTransformedValue:(id)arg1 format:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000000000e800
- (id)transformedValue:(id)arg1 format:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000000000de14

@end

