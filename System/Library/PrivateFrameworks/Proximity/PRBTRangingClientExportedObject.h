//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Proximity/PRBTRangingClientProtocol-Protocol.h>

@class NSString;
@protocol PRBTRangingClientProtocol;

@interface PRBTRangingClientExportedObject : NSObject <PRBTRangingClientProtocol>
{
    id <PRBTRangingClientProtocol> _rangingClient;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000002dd6a
@property(nonatomic) __weak id <PRBTRangingClientProtocol> rangingClient; // @synthesize rangingClient=_rangingClient;
- (void)didReceiveNewBTRSSI:(id)arg1;	// IMP=0x000000000002dce9
- (void)didStopOwnerRangingOnDevice:(id)arg1 withError:(id)arg2;	// IMP=0x000000000002dc77
- (void)didStartRangingOnDevice:(id)arg1 withError:(id)arg2;	// IMP=0x000000000002dc05
- (void)didConnectToDevice:(id)arg1 withError:(id)arg2;	// IMP=0x000000000002db93
- (void)didFetchTxPower:(id)arg1 fromDevice:(id)arg2 withError:(id)arg3;	// IMP=0x000000000002db06
- (void)didFailWithError:(id)arg1;	// IMP=0x000000000002daac
- (id)initWithRangingClient:(id)arg1;	// IMP=0x000000000002da48

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

