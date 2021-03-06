//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSData, NSDictionary;
@protocol IDSEncryptionSyncQueue;

@protocol IDSSyncEncrypter <NSObject>
- (NSData *)encryptData:(NSData *)arg1 withEncryptedAttributes:(NSDictionary *)arg2 usedIdentifier:(id *)arg3 onQueue:(id <IDSEncryptionSyncQueue>)arg4 error:(id *)arg5;
@end

