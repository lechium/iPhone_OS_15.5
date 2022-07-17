//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreTelephony/CoreTelephonyClientDataDelegateInternal-Protocol.h>

@class CTTelephonyNetworkInfo, NSString;

__attribute__((visibility("hidden")))
@interface CTTelephonyNetworkInfoDelegatePlus : NSObject <CoreTelephonyClientDataDelegateInternal>
{
    CTTelephonyNetworkInfo *_delegate;	// 8 = 0x8
    struct queue _clientQueue;	// 16 = 0x10
}

- (id).cxx_construct;	// IMP=0x0000000000053547
- (void).cxx_destruct;	// IMP=0x000000000005351e
@property(nonatomic) struct queue clientQueue; // @synthesize clientQueue=_clientQueue;
@property(nonatomic) __weak CTTelephonyNetworkInfo *delegate; // @synthesize delegate=_delegate;
- (void)dataStatus:(id)arg1 dataStatusInfo:(id)arg2;	// IMP=0x0000000000053404
- (void)dealloc;	// IMP=0x00000000000533c8
- (id)initWithDelegate:(id)arg1;	// IMP=0x0000000000053350

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
