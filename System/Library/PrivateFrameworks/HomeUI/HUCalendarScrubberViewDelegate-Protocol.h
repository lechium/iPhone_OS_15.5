//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/NSObject-Protocol.h>

@class HUCalendarScrubberViewController, NSIndexPath;

@protocol HUCalendarScrubberViewDelegate <NSObject>
- (void)scrubberViewController:(HUCalendarScrubberViewController *)arg1 didSelectItemAtIndex:(NSIndexPath *)arg2;
- (void)scrubberViewController:(HUCalendarScrubberViewController *)arg1 didMoveToSection:(unsigned long long)arg2;
@end

