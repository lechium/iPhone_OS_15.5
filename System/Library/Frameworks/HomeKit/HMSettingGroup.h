//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/NSSecureCoding-Protocol.h>

@class NSArray, NSMutableDictionary, NSString, NSUUID;

@interface HMSettingGroup : NSObject <NSSecureCoding>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableDictionary *_settings;	// 16 = 0x10
    NSMutableDictionary *_groups;	// 24 = 0x18
    NSString *_keyPath;	// 32 = 0x20
    NSUUID *_identifier;	// 40 = 0x28
    NSString *_name;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000c055b
- (void).cxx_destruct;	// IMP=0x00000000000c0254
@property(readonly, copy) NSString *name; // @synthesize name=_name;
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000c0226
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000c0060
- (void)_longDescriptionWithCurrentGroup:(id)arg1 currentSettings:(id)arg2;	// IMP=0x00000000000bff11
- (id)longDescription;	// IMP=0x00000000000bfe7e
- (id)description;	// IMP=0x00000000000bfe02
- (void)fixNestedKeyPaths;	// IMP=0x00000000000bfd1c
@property(copy) NSString *keyPath; // @synthesize keyPath=_keyPath;
- (void)addSetting:(id)arg1;	// IMP=0x00000000000bfb2a
- (void)addGroup:(id)arg1;	// IMP=0x00000000000bf9ec
@property(readonly, copy) NSArray *settings;
@property(readonly, copy) NSArray *groups;
- (unsigned long long)hash;	// IMP=0x00000000000bf8e0
@property(readonly, copy) NSString *localizedTitle;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 groups:(id)arg3 settings:(id)arg4;	// IMP=0x00000000000bf657

@end

