//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSDictionary, NSNumber, NSString;

@interface AAJSON : NSObject
{
    MISSING_TYPE *value;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000ead0
- (id)init;	// IMP=0x000000000000ea70
- (id)toDataWithOptions:(unsigned long long)arg1:(id *)arg2;	// IMP=0x000000000000e970
@property(nonatomic, readonly) NSNumber *number;
@property(nonatomic, readonly) NSDictionary *object;
@property(nonatomic, readonly) NSArray *array;
@property(nonatomic, readonly) NSString *string;
@property(nonatomic, readonly) id any;
@property(nonatomic, readonly) _Bool exists;
- (id)objectAtIndexedSubscript:(long long)arg1;	// IMP=0x000000000000d910
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x000000000000d710
- (id)initWithData:(id)arg1;	// IMP=0x000000000000d6a0

@end

