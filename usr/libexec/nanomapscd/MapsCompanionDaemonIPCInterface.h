//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface MapsCompanionDaemonIPCInterface
{
}

+ (id)sharedInterface;	// IMP=0x0020000000054497
- (void)establishConnection;	// IMP=0x00200000000545bb
- (void)_configureIncomingConnection:(id)arg1;	// IMP=0x0010000000054503

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

