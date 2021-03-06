//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ApplePushService/NSCoding-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface APSMessage : NSObject <NSCoding>
{
    NSMutableDictionary *_plist;	// 8 = 0x8
    NSMutableDictionary *_properties;	// 16 = 0x10
    void *_xpcMessage;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_ivarQueue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000147f5
- (id)dictionaryRepresentation;	// IMP=0x0000000000014702
- (void)setInstanceObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000145bd
- (id)instanceObjectForKey:(id)arg1;	// IMP=0x000000000001446d
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000014355
- (id)objectForKey:(id)arg1;	// IMP=0x0000000000014205
@property(nonatomic) unsigned long long sendRTT;
- (id)guid;	// IMP=0x0000000000014147
- (void)setGuid:(id)arg1;	// IMP=0x000000000001412e
@property(nonatomic) unsigned long long identifier;
@property(retain, nonatomic) NSDictionary *userInfo;
@property(retain, nonatomic) NSString *correlationIdentifier;
@property(retain, nonatomic) NSString *topic;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000013e9f
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000013dfc
- (id)initWithTopic:(id)arg1 userInfo:(id)arg2;	// IMP=0x0000000000013ccf
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000013cbb
- (id)initWithDictionary:(id)arg1 xpcMessage:(id)arg2;	// IMP=0x0000000000013bee

@end

