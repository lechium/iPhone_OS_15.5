//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableURLRequest.h>

@interface NSMutableURLRequest (GKAdditions)
+ (int)hashForPlayerID:(id)arg1;	// IMP=0x0000000000021a64
+ (id)_gkHTTPRequestWithURL:(id)arg1 method:(id)arg2 postData:(id)arg3;	// IMP=0x0000000000021784
- (void)setSAPversion:(id)arg1;	// IMP=0x00000000000228bd
- (void)setSAPSignature:(id)arg1;	// IMP=0x000000000002280f
- (void)setLocale:(id)arg1;	// IMP=0x00000000000226a8
- (void)setInternal:(_Bool)arg1;	// IMP=0x00000000000225d3
- (void)setPushToken:(id)arg1;	// IMP=0x0000000000022474
- (void)setBuildVersion:(id)arg1;	// IMP=0x0000000000022390
- (void)setProtocolVersion:(id)arg1;	// IMP=0x00000000000222ac
- (void)setProcessName:(id)arg1;	// IMP=0x00000000000221c8
- (void)setDeviceUniqueID:(id)arg1;	// IMP=0x00000000000220e4
- (void)setRestrictions:(id)arg1;	// IMP=0x0000000000021fe4
- (void)setStoreMode:(id)arg1;	// IMP=0x0000000000021f1a
- (void)setGameDescriptor:(id)arg1;	// IMP=0x0000000000021bdd
- (void)setPlayerID:(id)arg1 hash:(int)arg2 authToken:(id)arg3;	// IMP=0x0000000000021aa7
@end

