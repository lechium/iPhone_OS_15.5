//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NEPrettyDescription-Protocol.h>

@class NEConfiguration, NEConfigurationManager, NEDNSProxyProviderProtocol, NSString;

@interface NEDNSProxyManager : NSObject <NEPrettyDescription>
{
    _Bool _hasLoaded;	// 8 = 0x8
    NEConfiguration *_configuration;	// 16 = 0x10
    NEConfigurationManager *_configurationManager;	// 24 = 0x18
}

+ (id)sharedManager;	// IMP=0x000000000003fef5
- (void).cxx_destruct;	// IMP=0x000000000004143d
@property(readonly) NEConfigurationManager *configurationManager; // @synthesize configurationManager=_configurationManager;
@property(retain) NEConfiguration *configuration; // @synthesize configuration=_configuration;
@property _Bool hasLoaded; // @synthesize hasLoaded=_hasLoaded;
- (id)description;	// IMP=0x00000000000413d9
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;	// IMP=0x0000000000041298
@property(copy) NSString *localizedDescription;
@property(getter=isEnabled) _Bool enabled;
@property(retain) NEDNSProxyProviderProtocol *providerProtocol;
- (void)saveToPreferencesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000004089a
- (void)removeFromPreferencesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000004047e
- (void)loadFromPreferencesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000003ffd2
- (id)initDNSProxyManagerWithPluginType:(id)arg1;	// IMP=0x000000000003fbf0
- (void)createEmptyConfiguration;	// IMP=0x000000000003f90e
- (id)init;	// IMP=0x000000000003f8b6

@end

