//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NEPrettyDescription-Protocol.h>

@class NEConfiguration, NEConfigurationManager, NEDNSSettings, NSArray, NSString;

@interface NEDNSSettingsManager : NSObject <NEPrettyDescription>
{
    _Bool _hasLoaded;	// 8 = 0x8
    NEConfigurationManager *_configurationManager;	// 16 = 0x10
    NEConfiguration *_configuration;	// 24 = 0x18
}

+ (id)sharedManager;	// IMP=0x00000000001426af
- (void).cxx_destruct;	// IMP=0x0000000000143ac6
@property _Bool hasLoaded; // @synthesize hasLoaded=_hasLoaded;
@property(retain) NEConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly) NEConfigurationManager *configurationManager; // @synthesize configurationManager=_configurationManager;
- (id)description;	// IMP=0x0000000000143a62
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;	// IMP=0x0000000000143907
@property(copy) NSString *localizedDescription;
@property(copy) NSArray *onDemandRules;
@property(retain) NEDNSSettings *dnsSettings;
@property(getter=isEnabled) _Bool enabled;
- (void)saveToPreferencesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000143003
- (void)removeFromPreferencesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000142be7
- (void)loadFromPreferencesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000142736
- (id)initWithGrade:(long long)arg1;	// IMP=0x00000000001423d4
- (void)createEmptyConfigurationWithGrade:(long long)arg1;	// IMP=0x000000000014219a
- (id)init;	// IMP=0x0000000000142177

@end

