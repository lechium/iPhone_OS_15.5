//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@interface NSData (TransparencyData)
+ (id)dataWithUint64:(unsigned long long)arg1 length:(unsigned long long)arg2;	// IMP=0x0000000000086060
+ (id)random;	// IMP=0x0000000000085fe7
+ (id)dataWithHexString:(const char *)arg1;	// IMP=0x0000000000085c40
- (id)sha256WithSalt:(id)arg1;	// IMP=0x0000000000085e80
- (id)sha256;	// IMP=0x0000000000085dd6
- (id)hexString;	// IMP=0x0000000000085d06
@end

