//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFSafetyBlock, NSString;
@protocol SVXTaskTracking;

__attribute__((visibility("hidden")))
@interface SVXAudioSessionAssertion : NSObject
{
    AFSafetyBlock *_relinquishHandler;	// 8 = 0x8
    unsigned int _audioSessionID;	// 16 = 0x10
    NSString *_reason;	// 24 = 0x18
    id <SVXTaskTracking> _taskTracker;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000002d765
@property(readonly, nonatomic) id <SVXTaskTracking> taskTracker; // @synthesize taskTracker=_taskTracker;
@property(readonly, copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) unsigned int audioSessionID; // @synthesize audioSessionID=_audioSessionID;
- (void)relinquish;	// IMP=0x000000000002d68c
- (id)initWithReason:(id)arg1 audioSessionID:(unsigned int)arg2 taskTracker:(id)arg3 relinquishHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000002d4b6
- (void)dealloc;	// IMP=0x000000000002d43a
- (id)description;	// IMP=0x000000000002d3a8

@end
