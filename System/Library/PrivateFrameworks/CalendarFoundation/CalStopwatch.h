//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface CalStopwatch : NSObject
{
    _Bool _isRunning;	// 8 = 0x8
    unsigned long long _lastStartTime;	// 16 = 0x10
    unsigned long long _elapsedTime;	// 24 = 0x18
    _Bool _hasValidElapsedTime;	// 32 = 0x20
    NSMutableDictionary *_events;	// 40 = 0x28
    _Bool _usesSignalFlags;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000000d8ea
@property _Bool usesSignalFlags; // @synthesize usesSignalFlags=_usesSignalFlags;
- (double)markEventEnd:(id)arg1;	// IMP=0x0000000000050db7
- (double)markEventSplit:(id)arg1;	// IMP=0x0000000000050b7e
- (void)markEventStart:(id)arg1;	// IMP=0x0000000000050a45
- (id)elapsedTimeAsString:(int)arg1;	// IMP=0x000000000000d642
- (unsigned long long)elapsedTimeAsNumber:(int)arg1;	// IMP=0x000000000000d6da
- (unsigned long long)elapsedTimeInNanoseconds;	// IMP=0x000000000000d713
- (void)reset;	// IMP=0x0000000000050a08
- (void)stop;	// IMP=0x0000000000050942
- (void)start;	// IMP=0x000000000000d57c
- (id)description;	// IMP=0x00000000000507fd
- (id)init;	// IMP=0x000000000000d51e

@end

