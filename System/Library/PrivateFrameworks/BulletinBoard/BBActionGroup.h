//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface BBActionGroup
{
    NSArray *_actions;	// 128 = 0x80
}

+ (id)actionGroupWithActions:(id)arg1;	// IMP=0x0000000000045430
- (void).cxx_destruct;	// IMP=0x0000000000045857
@property(copy, nonatomic) NSArray *actions; // @synthesize actions=_actions;
- (id)awakeAfterUsingCoder:(id)arg1;	// IMP=0x00000000000457d1
- (id)replacementObjectForCoder:(id)arg1;	// IMP=0x0000000000045772
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000456d7
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000045617
- (unsigned long long)hash;	// IMP=0x0000000000045596
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000045482

@end
