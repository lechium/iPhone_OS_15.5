//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKObservation-Protocol.h>

@class NSString;

@interface CRKConcreteStudentNotificationObservation : NSObject <CRKObservation>
{
    NSString *_notificationName;	// 8 = 0x8
    CDUnknownBlockType _notificationHandler;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000620b5
@property(copy, nonatomic) CDUnknownBlockType notificationHandler; // @synthesize notificationHandler=_notificationHandler;
@property(readonly, copy, nonatomic) NSString *notificationName; // @synthesize notificationName=_notificationName;
- (void)invalidate;	// IMP=0x000000000006207e
- (void)receiveNotificationWithName:(id)arg1 userInfo:(id)arg2;	// IMP=0x0000000000061f82
- (id)initWithNotificationName:(id)arg1 notificationHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000061ed6
- (void)dealloc;	// IMP=0x0000000000061e98

@end
