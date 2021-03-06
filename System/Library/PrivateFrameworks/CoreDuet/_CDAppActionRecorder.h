//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreDuet/_CDActivityEventRecording-Protocol.h>
#import <CoreDuet/_CDAppActionRecording-Protocol.h>

@class NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface _CDAppActionRecorder : NSObject <_CDActivityEventRecording, _CDAppActionRecording>
{
    NSString *_previousActivityType;	// 8 = 0x8
    NSString *_previousTitle;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSXPCConnection *_connection;	// 32 = 0x20
}

+ (id)appActionRecorder;	// IMP=0x00000000000aae5e
- (void).cxx_destruct;	// IMP=0x00000000000ab571
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSString *previousTitle; // @synthesize previousTitle=_previousTitle;
@property(retain, nonatomic) NSString *previousActivityType; // @synthesize previousActivityType=_previousActivityType;
- (void)recordUserActivityEvents:(id)arg1;	// IMP=0x00000000000ab3db
- (void)recordUserActivityEvent:(id)arg1;	// IMP=0x00000000000ab3d5
- (void)recordUserActivityEventForCollection:(id)arg1;	// IMP=0x00000000000ab3c3
- (void)_recordUserActivityEvent:(id)arg1;	// IMP=0x00000000000ab1c7
- (void)recordAppAction:(id)arg1;	// IMP=0x00000000000ab1c1
- (void)createConnection;	// IMP=0x00000000000aafde
- (void)dealloc;	// IMP=0x00000000000aaf73
- (id)init;	// IMP=0x00000000000aaeb3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

