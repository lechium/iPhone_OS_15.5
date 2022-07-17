//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NEPrettyDescription-Protocol.h>

@class NEConfiguration, NEConfigurationManager, NEFilterProviderConfiguration, NSString;

@interface NEFilterManager : NSObject <NEPrettyDescription>
{
    _Bool _hasLoaded;	// 8 = 0x8
    NEConfigurationManager *_configurationManager;	// 16 = 0x10
    NEConfiguration *_configuration;	// 24 = 0x18
}

+ (id)sharedManager;	// IMP=0x000000000006187a
- (void).cxx_destruct;	// IMP=0x0000000000063419
@property(retain) NEConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly) NEConfigurationManager *configurationManager; // @synthesize configurationManager=_configurationManager;
@property _Bool hasLoaded; // @synthesize hasLoaded=_hasLoaded;
@property long long grade;
- (id)description;	// IMP=0x0000000000063261
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;	// IMP=0x0000000000063120
@property(copy) NSString *localizedDescription;
@property(getter=isEnabled) _Bool enabled;
@property(retain) NEFilterProviderConfiguration *providerConfiguration;
- (void)saveToPreferencesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000062561
- (void)removeFromPreferencesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000062122
- (void)loadFromPreferencesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000006193f
- (id)initFilterManagerWithPluginType:(id)arg1;	// IMP=0x0000000000061565
- (void)createEmptyConfiguration;	// IMP=0x000000000006134f
- (id)init;	// IMP=0x000000000006132c

@end
