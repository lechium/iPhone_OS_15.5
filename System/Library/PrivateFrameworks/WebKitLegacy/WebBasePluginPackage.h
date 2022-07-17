//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface WebBasePluginPackage : NSObject
{
    NSMutableSet *pluginDatabases;	// 8 = 0x8
    struct String path;	// 16 = 0x10
    struct PluginInfo pluginInfo;	// 24 = 0x18
    struct RetainPtr<__CFBundle *> cfBundle;	// 80 = 0x50
    CDUnknownFunctionPointerType BP_CreatePluginMIMETypesPreferences;	// 88 = 0x58
}

+ (id)pluginWithPath:(id)arg1;	// IMP=0x00000000000a12d0
+ (void)initialize;	// IMP=0x00000000000a12c0
- (id).cxx_construct;	// IMP=0x00000000000a2b10
- (void).cxx_destruct;	// IMP=0x00000000000a2a00
- (struct String)bundleVersion;	// IMP=0x00000000000a2980
- (struct String)bundleIdentifier;	// IMP=0x00000000000a2950
- (void)wasRemovedFromPluginDatabase:(id)arg1;	// IMP=0x00000000000a2930
- (void)wasAddedToPluginDatabase:(id)arg1;	// IMP=0x00000000000a28f0
- (unsigned int)versionNumber;	// IMP=0x00000000000a28e0
- (_Bool)isNativeLibraryData:(id)arg1;	// IMP=0x00000000000a2360
- (_Bool)isJavaPlugIn;	// IMP=0x00000000000a22b0
- (_Bool)isQuickTimePlugIn;	// IMP=0x00000000000a2200
- (id)MIMETypeForExtension:(const void *)arg1;	// IMP=0x00000000000a2150
- (_Bool)supportsMIMEType:(const void *)arg1;	// IMP=0x00000000000a20f0
- (_Bool)supportsExtension:(const void *)arg1;	// IMP=0x00000000000a2060
- (const void *)pluginInfo;	// IMP=0x00000000000a2050
- (const void *)path;	// IMP=0x00000000000a2040
- (void)dealloc;	// IMP=0x00000000000a2000
- (_Bool)load;	// IMP=0x00000000000a1fc0
- (_Bool)getPluginInfoFromPLists;	// IMP=0x00000000000a1540
- (id)_objectForInfoDictionaryKey:(id)arg1;	// IMP=0x00000000000a1500
- (id)pListForPath:(id)arg1 createFile:(_Bool)arg2;	// IMP=0x00000000000a1490
- (void)createPropertyListFile;	// IMP=0x00000000000a1440
- (void)unload;	// IMP=0x00000000000a1430
- (id)initWithPath:(id)arg1;	// IMP=0x00000000000a1310

@end
