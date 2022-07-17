//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DVTInstrumentsFoundation/DTXAllowedRPC-Protocol.h>

@class DTXConnection, NSString;

@interface DTTapMessageHandlerArchiver <DTXAllowedRPC>
{
    DTXConnection *_helperConnection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000006227d
- (void)_helperConnectionError;	// IMP=0x0000000000062236
- (id)messageReceived:(id)arg1;	// IMP=0x0000000000062055
- (void)dealloc;	// IMP=0x0000000000061ff5
- (id)initWithConfig:(id)arg1 archiveURL:(id)arg2;	// IMP=0x0000000000061d29

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
