//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_source;

@interface TLAlertContext : NSObject
{
    _Bool _beingInterrupted;	// 8 = 0x8
    long long _playbackBackEnd;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_timeoutTimerSource;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000279e0
@property(nonatomic, getter=isBeingInterrupted) _Bool beingInterrupted; // @synthesize beingInterrupted=_beingInterrupted;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timeoutTimerSource; // @synthesize timeoutTimerSource=_timeoutTimerSource;
@property(nonatomic) long long playbackBackEnd; // @synthesize playbackBackEnd=_playbackBackEnd;

@end

