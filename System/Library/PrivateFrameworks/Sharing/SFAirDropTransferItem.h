//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Sharing/NSSecureCoding-Protocol.h>

@class NSString;

@interface SFAirDropTransferItem : NSObject <NSSecureCoding>
{
    _Bool _isFile;	// 8 = 0x8
    NSString *_type;	// 16 = 0x10
    NSString *_subtype;	// 24 = 0x18
    long long _count;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000008f3f
- (void).cxx_destruct;	// IMP=0x000000000000950d
@property(readonly, nonatomic) _Bool isFile; // @synthesize isFile=_isFile;
@property(readonly, nonatomic) long long count; // @synthesize count=_count;
@property(readonly, copy, nonatomic) NSString *subtype; // @synthesize subtype=_subtype;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000092cc
- (unsigned long long)hash;	// IMP=0x000000000000924e
- (id)description;	// IMP=0x0000000000009114
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000009076
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000008f47
- (void)incrementCount;	// IMP=0x0000000000008f35
- (id)initWithType:(id)arg1 subtype:(id)arg2 isFile:(_Bool)arg3;	// IMP=0x0000000000008e6e
- (id)initWithType:(id)arg1 isFile:(_Bool)arg2;	// IMP=0x0000000000008e57
- (id)init;	// IMP=0x0000000000008e3c

@end

