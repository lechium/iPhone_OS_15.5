//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface HLPAnalyticsEventController : NSObject
{
    NSDictionary *_requiredKeys;	// 8 = 0x8
    NSMutableDictionary *_countersByKey;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    NSString *_version;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x0000000000025c51
- (void).cxx_destruct;	// IMP=0x00000000000261b4
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSMutableDictionary *countersByKey; // @synthesize countersByKey=_countersByKey;
@property(readonly, nonatomic) NSDictionary *requiredKeys; // @synthesize requiredKeys=_requiredKeys;
- (id)counterForKey:(id)arg1;	// IMP=0x00000000000260bc
- (void)incrementCounterForKey:(id)arg1;	// IMP=0x0000000000025f83
- (void)logAnalyticsEvent:(id)arg1;	// IMP=0x0000000000025e87
- (void)configureWithHelpBookID:(id)arg1 version:(id)arg2;	// IMP=0x0000000000025ca6

@end
