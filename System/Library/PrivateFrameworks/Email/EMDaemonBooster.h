//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Email/EFLoggable-Protocol.h>

@class EMRemoteConnection, NSProgress, NSString;

@interface EMDaemonBooster : NSObject <EFLoggable>
{
    EMRemoteConnection *_connection;	// 8 = 0x8
    NSString *_loggingDescription;	// 16 = 0x10
    NSProgress *_remoteBoost;	// 24 = 0x18
}

+ (id)log;	// IMP=0x000000000001a13b
- (void).cxx_destruct;	// IMP=0x000000000001a8d1
@property(retain, nonatomic) NSProgress *remoteBoost; // @synthesize remoteBoost=_remoteBoost;
@property(copy, nonatomic) NSString *loggingDescription; // @synthesize loggingDescription=_loggingDescription;
@property(retain, nonatomic) EMRemoteConnection *connection; // @synthesize connection=_connection;
- (void)dealloc;	// IMP=0x000000000001a7c9
- (id)_newRemoteBoost;	// IMP=0x000000000001a548
- (id)initWithConnection:(id)arg1 description:(id)arg2;	// IMP=0x000000000001a218

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
