//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IDSFoundation/NSCopying-Protocol.h>

@interface IDSSockAddrWrapper : NSObject <NSCopying>
{
    struct sockaddr_storage _sa;	// 8 = 0x8
}

+ (id)wrapperWithWrapper:(id)arg1 andPortHostOrder:(unsigned short)arg2;	// IMP=0x000000000009e5f3
+ (id)wrapperWithAddressString:(id)arg1 withPortHostOrder:(unsigned short)arg2;	// IMP=0x000000000009e3c4
+ (id)wrapperWithAddressString:(id)arg1 withPortHostOrder:(unsigned short)arg2 withInterfaceName:(id)arg3;	// IMP=0x000000000009e263
+ (id)wrapperWithSockAddr:(const struct sockaddr *)arg1;	// IMP=0x000000000009e22d
- (void)updateLocalPort:(unsigned short)arg1;	// IMP=0x000000000009ea54
- (void)copySockAddr:(struct sockaddr *)arg1;	// IMP=0x000000000009ea3b
- (unsigned long long)hash;	// IMP=0x000000000009e930
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000009e8c9
- (id)ipString;	// IMP=0x000000000009e7cb
- (id)ipData;	// IMP=0x000000000009e759
- (_Bool)isEqualToWrapper:(id)arg1;	// IMP=0x000000000009e723
- (_Bool)isEqualToSockAddr:(const struct sockaddr *)arg1;	// IMP=0x000000000009e6d0
@property(readonly, nonatomic) unsigned short saPortHostOrder;
@property(readonly, nonatomic) const struct sockaddr_in6 *sa6;
@property(readonly, nonatomic) const struct sockaddr_in *sa4;
@property(readonly, nonatomic) const struct sockaddr *sa;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000009e5e8
- (id)description;	// IMP=0x000000000009e466
- (id)initWithSockAddr:(const struct sockaddr *)arg1;	// IMP=0x000000000009e3e0

@end

