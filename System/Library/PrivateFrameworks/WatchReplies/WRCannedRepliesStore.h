//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NPSDomainAccessor, NPSManager, NSArray, NSString, WRReplyStoreInfo;
@protocol OS_os_log;

@interface WRCannedRepliesStore : NSObject
{
    unsigned long long _category;	// 8 = 0x8
    WRReplyStoreInfo *_info;	// 16 = 0x10
    NSString *_cachedLanguage;	// 24 = 0x18
    NSArray *_cachedLocalizedReplies;	// 32 = 0x20
    NSArray *_cannedReplies;	// 40 = 0x28
    _Bool _didLocalizeDefaultReplies;	// 48 = 0x30
    _Bool _didMigrationCheck;	// 49 = 0x31
    NPSDomainAccessor *_domainAccessor;	// 56 = 0x38
    NSObject<OS_os_log> *_log;	// 64 = 0x40
    NPSManager *_npsManager;	// 72 = 0x48
}

+ (id)supportedLanguages;	// IMP=0x0000000000003de9
+ (_Bool)isTinker;	// IMP=0x00000000000037f3
+ (_Bool)supportsEnhancedEditing;	// IMP=0x000000000000368f
- (void).cxx_destruct;	// IMP=0x0000000000005a80
- (void)handleStoreChange;	// IMP=0x0000000000005969
- (id)migrateRepliesIfNeeded:(id)arg1;	// IMP=0x0000000000005044
- (void)saveReplies:(id)arg1;	// IMP=0x0000000000004e29
- (void)invalidateCachesIfNeededForLanguage:(id)arg1;	// IMP=0x0000000000004d9f
- (void)localizeDefaultRepliesIfNeeded;	// IMP=0x0000000000004ba1
- (void)loadCannedRepliesIfNeeded;	// IMP=0x0000000000004591
- (id)localizedFormalDefaultReply:(id)arg1;	// IMP=0x0000000000004507
- (id)localizedDefaultReply:(id)arg1;	// IMP=0x00000000000044b2
- (_Bool)usesFormalReplies;	// IMP=0x0000000000004468
- (_Bool)supportsSmartReplies;	// IMP=0x0000000000004452
- (void)setIncludeSmartReplies:(_Bool)arg1;	// IMP=0x0000000000004323
- (_Bool)includeSmartReplies;	// IMP=0x00000000000042a0
- (void)setCannedReplies:(id)arg1;	// IMP=0x0000000000003e8b
- (id)cannedReplies;	// IMP=0x0000000000003e47
- (id)repliesForLanguage:(id)arg1;	// IMP=0x00000000000039e5
- (id)npsManager;	// IMP=0x00000000000039aa
- (id)domainAccessor;	// IMP=0x0000000000003910
- (id)initWithCategory:(unsigned long long)arg1;	// IMP=0x000000000000380f
- (id)init;	// IMP=0x00000000000037fb
- (void)dealloc;	// IMP=0x000000000000364e

@end

