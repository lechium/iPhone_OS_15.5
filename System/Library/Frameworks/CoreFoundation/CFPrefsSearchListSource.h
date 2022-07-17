//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CFPrefsCloudSource, CFPrefsPlistSource;

__attribute__((visibility("hidden")))
@interface CFPrefsSearchListSource
{
    struct __CFDictionary *_keysToSources;	// 64 = 0x40
    struct __CFString *_identifier;	// 72 = 0x48
    struct __CFArray *_sourceList;	// 80 = 0x50
    struct __CFSet *_cloudKeys;	// 88 = 0x58
    struct __CFArray *_cloudPrefixKeys;	// 96 = 0x60
    CFPrefsPlistSource *_standardSetTarget;	// 104 = 0x68
    CFPrefsCloudSource *_cloudSetTarget;	// 112 = 0x70
    _Bool initialized;	// 120 = 0x78
}

- (void)dealloc;	// IMP=0x000000000013dcfd
- (struct __CFString *)copyOSLogDescription;	// IMP=0x000000000013dc7f
- (id)description;	// IMP=0x000000000013da2c
- (struct __CFString *)domainIdentifier;	// IMP=0x000000000013da20
- (void)deferredNotifyCausedByLoadingOfChangesFromDictionary:(struct __CFDictionary *)arg1 toDictionary:(struct __CFDictionary *)arg2;	// IMP=0x000000000013d782
- (void)deferredNotifyCausedByLocalWriteOfChangesToKey:(struct __CFString *)arg1 fromValue:(void *)arg2 toValue:(void *)arg3;	// IMP=0x000000000013d648
- (struct __CFDictionary *)alreadylocked_copyDictionary;	// IMP=0x000000000013d4d1
- (long long)generationCount;	// IMP=0x000000000013d475
- (void)handleChangeNotificationForDomainIdentifier:(struct __CFString *)arg1 isRemote:(_Bool)arg2;	// IMP=0x000000000013d30f
- (id)createRequestNewContentMessageForDaemon:(int)arg1;	// IMP=0x000000000013cadd
- (void)handleReply:(id)arg1 toRequestNewDataMessage:(id)arg2 onConnection:(id)arg3 retryCount:(int)arg4 error:(_Bool *)arg5;	// IMP=0x000000000013c8a8
- (struct __CFArray *)alreadylocked_copyKeyList;	// IMP=0x000000000013c624
- (_Bool)synchronize;	// IMP=0x000000000013c61f
- (void)fullCloudSynchronizeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000013c539
- (void)alreadylocked_setPrecopiedValues:(const void **)arg1 forKeys:(const struct __CFString **)arg2 count:(long long)arg3 from:(id)arg4;	// IMP=0x000000000013bcf9
- (void *)alreadylocked_copyValueForKey:(struct __CFString *)arg1;	// IMP=0x000000000013b3f4
- (_Bool)isDirectModeEnabled;	// IMP=0x000000000013ac3f
- (void)transitionIntoDirectModeIfNeededWithRetryBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000013ac27
- (void)unlock;	// IMP=0x000000000013ac26
- (void)lock;	// IMP=0x000000000013ac25
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000013aa75
- (id)initWithIdentifier:(struct __CFString *)arg1 containingPreferences:(id)arg2;	// IMP=0x000000000013992a

@end
