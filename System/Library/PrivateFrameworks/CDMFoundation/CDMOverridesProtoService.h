//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _TtC13CDMFoundation23CDMNLv4OverrideDatabase;

@interface CDMOverridesProtoService
{
    _TtC13CDMFoundation23CDMNLv4OverrideDatabase *database;	// 32 = 0x20
}

+ (id)trialFactorName;	// IMP=0x000000000000d0da
+ (id)assetFolderNames;	// IMP=0x000000000000d073
+ (id)pathToOverridesFileWithLanguageCode:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000000bf67
- (void).cxx_destruct;	// IMP=0x000000000000d10c
- (id)matchOverride:(id)arg1;	// IMP=0x000000000000d0ef
- (_Bool)isAssetRequired;	// IMP=0x000000000000d0e7
- (id)handle:(id)arg1;	// IMP=0x000000000000c600
- (id)setup:(id)arg1;	// IMP=0x000000000000bfee
- (id)handleRequestCommandTypeNames;	// IMP=0x000000000000bec1
- (_Bool)isEnabled;	// IMP=0x000000000000bea8

@end
