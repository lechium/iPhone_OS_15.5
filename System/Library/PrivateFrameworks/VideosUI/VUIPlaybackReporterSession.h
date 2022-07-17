//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol TVPPlayback;

__attribute__((visibility("hidden")))
@interface VUIPlaybackReporterSession : NSObject
{
    NSMutableDictionary *_metadata;	// 8 = 0x8
    struct os_unfair_lock_s _metadataLock;	// 16 = 0x10
    _Bool _reportingEnabled;	// 20 = 0x14
    NSObject<TVPPlayback> *_player;	// 24 = 0x18
    NSString *_UUID;	// 32 = 0x20
    id _context;	// 40 = 0x28
}

+ (id)transitionReasonForMediaControllerStopReason:(id)arg1 autoStop:(id)arg2;	// IMP=0x000000000007b8bc
+ (id)transitionReasonForMediaControllerStartReason:(id)arg1 autoStart:(id)arg2;	// IMP=0x000000000007b6ed
+ (id)transitionTypeForMediaControllerAutoTransition:(id)arg1;	// IMP=0x000000000007b648
- (void).cxx_destruct;	// IMP=0x00000000002d9af9
@property(nonatomic) _Bool reportingEnabled; // @synthesize reportingEnabled=_reportingEnabled;
@property(retain, nonatomic) id context; // @synthesize context=_context;
@property(readonly, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
@property(nonatomic) __weak NSObject<TVPPlayback> *player; // @synthesize player=_player;
- (id)consumeMetadataForKey:(id)arg1;	// IMP=0x00000000002d9a17
- (void)setMetadata:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000002d9987
- (id)metadataForKey:(id)arg1;	// IMP=0x00000000002d9920
- (id)description;	// IMP=0x00000000002d9844
- (id)initWithPlayer:(id)arg1 context:(id)arg2;	// IMP=0x00000000002d96bf
- (id)consumeStartReason;	// IMP=0x000000000007b5f4
- (id)consumeStartType;	// IMP=0x000000000007b5a0
- (id)consumeStopReason;	// IMP=0x000000000007b54c
- (id)consumeStopType;	// IMP=0x000000000007b4f8

@end
