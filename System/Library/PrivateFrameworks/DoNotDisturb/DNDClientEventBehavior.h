//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DoNotDisturb/NSCopying-Protocol.h>
#import <DoNotDisturb/NSSecureCoding-Protocol.h>

@class DNDClientEventDetails, NSString, NSUUID;

@interface DNDClientEventBehavior : NSObject <NSCopying, NSSecureCoding>
{
    DNDClientEventDetails *_eventDetails;	// 8 = 0x8
    unsigned long long _interruptionSuppression;	// 16 = 0x10
    unsigned long long _resolutionReason;	// 24 = 0x18
    NSUUID *_activeModeUUID;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001c1f3
- (void).cxx_destruct;	// IMP=0x000000000001c41d
@property(readonly, copy, nonatomic) NSUUID *activeModeUUID; // @synthesize activeModeUUID=_activeModeUUID;
@property(readonly, nonatomic) unsigned long long resolutionReason; // @synthesize resolutionReason=_resolutionReason;
@property(readonly, nonatomic) unsigned long long interruptionSuppression; // @synthesize interruptionSuppression=_interruptionSuppression;
@property(readonly, copy, nonatomic) DNDClientEventDetails *eventDetails; // @synthesize eventDetails=_eventDetails;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001c300
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001c1fb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001c1e8
- (id)_descriptionForRedacted:(_Bool)arg1;	// IMP=0x000000000001c0a3
@property(readonly, copy) NSString *redactedDescription;
- (id)description;	// IMP=0x000000000001c078
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001be07
- (unsigned long long)hash;	// IMP=0x000000000001bd52
- (id)initWithEventDetails:(id)arg1 interruptionSuppression:(unsigned long long)arg2 resolutionReason:(unsigned long long)arg3 activeModeUUID:(id)arg4;	// IMP=0x000000000001bc87

@end
