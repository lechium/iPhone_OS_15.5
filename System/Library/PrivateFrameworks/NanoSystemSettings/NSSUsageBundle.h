//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NanoSystemSettings/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface NSSUsageBundle : NSObject <NSSecureCoding>
{
    _Bool _purgeable;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSString *_bundleIdentifier;	// 24 = 0x18
    NSArray *_categories;	// 32 = 0x20
    unsigned long long _totalSize;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000018560
- (void).cxx_destruct;	// IMP=0x000000000001883e
@property(nonatomic) unsigned long long totalSize; // @synthesize totalSize=_totalSize;
@property(nonatomic, getter=isPurgeable) _Bool purgeable; // @synthesize purgeable=_purgeable;
@property(retain, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000018602
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000018568
- (id)description;	// IMP=0x0000000000018524

@end
