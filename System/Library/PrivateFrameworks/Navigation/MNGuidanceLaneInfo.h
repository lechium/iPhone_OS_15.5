//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Navigation/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSUUID;

@interface MNGuidanceLaneInfo : NSObject <NSSecureCoding>
{
    _Bool _isForManeuver;	// 8 = 0x8
    int _composedGuidanceEventIndex;	// 12 = 0xc
    NSUUID *_uniqueID;	// 16 = 0x10
    NSArray *_lanes;	// 24 = 0x18
    NSDictionary *_variableOverrides;	// 32 = 0x20
    long long _distanceDetailLevel;	// 40 = 0x28
    NSArray *_titles;	// 48 = 0x30
    NSArray *_instructions;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000dbf0b
- (void).cxx_destruct;	// IMP=0x00000000000dc4ef
@property(readonly, nonatomic) NSArray *instructions; // @synthesize instructions=_instructions;
@property(readonly, nonatomic) NSArray *titles; // @synthesize titles=_titles;
@property(readonly, nonatomic) int composedGuidanceEventIndex; // @synthesize composedGuidanceEventIndex=_composedGuidanceEventIndex;
@property(readonly, nonatomic) long long distanceDetailLevel; // @synthesize distanceDetailLevel=_distanceDetailLevel;
@property(readonly, nonatomic) NSDictionary *variableOverrides; // @synthesize variableOverrides=_variableOverrides;
@property(readonly, nonatomic) NSArray *lanes; // @synthesize lanes=_lanes;
@property(readonly, nonatomic) _Bool isForManeuver; // @synthesize isForManeuver=_isForManeuver;
@property(readonly, nonatomic) NSUUID *uniqueID; // @synthesize uniqueID=_uniqueID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000dc217
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000dbf13
- (id)description;	// IMP=0x00000000000dbcb4
- (id)initWithID:(id)arg1 isForManeuver:(_Bool)arg2 lanes:(id)arg3 titles:(id)arg4 instructions:(id)arg5 variableOverrides:(id)arg6 distanceDetailLevel:(long long)arg7 composedGuidanceEventIndex:(int)arg8;	// IMP=0x00000000000dbb9c

@end

