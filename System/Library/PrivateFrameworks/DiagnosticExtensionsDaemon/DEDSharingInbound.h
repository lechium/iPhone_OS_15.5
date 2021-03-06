//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DEDController, DEDSharingConnection;
@protocol OS_os_log;

@interface DEDSharingInbound : NSObject
{
    DEDController *_delegate;	// 8 = 0x8
    DEDSharingConnection *_connection;	// 16 = 0x10
    NSObject<OS_os_log> *_log;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000005aa6d
@property(retain) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property __weak DEDSharingConnection *connection; // @synthesize connection=_connection;
@property __weak DEDController *delegate; // @synthesize delegate=_delegate;
- (void)handleRequest:(id)arg1 forSFSession:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000005a9b4
- (void)handleObject:(id)arg1 forSFSession:(id)arg2 forBugSession:(id)arg3 callingDevice:(id)arg4;	// IMP=0x0000000000059b80
- (void)handleObject:(id)arg1 forSFSession:(id)arg2;	// IMP=0x0000000000058f71
- (id)initWithController:(id)arg1 sharingConnection:(id)arg2;	// IMP=0x0000000000058ee4
- (id)init;	// IMP=0x0000000000058e05

@end

