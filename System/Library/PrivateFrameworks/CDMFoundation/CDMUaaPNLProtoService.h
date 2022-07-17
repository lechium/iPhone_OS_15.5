//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet, UPModelBundle, UPSystemConfiguration;

@interface CDMUaaPNLProtoService
{
    UPModelBundle *__coreModelBundle;	// 32 = 0x20
    NSSet *__appModelBundles;	// 40 = 0x28
    UPSystemConfiguration *__systemConfiguration;	// 48 = 0x30
}

+ (id)loadModelBundle:(id)arg1 modelConfiguration:(id)arg2 error:(id *)arg3;	// IMP=0x000000000005036f
+ (id)createErrorResponse:(id)arg1;	// IMP=0x0000000000050319
+ (id)detectForegroundApp:(id)arg1 locale:(id)arg2;	// IMP=0x00000000000501ae
+ (id)loadAppModelBundles:(id)arg1 systemConfiguration:(id)arg2;	// IMP=0x000000000004fecf
+ (id)assetFolderNames;	// IMP=0x000000000004ec79
- (void).cxx_destruct;	// IMP=0x00000000000506f8
- (id)handle:(id)arg1;	// IMP=0x000000000004f661
- (id)setup:(id)arg1;	// IMP=0x000000000004ece0
- (_Bool)isEnabled;	// IMP=0x000000000004ec60
- (id)handleRequestCommandTypeNames;	// IMP=0x000000000004ebba

@end
