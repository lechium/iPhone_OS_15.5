//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NEConfigurationValidating-Protocol.h>
#import <NetworkExtension/NEPrettyDescription-Protocol.h>
#import <NetworkExtension/NSCopying-Protocol.h>
#import <NetworkExtension/NSSecureCoding-Protocol.h>

@class NEDNSSettings, NSArray;

@interface NEDNSSettingsBundle : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying>
{
    _Bool _enabled;	// 8 = 0x8
    NSArray *_onDemandRules;	// 16 = 0x10
    NEDNSSettings *_settings;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000007f1f0
- (void).cxx_destruct;	// IMP=0x000000000007f990
@property(copy) NEDNSSettings *settings; // @synthesize settings=_settings;
@property(copy) NSArray *onDemandRules; // @synthesize onDemandRules=_onDemandRules;
@property(getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (id)description;	// IMP=0x000000000007f920
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000007f828
- (_Bool)checkValidityAndCollectErrors:(id)arg1;	// IMP=0x000000000007f59b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007f47c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000007f3aa
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000007f246
- (id)init;	// IMP=0x000000000007f1f8

@end

