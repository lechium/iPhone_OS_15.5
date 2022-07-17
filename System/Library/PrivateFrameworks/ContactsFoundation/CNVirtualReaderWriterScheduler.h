//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNReaderWriterScheduler-Protocol.h>

@class CNSuspendableSchedulerDecorator, NSString;

@interface CNVirtualReaderWriterScheduler : NSObject <CNReaderWriterScheduler>
{
    CNSuspendableSchedulerDecorator *_scheduler;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000547d3
@property(readonly, nonatomic) CNSuspendableSchedulerDecorator *scheduler; // @synthesize scheduler=_scheduler;
- (void)resume;	// IMP=0x000000000005478c
- (void)suspend;	// IMP=0x000000000005474f
- (void)performSynchronousWriterBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000546dd
- (void)performSynchronousReaderBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000005466b
- (id)performWriterBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000545e8
- (id)performReaderBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000054565
- (id)initWithScheduler:(id)arg1;	// IMP=0x00000000000544cc
- (id)init;	// IMP=0x0000000000054472

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
