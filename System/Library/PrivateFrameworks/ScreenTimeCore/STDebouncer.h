//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol STDebouncerDelegate;

@interface STDebouncer : NSObject
{
    id <STDebouncerDelegate> _delegate;	// 8 = 0x8
    double _minCoalescenceInterval;	// 16 = 0x10
    double _maxCoalescenceInterval;	// 24 = 0x18
    id _value;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000003a490
@property(retain) id value; // @synthesize value=_value;
@property(nonatomic) double maxCoalescenceInterval; // @synthesize maxCoalescenceInterval=_maxCoalescenceInterval;
@property(nonatomic) double minCoalescenceInterval; // @synthesize minCoalescenceInterval=_minCoalescenceInterval;
@property(nonatomic) __weak id <STDebouncerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_delegate;	// IMP=0x000000000003a38d
- (void)_timeout;	// IMP=0x000000000003a325
- (void)_idle;	// IMP=0x000000000003a2e3
- (void)bounce:(id)arg1;	// IMP=0x000000000003a1e1
- (id)initWithMinCoalescenceInterval:(double)arg1 maxCoalescenceInterval:(double)arg2;	// IMP=0x000000000003a18f

@end

