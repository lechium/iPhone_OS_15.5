//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CalendarWidget/CUIKSingleDayTimelineViewItem-Protocol.h>

@class MISSING_TYPE, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface _TtC14CalendarWidget21SpatialEventViewModel : NSObject <CUIKSingleDayTimelineViewItem>
{
    MISSING_TYPE *event;	// 1701866597 = 0x65706c65
    MISSING_TYPE *delegate;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *lineHeight;	// 0 = 0x0
    MISSING_TYPE *viewStartDate;	// 647864 = 0x9e2b8
    MISSING_TYPE *viewEndDate;	// 3756 = 0xeac
    MISSING_TYPE *frame;	// 647864 = 0x9e2b8
    MISSING_TYPE *visibleHeight;	// 0 = 0x0
    MISSING_TYPE *travelTimeHeight;	// 2147484672 = 0x80000400
    MISSING_TYPE *unPinnedViewFrame;	// 0 = 0x0
    MISSING_TYPE *hideTravelTime;	// 1651466079 = 0x626f5f5f
    MISSING_TYPE *visibleHeightLocked;	// 1818784869 = 0x6c687465
}

+ (double)barToBarHorizontalDistanceIncludingBarWidth;	// IMP=0x00000000000621a0
- (void).cxx_destruct;	// IMP=0x00000000000624f0
- (id)init;	// IMP=0x0000000000062470
@property(nonatomic, readonly) NSString *description;
- (void)setTravelTimeHeight:(double)arg1;	// IMP=0x0000000000062180
- (void)setVisibleHeight:(double)arg1;	// IMP=0x0000000000062160
@property(nonatomic) _Bool visibleHeightLocked; // @synthesize visibleHeightLocked;
- (struct CGRect)stagedFrame;	// IMP=0x0000000000062120
- (void)setStagedFrame:(struct CGRect)arg1;	// IMP=0x0000000000062100
@property(nonatomic, readonly) double viewMaxNaturalTextHeight;
@property(nonatomic, readonly) double enoughHeightForOneLine;
@property(nonatomic) _Bool hideTravelTime; // @synthesize hideTravelTime;
@property(nonatomic, readonly) NSDate *end;
@property(nonatomic, readonly) NSDate *start;
@property(nonatomic, readonly) NSDate *startWithTravelTime;
@property(nonatomic, readonly) NSString *eventIdentifier;
@property(nonatomic) struct CGRect unPinnedViewFrame; // @synthesize unPinnedViewFrame;

@end
