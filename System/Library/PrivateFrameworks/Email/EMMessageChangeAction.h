//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Email/NSSecureCoding-Protocol.h>

@class NSArray;

@interface EMMessageChangeAction : NSObject <NSSecureCoding>
{
    NSArray *_objectIDs;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000003f211
- (void).cxx_destruct;	// IMP=0x000000000003f3cf
@property(readonly, copy, nonatomic) NSArray *objectIDs; // @synthesize objectIDs=_objectIDs;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003f336
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003f219
@property(readonly, nonatomic) long long signpostType;
- (id)initWithMessageListItems:(id)arg1;	// IMP=0x000000000003f136

@end
