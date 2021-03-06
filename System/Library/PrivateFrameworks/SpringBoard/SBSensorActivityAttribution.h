//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/SBFSensorActivityAttribution-Protocol.h>

@class NSString;

@interface SBSensorActivityAttribution <SBFSensorActivityAttribution>
{
    long long _sensor;	// 8 = 0x8
}

@property(readonly, nonatomic) long long sensor; // @synthesize sensor=_sensor;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00000000001ac5e4
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x00000000001ac594
- (id)succinctDescriptionBuilder;	// IMP=0x00000000001ac4fa
- (id)succinctDescription;	// IMP=0x00000000001ac4aa
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001ac26f
- (id)initWithSBActivityAttribution:(id)arg1 sensor:(long long)arg2;	// IMP=0x00000000001ac22b
- (id)initWithSTActivityAttribution:(id)arg1 sensor:(long long)arg2;	// IMP=0x00000000001ac1e7

// Remaining properties
@property(readonly, copy, nonatomic) NSString *attributionGroup;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier;
@property(readonly, copy, nonatomic) NSString *bundleIdentifierMatchingDisplayName;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly) Class superclass;

@end

