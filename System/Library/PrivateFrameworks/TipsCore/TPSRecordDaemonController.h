//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TipsCore/_TPSXPCExportable-Protocol.h>

@class NSString, _TPSXPCConnection;

@interface TPSRecordDaemonController : NSObject <_TPSXPCExportable>
{
    _TPSXPCConnection *_xpcConnection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000001c4e1
@property(retain, nonatomic) _TPSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (id)remoteInterface;	// IMP=0x000000000001c4c6
- (id)exportedInterface;	// IMP=0x000000000001c4be
- (void)connectionInterrupted;	// IMP=0x000000000001c45c
- (void)connectionInvalidated;	// IMP=0x000000000001c3fa
- (void)_destroyXPCConnection;	// IMP=0x000000000001c394

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

