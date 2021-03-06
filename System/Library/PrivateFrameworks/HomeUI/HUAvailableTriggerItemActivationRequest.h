//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HUAvailableTriggerItem, NAFuture;

@interface HUAvailableTriggerItemActivationRequest : NSObject
{
    _Bool _active;	// 8 = 0x8
    HUAvailableTriggerItem *_item;	// 16 = 0x10
    NAFuture *_completionFuture;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000fc66a
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(retain, nonatomic) NAFuture *completionFuture; // @synthesize completionFuture=_completionFuture;
@property(nonatomic) __weak HUAvailableTriggerItem *item; // @synthesize item=_item;
- (_Bool)isSameAsRequest:(id)arg1;	// IMP=0x00000000000fc555
- (id)initWithItem:(id)arg1 active:(_Bool)arg2;	// IMP=0x00000000000fc4cc

@end

