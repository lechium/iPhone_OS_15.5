//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoDurationObserving-Protocol.h>

@class NSString, SVKeyValueObserver;
@protocol SVPlayerItemObserving;

@interface SVVideoDurationObserver : NSObject <SVVideoDurationObserving>
{
    CDUnknownBlockType changeBlock;	// 8 = 0x8
    id <SVPlayerItemObserving> _playerItemObserver;	// 16 = 0x10
    SVKeyValueObserver *_playerItemDurationObserver;	// 24 = 0x18
    double _duration;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000027a1
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) SVKeyValueObserver *playerItemDurationObserver; // @synthesize playerItemDurationObserver=_playerItemDurationObserver;
@property(readonly, nonatomic) id <SVPlayerItemObserving> playerItemObserver; // @synthesize playerItemObserver=_playerItemObserver;
@property(copy, nonatomic, setter=onChange:) CDUnknownBlockType changeBlock; // @synthesize changeBlock;
- (void)updateDuration:(CDStruct_1b6d18a9)arg1;	// IMP=0x0000000000002671
- (id)initWithPlayerItemObserver:(id)arg1;	// IMP=0x000000000000225b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
