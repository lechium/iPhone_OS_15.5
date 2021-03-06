//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/NSCopying-Protocol.h>
#import <HomeKit/NSMutableCopying-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMMutableArray, HMPresenceEventActivation, NSString;

@interface HMPresenceEvent <NSSecureCoding, NSCopying, NSMutableCopying>
{
    NSString *_presenceType;	// 16 = 0x10
    HMPresenceEventActivation *_activation;	// 24 = 0x18
    unsigned long long _presenceEventType;	// 32 = 0x20
    unsigned long long _presenceUserType;	// 40 = 0x28
    HMMutableArray *_observedUsers;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000002062b1
+ (id)users:(id)arg1 home:(id)arg2 presenceType:(id)arg3;	// IMP=0x0000000000205e9d
+ (id)createWithDictionary:(id)arg1 home:(id)arg2;	// IMP=0x0000000000205d6b
+ (_Bool)isSupportedForHome:(id)arg1;	// IMP=0x0000000000205d52
- (void).cxx_destruct;	// IMP=0x0000000000205c69
@property(readonly, nonatomic) HMMutableArray *observedUsers; // @synthesize observedUsers=_observedUsers;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000205c52
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000205a59
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002059c6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000205933
- (_Bool)_mergeWithNewObject:(id)arg1;	// IMP=0x00000000002055c2
- (void)updateUsers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000204e33
- (void)updatePresenceType:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002049cd
- (id)_serializeForAdd;	// IMP=0x000000000020467e
- (void)_updateFromDictionary:(id)arg1;	// IMP=0x000000000020427d
- (id)users;	// IMP=0x000000000020422d
- (void)setPresenceUserType:(unsigned long long)arg1;	// IMP=0x0000000000204162
@property(readonly, nonatomic) unsigned long long presenceUserType; // @synthesize presenceUserType=_presenceUserType;
- (void)setPresenceEventType:(unsigned long long)arg1;	// IMP=0x000000000020403c
@property(readonly, nonatomic) unsigned long long presenceEventType; // @synthesize presenceEventType=_presenceEventType;
@property(retain, nonatomic) HMPresenceEventActivation *activation; // @synthesize activation=_activation;
@property(readonly, nonatomic) unsigned long long activationGranularity;
@property(retain, nonatomic) NSString *presenceType; // @synthesize presenceType=_presenceType;
- (id)description;	// IMP=0x0000000000203914
- (id)initWithDict:(id)arg1 presenceType:(id)arg2 users:(id)arg3 activation:(id)arg4;	// IMP=0x000000000020381a
- (id)initWithDict:(id)arg1 presenceType:(id)arg2 users:(id)arg3 activationGranularity:(unsigned long long)arg4;	// IMP=0x000000000020375a
- (id)initWithPresenceEventType:(unsigned long long)arg1 presenceUserType:(unsigned long long)arg2 users:(id)arg3;	// IMP=0x000000000020361a
- (id)initWithPresenceEventType:(unsigned long long)arg1 presenceUserType:(unsigned long long)arg2;	// IMP=0x0000000000203601
- (id)initWithPresenceType:(id)arg1 users:(id)arg2;	// IMP=0x00000000002034f9
- (id)initWithPresenceType:(id)arg1;	// IMP=0x00000000002034e0

@end

