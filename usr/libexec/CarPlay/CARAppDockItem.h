//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CARAppDockItem : NSObject
{
    _Bool _active;	// 8 = 0x8
    NSString *_bundleIdentifier;	// 16 = 0x10
    unsigned long long _category;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000001277b
@property(readonly, nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(readonly, nonatomic) unsigned long long category; // @synthesize category=_category;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (_Bool)isEqualToAppDockItem:(id)arg1;	// IMP=0x0010000000012652
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000125c6
- (id)initWithBundleIdentifier:(id)arg1 category:(unsigned long long)arg2 active:(_Bool)arg3;	// IMP=0x001000000001253d

@end

