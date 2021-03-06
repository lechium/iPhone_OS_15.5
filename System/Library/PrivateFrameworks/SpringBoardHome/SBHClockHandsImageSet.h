//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIImage;

@interface SBHClockHandsImageSet : NSObject
{
    struct SBHClockApplicationIconImageMetrics _metrics;	// 8 = 0x8
    UIImage *_seconds;	// 240 = 0xf0
    UIImage *_minutes;	// 248 = 0xf8
    UIImage *_hours;	// 256 = 0x100
    UIImage *_hourMinuteDot;	// 264 = 0x108
    UIImage *_secondDot;	// 272 = 0x110
}

- (void).cxx_destruct;	// IMP=0x0000000000099988
@property(retain, nonatomic) UIImage *secondDot; // @synthesize secondDot=_secondDot;
@property(retain, nonatomic) UIImage *hourMinuteDot; // @synthesize hourMinuteDot=_hourMinuteDot;
@property(retain, nonatomic) UIImage *hours; // @synthesize hours=_hours;
@property(retain, nonatomic) UIImage *minutes; // @synthesize minutes=_minutes;
@property(retain, nonatomic) UIImage *seconds; // @synthesize seconds=_seconds;
- (void)getMetrics:(out struct SBHClockApplicationIconImageMetrics *)arg1;	// IMP=0x00000000000998c9
- (void)setMetrics:(const in struct SBHClockApplicationIconImageMetrics *)arg1;	// IMP=0x00000000000998b2

@end

