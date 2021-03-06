//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreKnowledge/CKVSkitReadAccess-Protocol.h>

@class CKVProvisionalResourceManager, NSString, NSURL;

@interface CKVSkitReader : NSObject <CKVSkitReadAccess>
{
    NSURL *_directoryURL;	// 8 = 0x8
    CKVProvisionalResourceManager *_resourceManager;	// 16 = 0x10
    struct unique_ptr<skitbridge::Searcher, std::default_delete<skitbridge::Searcher>> _searcher;	// 24 = 0x18
}

+ (void)initialize;	// IMP=0x00000000000c051f
- (id).cxx_construct;	// IMP=0x00000000000bfb97
- (void).cxx_destruct;	// IMP=0x00000000000bfb64
- (id)matchSpansOfTokenChain:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000bfa1e
- (void)prewarm;	// IMP=0x00000000000bfa01
- (id)indexLocale;	// IMP=0x00000000000bf936
- (_Bool)deactivate;	// IMP=0x00000000000bf845
- (CDUnknownBlockType)_deactivationBlock;	// IMP=0x00000000000bf7c2
- (CDUnknownBlockType)_activationBlock;	// IMP=0x00000000000bf73f
- (void)dealloc;	// IMP=0x00000000000bf6cc
- (id)init;	// IMP=0x00000000000bf668
- (id)initWithSkitDirectoryURL:(id)arg1 lifespan:(double)arg2;	// IMP=0x00000000000bf375
- (id)initWithSkitDirectoryURL:(id)arg1;	// IMP=0x00000000000bf35b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

