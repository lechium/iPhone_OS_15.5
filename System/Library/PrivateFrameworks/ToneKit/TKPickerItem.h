//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TKPickerItem : NSObject
{
    long long _section;	// 8 = 0x8
}

@property(nonatomic, setter=_setSection:) long long section; // @synthesize section=_section;
- (void)_appendDescriptionOfAttributeNamed:(id)arg1 withStringValue:(id)arg2 toString:(id)arg3;	// IMP=0x000000000002692d
- (void)_appendDescriptionOfAttributeNamed:(id)arg1 withBoolValue:(_Bool)arg2 toString:(id)arg3;	// IMP=0x00000000000268f5
- (void)_appendDescriptionOfAttributeNamed:(id)arg1 withIntegerValue:(long long)arg2 toString:(id)arg3;	// IMP=0x00000000000268d1
- (void)_appendDescriptionOfAttributesToString:(id)arg1;	// IMP=0x000000000002682f
- (id)description;	// IMP=0x000000000002678b

@end

