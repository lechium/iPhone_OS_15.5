//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _LTHotfixManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSURL *_hotfixURL;	// 16 = 0x10
}

+ (void)initialize;	// IMP=0x000000000000ac0d
- (void).cxx_destruct;	// IMP=0x000000000000c880
- (void)_decompressArchive:(id)arg1 to:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000c28b
- (void)_downloadHotfix:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000ba98
- (void)_downloadMappingPlist:(CDUnknownBlockType)arg1;	// IMP=0x000000000000b926
- (id)_CDNURL:(id)arg1;	// IMP=0x000000000000b8be
- (void)_downloadWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000b64f
- (void)deleteHotfix:(CDUnknownBlockType)arg1;	// IMP=0x000000000000b411
- (void)updateHotfix:(CDUnknownBlockType)arg1;	// IMP=0x000000000000af86
@property(readonly, nonatomic) NSURL *hotfixURL; // @synthesize hotfixURL=_hotfixURL;
- (id)init;	// IMP=0x000000000000ad47

@end

