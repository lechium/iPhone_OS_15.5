//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IDS/NSCopying-Protocol.h>
#import <IDS/NSSecureCoding-Protocol.h>

@class NSData, NSString;
@protocol OS_nw_endpoint, OS_nw_parameters;

@interface IDSGroupSessionBroadcastParameter : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_groupSessionID;	// 8 = 0x8
    NSData *_salt;	// 16 = 0x10
    NSString *_serviceName;	// 24 = 0x18
    NSObject<OS_nw_parameters> *_parameters;	// 32 = 0x20
    NSObject<OS_nw_endpoint> *_endpoint;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000003f84c
- (void).cxx_destruct;	// IMP=0x000000000003fa38
@property(readonly, nonatomic) NSObject<OS_nw_endpoint> *endpoint; // @synthesize endpoint=_endpoint;
@property(readonly, nonatomic) NSObject<OS_nw_parameters> *parameters; // @synthesize parameters=_parameters;
@property(readonly, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(readonly, nonatomic) NSData *salt; // @synthesize salt=_salt;
@property(readonly, nonatomic) NSString *groupSessionID; // @synthesize groupSessionID=_groupSessionID;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003f9cf
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003f8d7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003f854
- (unsigned long long)hash;	// IMP=0x000000000003f7f2
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003f6a8
- (void)_requestNWConnectionforIDSGroupSessionBroadcastParameter:(CDUnknownBlockType)arg1;	// IMP=0x000000000003f582
- (id)initWithGroupSessionID:(id)arg1 salt:(id)arg2 serviceName:(id)arg3;	// IMP=0x000000000003f18e
- (id)initWithGroupSessionID:(id)arg1 serviceName:(id)arg2;	// IMP=0x000000000003f0f7

@end
