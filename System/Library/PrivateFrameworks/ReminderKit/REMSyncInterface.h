//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class REMXPCDaemonController;

@interface REMSyncInterface : NSObject
{
    REMXPCDaemonController *_daemonController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000ae8b6
@property(retain, nonatomic) REMXPCDaemonController *daemonController; // @synthesize daemonController=_daemonController;
- (void)restartCloudKitSyncWithReason:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000ae592
- (void)syncCloudKitWithReason:(id)arg1 discretionary:(_Bool)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000ae281
- (id)initWithDaemonController:(id)arg1;	// IMP=0x00000000000ae216
- (id)init;	// IMP=0x00000000000ae1bc

@end

