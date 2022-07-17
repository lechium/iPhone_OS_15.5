//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDDatabaseTransactionContext, HDKeyValueDomain, HDProfile, NSCalendar;

@interface ACHSyncingMonthlyChallengeTemplateCache : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    HDDatabaseTransactionContext *_databaseContext;	// 16 = 0x10
    HDProfile *_profile;	// 24 = 0x18
    NSCalendar *_gregorianCalendar;	// 32 = 0x20
    HDKeyValueDomain *_keyValueDomain;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000014362
@property(nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
@property(retain, nonatomic) HDKeyValueDomain *keyValueDomain; // @synthesize keyValueDomain=_keyValueDomain;
@property(copy, nonatomic) NSCalendar *gregorianCalendar; // @synthesize gregorianCalendar=_gregorianCalendar;
@property(nonatomic) __weak HDProfile *profile; // @synthesize profile=_profile;
@property(copy, nonatomic) HDDatabaseTransactionContext *databaseContext; // @synthesize databaseContext=_databaseContext;
- (id)templateForDateComponents:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000013f7b
- (id)allCachedTemplatesWithError:(id *)arg1;	// IMP=0x0000000000013a57
- (_Bool)cacheTemplate:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000134ae
- (id)initWithProfile:(id)arg1;	// IMP=0x00000000000133b5

@end
