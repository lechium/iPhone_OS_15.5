//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Timeline/NSCopying-Protocol.h>
#import <Timeline/NSSecureCoding-Protocol.h>

@class NSDate, NSTimer, TLTimelineEntryNode, TLTimelineWindow;
@protocol TLTimelineDelegate, TLTimelineEntry;

@interface TLTimeline : NSObject <NSSecureCoding, NSCopying>
{
    TLTimelineEntryNode *_leftmostNode;	// 8 = 0x8
    TLTimelineEntryNode *_rightmostNode;	// 16 = 0x10
    TLTimelineWindow *_nowWindow;	// 24 = 0x18
    NSTimer *_timer;	// 32 = 0x20
    id <TLTimelineDelegate> _delegate;	// 40 = 0x28
    _Bool _delegateRespondsToTimerFired;	// 48 = 0x30
    _Bool _updatesNowNodeOnSignificantTimeChange;	// 49 = 0x31
    int _notifyToken;	// 52 = 0x34
    _Bool _paused;	// 56 = 0x38
}

+ (id)TLTimelineSegmentFromSortedEntries:(id)arg1 withLowerBound:(id)arg2 upperBound:(id)arg3;	// IMP=0x0000000000009bd4
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000861e
- (void).cxx_destruct;	// IMP=0x000000000000a545
@property(nonatomic) _Bool paused; // @synthesize paused=_paused;
@property(nonatomic) __weak id <TLTimelineDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_recycleAllNodes;	// IMP=0x000000000000a495
- (void)_trimTimeline;	// IMP=0x000000000000a20a
- (void)_updateNowWindow;	// IMP=0x000000000000a09d
- (id)_nowNode;	// IMP=0x000000000000a087
- (id)_sortedEntries:(id)arg1;	// IMP=0x0000000000009fda
- (void)_setupWithEntry:(id)arg1;	// IMP=0x0000000000009b09
@property(readonly, nonatomic) id <TLTimelineEntry> lastEntry;
@property(readonly, nonatomic) NSDate *dateOfLastEntryInTimeline;
- (id)_rightmostDate;	// IMP=0x0000000000009acb
- (id)_nowEntry;	// IMP=0x0000000000009a7b
- (void)_timerFired;	// IMP=0x0000000000009a09
- (void)_updateTimer;	// IMP=0x00000000000095f2
- (id)description;	// IMP=0x00000000000094f3
@property(readonly, nonatomic) NSDate *endOfVisibilityForNowEntry;
@property(readonly, nonatomic) unsigned long long nodeCapacity;
- (id)nowWindow;	// IMP=0x0000000000009460
@property(readonly, nonatomic) id <TLTimelineEntry> nowEntry;
- (void)extendRightFromDate:(id)arg1 withEntries:(id)arg2;	// IMP=0x0000000000009146
- (id)entriesWithinDateInterval:(id)arg1;	// IMP=0x0000000000008f08
- (void)extendTimelineFromDate:(id)arg1 withEntries:(id)arg2;	// IMP=0x0000000000008ef6
- (void)resetWithEntry:(id)arg1;	// IMP=0x0000000000008e58
@property(nonatomic) _Bool updatesNowNodeOnSignificantTimeChange;
- (unsigned long long)hash;	// IMP=0x0000000000008bd1
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000008aee
- (void)dealloc;	// IMP=0x0000000000008a0a
- (id)initWithEntry:(id)arg1;	// IMP=0x00000000000088fd
- (id)initWithWindow:(id)arg1 paused:(_Bool)arg2;	// IMP=0x00000000000087eb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000876e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000086d0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000008626

@end

