//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSTimer;

@interface SBIconListViewAppDragContext : NSObject
{
    _Bool _hasPaused;	// 8 = 0x8
    NSTimer *_pauseTimer;	// 16 = 0x10
    struct CGPoint _pausePoint;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000028f5b5
@property(nonatomic) _Bool hasPaused; // @synthesize hasPaused=_hasPaused;
@property(nonatomic) struct CGPoint pausePoint; // @synthesize pausePoint=_pausePoint;
@property(retain, nonatomic) NSTimer *pauseTimer; // @synthesize pauseTimer=_pauseTimer;

@end
