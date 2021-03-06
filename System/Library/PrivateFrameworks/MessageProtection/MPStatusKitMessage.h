//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

@interface MPStatusKitMessage : NSObject
{
    unsigned short _index;	// 8 = 0x8
    NSData *_encryptedMessage;	// 16 = 0x10
    NSData *_signature;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000a352
@property(readonly, nonatomic) NSData *signature; // @synthesize signature=_signature;
@property(readonly, nonatomic) NSData *encryptedMessage; // @synthesize encryptedMessage=_encryptedMessage;
@property(readonly, nonatomic) unsigned short index; // @synthesize index=_index;
- (id)initWithIndex:(unsigned short)arg1 encryptedMessage:(id)arg2 signature:(id)arg3;	// IMP=0x000000000000a290

@end

