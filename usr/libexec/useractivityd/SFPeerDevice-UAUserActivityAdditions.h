//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Sharing/SFPeerDevice.h>

@class NSString;

@interface SFPeerDevice (UAUserActivityAdditions)
+ (id)deviceTypeForModelIdentifier:(id)arg1;	// IMP=0x0020000000013996
+ (id)testPeerForModel:(id)arg1;	// IMP=0x001000000001349b
+ (id)peerForSelf;	// IMP=0x0010000000013224
@property(readonly, retain) NSString *deviceType;
- (id)copy;	// IMP=0x00100000000136aa
@end
