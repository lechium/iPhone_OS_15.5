//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/HMParsedAccessoryEventTopic-Protocol.h>
#import <HomeKit/HMParsedAccessorySettingEventTopic-Protocol.h>
#import <HomeKit/HMParsedHomeEventTopic-Protocol.h>

@class NSString, NSUUID;

@interface HMParsedEventTopic : NSObject <HMParsedAccessoryEventTopic, HMParsedAccessorySettingEventTopic, HMParsedHomeEventTopic>
{
    NSString *_originalTopic;	// 8 = 0x8
    NSUUID *_homeUUID;	// 16 = 0x10
    NSUUID *_accessoryUUID;	// 24 = 0x18
    NSString *_topicSuffix;	// 32 = 0x20
    NSUUID *_userUUID;	// 40 = 0x28
    NSString *_accessorySettingKeyPath;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000020fcb7
@property(copy, nonatomic) NSString *accessorySettingKeyPath; // @synthesize accessorySettingKeyPath=_accessorySettingKeyPath;
@property(copy, nonatomic) NSUUID *userUUID; // @synthesize userUUID=_userUUID;
@property(copy, nonatomic) NSString *topicSuffix; // @synthesize topicSuffix=_topicSuffix;
@property(copy, nonatomic) NSUUID *accessoryUUID; // @synthesize accessoryUUID=_accessoryUUID;
@property(copy, nonatomic) NSUUID *homeUUID; // @synthesize homeUUID=_homeUUID;
@property(readonly, copy, nonatomic) NSString *originalTopic; // @synthesize originalTopic=_originalTopic;
- (id)description;	// IMP=0x000000000020fb3d
@property(readonly, nonatomic) unsigned long long homeEventTopicSuffixID;
@property(readonly, nonatomic) unsigned long long accessoryEventTopicSuffixID;
- (id)asHomeEventTopic;	// IMP=0x000000000020fa14
- (id)asAccessorySettingTopic;	// IMP=0x000000000020f999
- (id)asAccessoryTopic;	// IMP=0x000000000020f91e
- (id)initWithTopic:(id)arg1;	// IMP=0x000000000020f8b3

@end

