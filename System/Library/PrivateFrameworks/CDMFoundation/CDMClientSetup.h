//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSLocale, NSString;

@interface CDMClientSetup : NSObject
{
    NSLocale *_localeIdentifier;	// 8 = 0x8
    NSString *_sandboxId;	// 16 = 0x10
    NSString *_activeServiceGraph;	// 24 = 0x18
    NSString *_assetDirPath;	// 32 = 0x20
    NSArray *_overrideSiriVocabSpans;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000011546
@property(readonly) NSArray *overrideSiriVocabSpans; // @synthesize overrideSiriVocabSpans=_overrideSiriVocabSpans;
@property(readonly) NSString *assetDirPath; // @synthesize assetDirPath=_assetDirPath;
@property(readonly) NSString *activeServiceGraph; // @synthesize activeServiceGraph=_activeServiceGraph;
@property(readonly) NSString *sandboxId; // @synthesize sandboxId=_sandboxId;
@property(readonly) NSLocale *localeIdentifier; // @synthesize localeIdentifier=_localeIdentifier;
- (id)description;	// IMP=0x00000000000114a0
- (id)initWithLocaleIdentifier:(id)arg1 sandboxId:(id)arg2 activeServiceGraph:(id)arg3 assetDirPath:(id)arg4 overrideSiriVocabSpans:(id)arg5;	// IMP=0x000000000001139e
- (id)initWithLocaleIdentifier:(id)arg1 sandboxId:(id)arg2 activeServiceGraph:(id)arg3;	// IMP=0x00000000000112e7
- (id)initWithLocaleIdentifier:(id)arg1 sandboxId:(id)arg2;	// IMP=0x000000000001124e

@end

