//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Message/EFLoggable-Protocol.h>

@class NSString;

@interface MFFileCompressionQueueActivityManager : NSObject <EFLoggable>
{
}

+ (_Bool)compressFilesInQueue:(id)arg1 shouldDefer:(CDUnknownBlockType)arg2;	// IMP=0x00000000000e62f8
+ (void)_unregisterXPCActivity;	// IMP=0x00000000000e627b
+ (void)_registerXPCActivity;	// IMP=0x00000000000e5de4
+ (void)unregisterXPCActivity;	// IMP=0x00000000000e5d8f
+ (void)scheduleActivityIfNeeded;	// IMP=0x00000000000e5d31
+ (id)log;	// IMP=0x00000000000e5c54

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

