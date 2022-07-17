//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DTXConnectionServices/DTXAllowedRPC-Protocol.h>

@class DTXChannel, NSString;

@interface DTXService : NSObject <DTXAllowedRPC>
{
    DTXChannel *_channel;	// 8 = 0x8
}

+ (void)registerCapabilities:(id)arg1;	// IMP=0x0000000000001e02
+ (_Bool)automaticallyRegistersCapabilities;	// IMP=0x0000000000001dfa
+ (void)instantiateServiceWithChannel:(id)arg1;	// IMP=0x0000000000001da4
- (void).cxx_destruct;	// IMP=0x0000000000001f3c
@property(readonly, retain, nonatomic) DTXChannel *channel; // @synthesize channel=_channel;
- (void)messageReceived:(id)arg1;	// IMP=0x0000000000001f2c
- (id)initWithChannel:(id)arg1;	// IMP=0x0000000000001e08

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
