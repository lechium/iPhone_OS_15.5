//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ChatKit/NSSecureCoding-Protocol.h>

@interface IMMockItemInfo : NSObject <NSSecureCoding>
{
    _Bool _outgoing;	// 8 = 0x8
    long long _type;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000195fc9
+ (id)decodedMockItemInfoArray:(id)arg1;	// IMP=0x0000000000195e30
+ (id)encodedMockItemInfoArray:(id)arg1;	// IMP=0x0000000000195dcc
+ (id)defaultMockInfoArray;	// IMP=0x0000000000195d27
@property(readonly, nonatomic) _Bool outgoing; // @synthesize outgoing=_outgoing;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000196096
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000196019
- (id)initWithMockItemType:(long long)arg1 outgoing:(_Bool)arg2;	// IMP=0x0000000000195fd1

@end

