//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSNumber, NSString;

@interface SANPSetVolumeLevel
{
}

+ (id)setVolumeLevelWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000002c958
+ (id)setVolumeLevel;	// IMP=0x000000000002c946
- (_Bool)requiresResponse;	// IMP=0x000000000002c9ea
@property(copy, nonatomic) NSNumber *volumeValue;
@property(copy, nonatomic) NSArray *hashedRouteUIDs;
@property(copy, nonatomic) NSString *actionType;
@property(nonatomic) _Bool acknowledgedExceedingVolumeLimit;
- (id)encodedClassName;	// IMP=0x000000000002c939
- (id)groupIdentifier;	// IMP=0x000000000002c925

@end
