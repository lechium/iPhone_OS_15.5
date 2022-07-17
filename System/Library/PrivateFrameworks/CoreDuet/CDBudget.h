//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CDBudget : NSObject
{
    NSString *_name;	// 8 = 0x8
    long long _type;	// 16 = 0x10
    unsigned long long _integerId;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000014dbc0
@property(readonly) unsigned long long integerId; // @synthesize integerId=_integerId;
@property(readonly) long long type; // @synthesize type=_type;
@property(readonly) NSString *name; // @synthesize name=_name;
- (id)forecastEffectiveOnDate:(id)arg1 error:(id *)arg2;	// IMP=0x000000000014db90
- (id)childBudgetWithName:(id)arg1 maxFraction:(double)arg2 type:(long long)arg3 withOptions:(unsigned long long)arg4 error:(id *)arg5;	// IMP=0x000000000014db88
- (id)childBudgetWithName:(id)arg1 maxFraction:(double)arg2 type:(long long)arg3 error:(id *)arg4;	// IMP=0x000000000014db80
- (_Bool)deleteWithError:(id *)arg1;	// IMP=0x000000000014db78
- (long long)creditsRemainingWithError:(id *)arg1;	// IMP=0x000000000014db70
- (_Bool)compareValueTo:(long long)arg1 swapOnMatchWithValue:(long long)arg2 error:(id *)arg3;	// IMP=0x000000000014db68
- (_Bool)decrementByValue:(long long)arg1 error:(id *)arg2;	// IMP=0x000000000014db60
- (_Bool)incrementByValue:(long long)arg1 error:(id *)arg2;	// IMP=0x000000000014db58
- (id)initWithSession:(id)arg1 name:(id)arg2 type:(long long)arg3 integerId:(unsigned long long)arg4 error:(id *)arg5;	// IMP=0x000000000014db4a

@end
