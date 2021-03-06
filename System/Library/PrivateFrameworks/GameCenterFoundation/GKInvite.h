//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GKInviteInternal, GKPlayer, NSData, NSString;

@interface GKInvite : NSObject
{
    _Bool _cancelled;	// 8 = 0x8
    GKInviteInternal *_internal;	// 16 = 0x10
    GKPlayer *_sender;	// 24 = 0x18
}

+ (_Bool)instancesRespondToSelector:(SEL)arg1;	// IMP=0x0000000000040cb8
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;	// IMP=0x0000000000040b31
- (void).cxx_destruct;	// IMP=0x0000000000040e57
@property(nonatomic, getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(readonly, retain, nonatomic) GKPlayer *sender; // @synthesize sender=_sender;
@property(retain) GKInviteInternal *internal; // @synthesize internal=_internal;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;	// IMP=0x0000000000040d92
- (id)valueForUndefinedKey:(id)arg1;	// IMP=0x0000000000040d0f
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x0000000000040c3d
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x0000000000040ba3
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x0000000000040b1f
- (id)description;	// IMP=0x00000000000409d9
@property(readonly, nonatomic, getter=isHosted) _Bool hosted; // @dynamic hosted;
@property(readonly, retain, nonatomic) NSString *inviter; // @dynamic inviter;
- (unsigned long long)hash;	// IMP=0x0000000000040923
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004085d
- (id)initWithInternalRepresentation:(id)arg1;	// IMP=0x000000000004075a
- (id)init;	// IMP=0x0000000000040700

// Remaining properties
@property(readonly, nonatomic) NSString *inviteID; // @dynamic inviteID;
@property(readonly, nonatomic) _Bool isNearby; // @dynamic isNearby;
@property(readonly, nonatomic) NSString *message; // @dynamic message;
@property(readonly, nonatomic) unsigned int playerAttributes; // @dynamic playerAttributes;
@property(readonly, nonatomic) unsigned long long playerGroup; // @dynamic playerGroup;
@property(readonly, nonatomic) NSData *sessionToken; // @dynamic sessionToken;

@end

