//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreRoutine/NSSecureCoding-Protocol.h>

@interface RTScenarioTrigger : NSObject <NSSecureCoding>
{
    unsigned long long _type;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000556e
+ (id)scenarioTriggerSettledStateToString:(unsigned long long)arg1;	// IMP=0x0000000000005543
+ (id)scenarioTriggerTypeToString:(unsigned long long)arg1;	// IMP=0x000000000000550a
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (unsigned long long)hash;	// IMP=0x0000000000005849
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000579c
- (id)description;	// IMP=0x000000000000571f
- (id)initWithType:(unsigned long long)arg1;	// IMP=0x00000000000056e2
- (id)init;	// IMP=0x0000000000005694
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000055fa
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000005576

@end

