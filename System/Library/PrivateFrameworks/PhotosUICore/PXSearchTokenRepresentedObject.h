//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSSecureCoding-Protocol.h>

@class NSString, PSIQueryToken;

@interface PXSearchTokenRepresentedObject : NSObject <NSSecureCoding>
{
    NSString *_title;	// 8 = 0x8
    PSIQueryToken *_queryToken;	// 16 = 0x10
    NSString *_priorityAssetUUID;	// 24 = 0x18
}

+ (id)new;	// IMP=0x00000000001e4e97
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001e4e8f
- (void).cxx_destruct;	// IMP=0x00000000001e4e5c
@property(readonly, nonatomic) NSString *priorityAssetUUID; // @synthesize priorityAssetUUID=_priorityAssetUUID;
@property(readonly, nonatomic) PSIQueryToken *queryToken; // @synthesize queryToken=_queryToken;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (id)init;	// IMP=0x00000000001e4dc4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001e4d62
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001e4c11
- (id)description;	// IMP=0x00000000001e4b4f
- (unsigned long long)hash;	// IMP=0x00000000001e4ac2
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001e4972
- (id)dictionaryForArchiving;	// IMP=0x00000000001e47e1
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001e4635
- (id)initWithTitle:(id)arg1 queryToken:(id)arg2 priorityAssetUUID:(id)arg3;	// IMP=0x00000000001e455d
- (id)initWithTitle:(id)arg1 queryToken:(id)arg2;	// IMP=0x00000000001e4548

@end
