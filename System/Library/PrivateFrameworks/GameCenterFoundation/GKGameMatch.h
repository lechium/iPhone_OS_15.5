//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GKGame, GKPlayer, GKRecentMatchInternal, NSDate;

@interface GKGameMatch : NSObject
{
    GKRecentMatchInternal *_internal;	// 8 = 0x8
    GKGame *_game;	// 16 = 0x10
    GKPlayer *_player;	// 24 = 0x18
}

+ (_Bool)instancesRespondToSelector:(SEL)arg1;	// IMP=0x000000000001f695
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;	// IMP=0x000000000001f50e
- (void).cxx_destruct;	// IMP=0x000000000001f958
@property(retain, nonatomic) GKPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) GKGame *game; // @synthesize game=_game;
@property(retain) GKRecentMatchInternal *internal; // @synthesize internal=_internal;
- (unsigned long long)hash;	// IMP=0x000000000001f8bb
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001f7f5
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;	// IMP=0x000000000001f76f
- (id)valueForUndefinedKey:(id)arg1;	// IMP=0x000000000001f6ec
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x000000000001f61a
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x000000000001f580
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x000000000001f4fc
- (id)description;	// IMP=0x000000000001f400
- (id)init;	// IMP=0x000000000001f3ea
- (id)initWithInternalRepresentation:(id)arg1 game:(id)arg2;	// IMP=0x000000000001f20e

// Remaining properties
@property(retain, nonatomic) NSDate *date; // @dynamic date;

@end

