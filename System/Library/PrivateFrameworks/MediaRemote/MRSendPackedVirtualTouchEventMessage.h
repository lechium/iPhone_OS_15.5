//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface MRSendPackedVirtualTouchEventMessage
{
}

- (id)description;	// IMP=0x00000000000fbd98
- (unsigned long long)type;	// IMP=0x00000000000fbd8d
@property(readonly, nonatomic) unsigned long long virtualDeviceID;
@property(readonly, nonatomic) struct _MRHIDTouchEvent event;
- (id)initWithTouchEvent:(struct _MRHIDTouchEvent)arg1 virtualDeviceID:(unsigned long long)arg2;	// IMP=0x00000000000fbab9

@end

