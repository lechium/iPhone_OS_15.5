//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface NPKPMUButtonListener
{
    struct __IOHIDEventSystemClient *_hidSystemClient;	// 8 = 0x8
}

@property(nonatomic) struct __IOHIDEventSystemClient *hidSystemClient; // @synthesize hidSystemClient=_hidSystemClient;
- (void)_handleButtonEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x0000000000109993
- (void)_initializeHIDClient;	// IMP=0x0000000000109749
- (void)dealloc;	// IMP=0x00000000001096af
- (id)init;	// IMP=0x0000000000109616

@end
