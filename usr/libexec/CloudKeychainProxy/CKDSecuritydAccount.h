//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CKDSecuritydAccount : NSObject
{
}

+ (id)securitydAccount;	// IMP=0x0020000000007ff3
- (int)syncWithAllPeers:(id *)arg1;	// IMP=0x0040000000007fa9
- (id)syncWithPeers:(id)arg1 backups:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000007f58
- (_Bool)ensurePeerRegistration:(id *)arg1;	// IMP=0x0010000000007f0e
- (id)keysChanged:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000007e86

@end

