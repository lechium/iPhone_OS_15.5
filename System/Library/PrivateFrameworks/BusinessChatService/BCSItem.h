//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BusinessChatService/BCSExpiring-Protocol.h>
#import <BusinessChatService/BCSItemIdentifying-Protocol.h>

@class NSDate, NSString;

@interface BCSItem : NSObject <BCSItemIdentifying, BCSExpiring>
{
    NSDate *_expirationDate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000024f5d
@property(copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
- (_Bool)matchesItemIdentifying:(id)arg1;	// IMP=0x0000000000024f3c
@property(readonly, nonatomic) long long type;
@property(readonly, nonatomic) long long truncatedHash;
@property(readonly, nonatomic) NSObject *itemIdentifier;
@property(readonly, nonatomic, getter=isExpired) _Bool expired;
- (id)init;	// IMP=0x0000000000024e27

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
