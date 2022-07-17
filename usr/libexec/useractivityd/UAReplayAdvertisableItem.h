//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject;
@protocol OS_dispatch_semaphore;

@interface UAReplayAdvertisableItem
{
    NSObject<OS_dispatch_semaphore> *_wasResumed;	// 8 = 0x8
}

+ (id)replayableAdvertisableItemWithAdvertisableItem:(id)arg1;	// IMP=0x00400000000964c0
- (void).cxx_destruct;	// IMP=0x0020000000096523
@property(readonly, retain) NSObject<OS_dispatch_semaphore> *wasResumed; // @synthesize wasResumed=_wasResumed;
- (_Bool)wasResumedOnAnotherDeviceWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000096455
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000096426
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000963ce
- (id)initWithUUID:(id)arg1;	// IMP=0x001000000009636e

@end
