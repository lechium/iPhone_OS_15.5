//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CADisplayLink;

__attribute__((visibility("hidden")))
@interface WKOneShotDisplayLinkHandler : NSObject
{
    void *_drawingAreaProxy;	// 8 = 0x8
    CADisplayLink *_displayLink;	// 16 = 0x10
}

- (void)pause;	// IMP=0x00000000003a9d58
- (void)schedule;	// IMP=0x00000000003a9d40
- (void)invalidate;	// IMP=0x00000000003a9d17
- (void)displayLinkFired:(id)arg1;	// IMP=0x00000000003a9b71
- (void)setPreferredFramesPerSecond:(long long)arg1;	// IMP=0x00000000003a9b5b
- (void)dealloc;	// IMP=0x00000000003a9b2c
- (id)initWithDrawingAreaProxy:(void *)arg1;	// IMP=0x00000000003a99a7

@end

