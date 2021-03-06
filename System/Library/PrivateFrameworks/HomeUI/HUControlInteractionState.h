//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NAValueThrottler;

@interface HUControlInteractionState : NSObject
{
    _Bool _userInteractionActive;	// 8 = 0x8
    _Bool _writesInProgressOrPossible;	// 9 = 0x9
    NAValueThrottler *_writeThrottler;	// 16 = 0x10
    unsigned long long _inFlightWriteCount;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000003f64c6
@property(nonatomic, getter=areWritesInProgressOrPossible) _Bool writesInProgressOrPossible; // @synthesize writesInProgressOrPossible=_writesInProgressOrPossible;
@property(nonatomic, getter=isUserInteractionActive) _Bool userInteractionActive; // @synthesize userInteractionActive=_userInteractionActive;
@property(nonatomic) unsigned long long inFlightWriteCount; // @synthesize inFlightWriteCount=_inFlightWriteCount;
@property(retain, nonatomic) NAValueThrottler *writeThrottler; // @synthesize writeThrottler=_writeThrottler;

@end

