//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface MRSendButtonEventMessage
{
}

- (unsigned long long)type;	// IMP=0x0000000000124f00
@property(readonly, nonatomic) struct _MRHIDButtonEvent buttonEvent;
- (id)initWithButtonEvent:(struct _MRHIDButtonEvent)arg1;	// IMP=0x0000000000124df1

@end

