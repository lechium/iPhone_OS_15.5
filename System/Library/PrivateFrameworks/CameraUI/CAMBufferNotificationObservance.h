//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNotificationCenter, NSObject, NSString;

@interface CAMBufferNotificationObservance
{
    NSString *_notification;	// 8 = 0x8
    NSObject *_object;	// 16 = 0x10
    NSNotificationCenter *_notificationCenter;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001c5720
@property(readonly, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly, nonatomic) __weak NSObject *object; // @synthesize object=_object;
@property(readonly, copy, nonatomic) NSString *notification; // @synthesize notification=_notification;
- (void)teardownObservanceForBuffer:(id)arg1;	// IMP=0x00000000001c5631
- (void)setupObservanceForBuffer:(id)arg1;	// IMP=0x00000000001c5576
- (void)fulfillWithChange:(id)arg1;	// IMP=0x00000000001c5405
- (id)initWithNotification:(id)arg1 object:(id)arg2 center:(id)arg3 removeOnceEnabled:(_Bool)arg4;	// IMP=0x00000000001c531d

@end
