//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TrustedPeers/NSObject-Protocol.h>

@class NSData;

@protocol TPPublicKey <NSObject>
- (_Bool)checkSignature:(NSData *)arg1 matchesData:(NSData *)arg2;
- (NSData *)spki;
@end

