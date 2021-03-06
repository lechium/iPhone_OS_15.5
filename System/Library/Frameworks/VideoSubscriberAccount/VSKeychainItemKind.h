//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VideoSubscriberAccount/NSCopying-Protocol.h>

@class NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface VSKeychainItemKind : NSObject <NSCopying>
{
    NSString *_itemClassName;	// 8 = 0x8
    const struct __CFString *_secItemClass;	// 16 = 0x10
    NSArray *_properties;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000005428a
@property(copy, nonatomic) NSArray *properties; // @synthesize properties=_properties;
@property(nonatomic) const struct __CFString *secItemClass; // @synthesize secItemClass=_secItemClass;
@property(copy, nonatomic) NSString *itemClassName; // @synthesize itemClassName=_itemClassName;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000054192
@property(readonly, copy, nonatomic) NSDictionary *attributesBySecItemAttributeKey;
@property(readonly, copy, nonatomic) NSDictionary *attributesByName;
- (void)dealloc;	// IMP=0x0000000000053d1c
- (id)init;	// IMP=0x0000000000053c9c

@end

